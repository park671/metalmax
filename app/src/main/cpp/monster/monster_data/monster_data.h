//
// Created by youngpark on 2023/5/12.
//

#ifndef METALMAX_MONSTER_DATA_H
#define METALMAX_MONSTER_DATA_H

#include "../../global.h"

#define MONSTER_PROPERTY_EMPTY 255
#define MONSTER_PROPERTY_STRIDE 14

extern int monster_count;
extern int monster_size[];
extern unsigned char monster_group[930];
extern byte *monster_model[];
extern byte monster_distribution_world[256];
extern byte monster_distribution_4_samll_maps[112];
extern byte monster_properties[];

#endif //METALMAX_MONSTER_DATA_H
