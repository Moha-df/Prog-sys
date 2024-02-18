#include <stdio.h>
#include <dirent.h>

int main() {
    DIR *dir;
    struct dirent *entry;

    dir = opendir(".");

    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_name[0] != '.') {
            printf("%s\n", entry->d_name);
        }
    }

    closedir(dir);

    return 0;
}