#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include "nes_bank.h"
#include "../../../../opt/mem_opt.h"

// this workaround solves a problem with mirrored FDS RAM writes
// when the same bank is used twice; some NSF rips reuse bank 00
// in "unused" banks that actually get written to.
// it is preferred to fix the NSFs and leave this disabled.
#define FDS_MEMCPY 0

// for detecting mirrored writes in FDS NSFs
#define DETECT_FDS_MIRROR 0

#if FDS_MEMCPY
static UINT8* fds_image = NULL;
#endif

namespace xgm
{

  NES_BANK::NES_BANK ()
  {
    image = NULL;
  };

  NES_BANK::~NES_BANK ()
  {
    if (image)
      delete[]image;

    #if FDS_MEMCPY
    if (fds_image)
      delete[] fds_image;
    #endif
  }

  void NES_BANK::SetBankDefault (UINT8 bank, int value)
  {
    bankdefault[bank] = value;
  }

  bool NES_BANK::SetImage (UINT8 * data, UINT32 offset, UINT32 size)
  {
    int i;

    // �o���N�X�C�b�`�̏����l�͑S�āu�o���N�����v
    for (i = 0; i < 16; i++)
      bankdefault[i] = -1; // -1 is special empty bank

    int total_size = ((offset & 0xfff) + size);
    bankmax = (total_size >> 12); // count of full banks
    if (total_size & 0xfff) bankmax += 1; // include last partial bank
    if (bankmax > 256)
      return false;

    if (image)
      delete[]image;
    image = new UINT8[0x1000 * bankmax];
    __memset_aarch64 (image, 0, 0x1000 * bankmax);
    __memcpy_aarch64_simd (image + (offset & 0xfff), data, size);

    #if FDS_MEMCPY
      if (fds_image)
        delete[] fds_image;
      fds_image = new UINT8[0x10000];
      __memset_aarch64(fds_image, 0, 0x10000);
      for (i = 0; i < 16; i++)
        bank[i] = fds_image + 0x1000 * i;
    #else
    for (i = 0; i < bankmax; i++)
      bank[i] = image + 0x1000 * i;
    for (i = bankmax; i < 256; i++)
      bank[i] = null_bank;
    #endif

    return true;
  }

  void NES_BANK::Reset ()
  {
    __memset_aarch64 (null_bank, 0, 0x1000);
    for (int i = 0; i < 16; i++)
    {
      bankswitch[i] = bankdefault[i];

      #if FDS_MEMCPY
        bankswitch[i] = i;
        if (bankdefault[i] == -1 || bankdefault[i] >= bankmax)
          __memset_aarch64(bank[i], 0, 0x1000);
        else
          __memcpy_aarch64_simd(bank[i], image + (bankdefault[i] * 0x1000), 0x1000);
      #endif
    }
  }

  bool NES_BANK::Write (UINT32 adr, UINT32 val, UINT32 id)
  {
    #if FDS_MEMCPY
    if (!fds_enable)
    #endif
    if (0x5ff8 <= adr && adr < 0x6000)
    {
      bankswitch[(adr & 7) + 8] = val & 0xff;
      return true;
    }

    return false;
  }

  bool NES_BANK::Read (UINT32 adr, UINT32 & val, UINT32 id)
  {
    if (0x5ff8 <= adr && adr < 0x5fff)
    {
      val = bankswitch[(adr & 7) + 8];
      return true;
    }

    if (0 <= bankswitch[adr >> 12] && 0x8000 <= adr && adr < 0x10000)
    {
      val = bank[bankswitch[adr >> 12]][adr & 0xfff];
      return true;
    }

    return false;
  }

}                               // namespace
