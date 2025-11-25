#include "memory.h"
#include <stdio.h>

void get_memory_usage(long *total, long *free) {
    FILE *fp = fopen("/proc/meminfo", "r");
    if (!fp) return;

    long memTotal, memAvail;
    fscanf(fp, "MemTotal: %ld kB\n", &memTotal);
    fscanf(fp, "MemFree: %ld kB\n", &memAvail);
    fclose(fp);

    *total = memTotal;
    *free = memAvail;
}
