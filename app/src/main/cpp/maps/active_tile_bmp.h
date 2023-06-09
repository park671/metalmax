//
// Created by parkyu on 2023/6/10.
//

#ifndef METALMAX_ACTIVE_TILE_BMP_H
#define METALMAX_ACTIVE_TILE_BMP_H

#include "../global.h"

#define WATER_BLOCK_COUNT 49

extern unsigned short water_block_id[WATER_BLOCK_COUNT];

extern byte wave[3][16 * 4];

extern byte water[3][16 * 16];

extern void renderWave(byte direct, byte status, byte *screenBuffer, int x, int y);

bool isWater(unsigned short tileId);

bool isPureWater(unsigned short tileId);

#endif //METALMAX_ACTIVE_TILE_BMP_H
