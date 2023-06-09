//
// Created by parkyu on 2023/6/7.
//

#include "store_data.h"
#include "../global.h"

byte store_0[7] = {65, 66, 101, 102, 122, 124, 117,};
byte store_1[3] = {205, 203, 210,};
byte store_2[6] = {41, 42, 43, 29, 9, 17,};
byte store_3[4] = {169, 163, 165, 202,};
byte store_4[1] = {8,};
byte store_5[2] = {2, 11,};
byte store_6[1] = {39,};
byte store_7[2] = {86, 87,};
byte store_8[2] = {86, 87,};
byte store_9[3] = {40, 41, 42,};
byte store_10[2] = {20, 22,};
byte store_11[13] = {169, 169, 163, 169, 169, 165, 1, 2, 1, 4, 6, 1, 165,};
byte store_12[13] = {13, 2, 1, 13, 9, 8, 1, 129, 129, 8, 129, 129, 202,};
byte store_13[13] = {14, 14, 14, 14, 14, 14, 10, 20, 50, 10, 20, 50, 169,};
byte store_14[2] = {169, 170,};
byte store_15[5] = {1, 2, 3, 4, 5,};

byte *stores_data[16] = {
        store_0, store_1, store_2, store_3, store_4, store_5, store_6, store_7, store_8, store_9,
        store_10, store_11, store_12, store_13, store_14, store_15,};

byte stores_size[16] = {
        7, 3, 6, 4, 1, 2, 1, 2, 2, 3,
        2, 13, 13, 13, 2, 5,};

byte vendor_data[18][6 * 2 + 1] = {
        {/*award*/165, 169, 1, 169, 2,   163, 1,   169, 4,  169, 6,   165, 1,},
        {/*award*/202, 169, 1, 169, 2,   169, 4,   202, 1,  164, 1,   159, 1,},
        {/*award*/161, 169, 1, 169, 2,   169, 4,   202, 1,  161, 1,   159, 1,},
        {/*award*/191, 169, 1, 202, 1,   195, 1,   169, 2,  166, 1,   159, 1,},
        {/*award*/170, 169, 1, 169, 2,   170, 1,   202, 1,  166, 1,   181, 1,},
        {/*award*/172, 169, 1, 202, 1,   181, 1,   170, 1,  162, 1,   159, 1,},
        {/*award*/198, 170, 1, 202, 1,   181, 1,   195, 1,  162, 1,   159, 1,},
        {/*award*/197, 170, 1, 202, 1,   181, 1,   172, 1,  162, 1,   159, 1,},
        {/*award*/190, 169, 1, 169, 2,   169, 4,   195, 1,  181, 1,   166, 1,},
        {/*award*/202, 13,  1, 2,   129, 1,   129, 13,  8,  9,   129, 8,   129,},
        {/*award*/202, 13,  1, 2,   1,   2,   8,   13,  8,  9,   129, 10,  129,},
        {/*award*/156, 13,  1, 2,   1,   2,   4,   13,  8,  9,   1,   10,  1,},
        {/*award*/162, 13,  1, 2,   1,   10,  1,   13,  8,  11,  1,   5,   1,},
        {/*award*/170, 13,  1, 2,   2,   6,   2,   13,  8,  5,   2,   8,   2,},
        {/*award*/167, 13,  1, 2,   1,   1,   1,   13,  8,  11,  1,   8,   1,},
        {/*award*/172, 13,  1, 2,   1,   1,   1,   13,  8,  9,   1,   10,  1,},
        {/*award*/171, 13,  8, 2,   8,   8,   8,   13,  16, 12,  8,   3,   8,},
        {/*award*/172, 13,  8, 2,   2,   5,   2,   13,  16, 12,  2,   3,   2,},
};
