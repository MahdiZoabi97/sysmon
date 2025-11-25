#include "cpu.h"
#include <stdio.h>
#include <unistd.h>

static long long last_total = 0, last_idle = 0;
static int initialized = 0;

float get_cpu_usage() {
    FILE *fp = fopen("/proc/stat", "r");
    if (!fp) return -1;

    long long user, nice, system, idle, iowait, irq, softirq;
    fscanf(fp, "cpu %lld %lld %lld %lld %lld %lld %lld",
           &user, &nice, &system, &idle, &iowait, &irq, &softirq);
    fclose(fp);

    long long idle_time = idle + iowait;
    long long total_time = user + nice + system + idle + iowait + irq + softirq;

    if (!initialized) {
        initialized = 1;
        last_total = total_time;
        last_idle = idle_time;
        return 0; 
    }

    long long diff_total = total_time - last_total;
    long long diff_idle = idle_time - last_idle;

    last_total = total_time;
    last_idle = idle_time;

    return (float)(100.0 * (1.0 - ((float)diff_idle / diff_total)));
}
