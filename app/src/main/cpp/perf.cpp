//
// Created by parkyu on 2023/5/8.
//

#include "perf.h"
#include <android/log.h>
#include <ctime>

clock_t start_clock, finish_clock;

extern "C" void startPerf() {
    start_clock = clock();
}

extern "C" void finishPerf(const char *tag) {
    finish_clock = clock();
    __android_log_print(ANDROID_LOG_ERROR,
                        tag,
                        "cpu clk cost:%.3fms",
                        (((double) (finish_clock - start_clock)) / CLOCKS_PER_SEC) * 1000);
}

timespec time1, time2;

extern "C" void startTimestamp() {
    clock_gettime(CLOCK_MONOTONIC, &time1);
}

extern "C" long getDuration() {
    clock_gettime(CLOCK_MONOTONIC, &time2);
    return (time2.tv_sec - time1.tv_sec) * 1000 + (time2.tv_nsec - time1.tv_nsec) / 1000000;
}