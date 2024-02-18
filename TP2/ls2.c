#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>


void print_permissions(mode_t mode) {

    char perms[11];

    strcpy(perms, "----------");
    if (S_ISDIR(mode)) perms[0] = 'd';  
    if (mode & S_IRUSR) perms[1] = 'r';  
    if (mode & S_IWUSR) perms[2] = 'w';  
    if (mode & S_IXUSR) perms[3] = 'x';  
    if (mode & S_IRGRP) perms[4] = 'r';  
    if (mode & S_IWGRP) perms[5] = 'w';  
    if (mode & S_IXGRP) perms[6] = 'x';  
    if (mode & S_IROTH) perms[7] = 'r';  
    if (mode & S_IWOTH) perms[8] = 'w';
    if (mode & S_IXOTH) perms[9] = 'x'; 

    printf("%s", perms);
}

int main() {
    DIR *dir;
    struct dirent *entry;
    struct stat file_stat;

    dir = opendir(".");

    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_name[0] != '.') {
            stat(entry->d_name, &file_stat);
            print_permissions(file_stat.st_mode);
            printf(" %s\n", entry->d_name);
        }
    }

    // Ferme le répertoire
    closedir(dir);

    return 0;
}
