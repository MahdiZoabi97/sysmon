#include "uptime.h"
#include <stdio.h>

double get_uptime() {
    double up;
    FILE *fp = fopen("/proc/uptime", "r");
    if (!fp) return -1;

    fscanf(fp, "%lf", &up);
    fclose(fp);

    return up;
}
