#include <stdio.h>
#include <unistd.h>
#include "cpu.h"
#include "memory.h"
#include "uptime.h"
#include "process.h"

int main() {
    printf("System Monitor\n");
    printf("=====================\n");

    while (1) {
        float cpu = get_cpu_usage();

        long total, free;
        get_memory_usage(&total, &free);
        double uptime = get_uptime();
        int procs = get_process_count();
        printf("CPU Usage: %.2f%%\n", cpu);
        printf("Memory   : %ld MB free / %ld MB total\n", free/1024, total/1024);
        printf("Uptime   : %.2f seconds\n", uptime);
        printf("---------------------\n");
        
        printf("Processes: %d\n", procs);

        
        

        sleep(1);
    }

    return 0;
}
