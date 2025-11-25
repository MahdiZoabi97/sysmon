#include <stdio.h>
#include <dirent.h>
#include <ctype.h>

int get_process_count() {
    DIR *d = opendir("/proc");
    if (!d) return -1;

    struct dirent *entry;
    int count = 0;

    while ((entry = readdir(d)) != NULL) {
        if (isdigit(entry->d_name[0])) {
            count++;
        }
    }

    closedir(d);
    return count;
}
