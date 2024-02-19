#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <limits.h>
#include <linux/limits.h>

void ls_rec(char *path) {

    DIR *dir;
    struct dirent *entry;
    char new_path[PATH_MAX];

    dir = opendir(path);

    while ((entry = readdir(dir)) != NULL) { // Lis tout les fichiers ou repertoire dans le répertoire
        if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0 && entry->d_name[0]!= '.') {
            snprintf(new_path, sizeof(new_path), "%s/%s", path, entry->d_name); // stock dans new path : path/entry->d_name
            printf("%s\n", new_path);
            DIR *subdir = opendir(new_path); // verifie si new path est un dir ou un fichier
            if (subdir) {
                closedir(subdir);
                ls_rec(new_path);            // si new path est un dir, appelle la fonction ls_rec recursivement
            }
        }
    }

    closedir(dir);
}
int main(int argc, char *argv[]) {

    ls_rec(argv[1]);

    return 0;
}


