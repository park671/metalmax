//
// Created by youngpark on 2023/4/24.
//

#include "map.h"
#include "../opt/mem_opt.h"
#include "tile_bmp.h"
#include "map_data/map_data.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <__threading_support>

#define MAP_FILL_SIZE 16

volatile int map_width = 256,map_height = 256;
pthread_mutex_t mapRefreshMutex;

void fill(int i, int j, int bmpIdx, unsigned char *result) {
    for(int x = 0;x<16;x++) {
        int holeX = x + i*16;
        for(int y = 0;y<16;y++) {
            int holeY = y + j*16;
            result[holeX*((map_width + 2*MAP_FILL_SIZE)*16) + holeY] = bitmaps[bmpIdx][x * 16 + y];
        }
    }
}

unsigned char *fullMap = nullptr;
unsigned short *short_current_map;
unsigned short current_fill;

void initFullMap() {
    if (fullMap == nullptr) {
        fullMap = (unsigned char *) malloc(
                sizeof(char) * ((map_width + 2*MAP_FILL_SIZE) * (map_height + 2*MAP_FILL_SIZE) * 256));
        int bmpIdx = 0;
        for (int i = 0; i < map_height; i++) {
            for (int j = 0; j < map_width; j++) {
                bmpIdx = short_current_map[i * (map_width) + j];
                fill(i + MAP_FILL_SIZE, j + MAP_FILL_SIZE, bmpIdx, fullMap);
            }
        }
        // fill
        for (int i = 0; i < MAP_FILL_SIZE; i++) {
            for (int j = 0; j < map_width + 2*MAP_FILL_SIZE; j++) {
                fill(i, j, current_fill, fullMap);
                fill(i + map_height + MAP_FILL_SIZE, j, current_fill, fullMap);
            }
        }
        for (int i = MAP_FILL_SIZE; i < map_height + MAP_FILL_SIZE; i++) {
            for (int j = 0; j < MAP_FILL_SIZE; j++) {
                fill(i, j, current_fill, fullMap);
                fill(i, j + map_width + MAP_FILL_SIZE, current_fill, fullMap);
            }
        }
    }
}

void releaseMap() {
    if(fullMap != nullptr) {
        free(fullMap);
        fullMap = nullptr;
    }
}

int min(int a, int b) {
    return a < b ? a : b;
}

void refreshCurrentMap(int mapId) {
    pthread_mutex_lock(&mapRefreshMutex);
    releaseMap();
    short_current_map = short_map_data[mapId];
    current_fill = map_fill[mapId];
    map_height = map_size[mapId * 2];
    map_width = map_size[mapId * 2 + 1];
    initFullMap();
    pthread_mutex_unlock(&mapRefreshMutex);
}

unsigned char *getImage(int x, int y, unsigned char *result) {
    x += MAP_FILL_SIZE * 16;
    y += MAP_FILL_SIZE * 16;
    if(result == nullptr) {
        result = (unsigned char *) malloc(sizeof(char) * (16 * 16 * 256));
    }
    pthread_mutex_lock(&mapRefreshMutex);
    if(fullMap == nullptr) {
        initFullMap();
    }
    __memset_aarch64(result, 0, 16 * 16 * 256);
    //这里的逻辑是一大坨屎山
    int maxX = (map_height + 2 * MAP_FILL_SIZE) * 16, maxY = (map_width + 2 * MAP_FILL_SIZE) * 16;
    int renderXEnd = x + 255, renderYEnd = y + 255;
    int length = 0;
    int maxj1 = (maxY - y);
    int maxj2 = (renderYEnd - y) + 1;
    int maxj = min(maxj1, maxj2);
    for (int i = 0; i < 256; i++) {
        if (i + x >= maxX
            || i + x >= renderXEnd
            || i + x < 0) {
            continue;
        }
        if(y >= maxY
            || y >= renderYEnd
            || 255 + y < 0) {
            continue;
        }
        int resultStartIdx = i * 256;
        int fullMapStartIdx = (i + x) * (16 * (map_width + 2 * MAP_FILL_SIZE)) + y;
        if (y < 0) {
            resultStartIdx -= y;
            fullMapStartIdx -= y;
            length = maxj + y;
        } else {
            length = min(maxj, 256);
        }
        __memcpy_aarch64_simd(result + resultStartIdx, fullMap + fullMapStartIdx, length);
    }
    pthread_mutex_unlock(&mapRefreshMutex);
    return result;
}



