#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>


void print_file_info(const char *filename) {
    
    struct stat file_stat;

    stat(filename, &file_stat);

    printf("UID : %u\n", file_stat.st_uid);
    printf("GID : %u\n", file_stat.st_gid);
    printf("File size : %ld octets\n", file_stat.st_size);
    printf("Type : %s\n", S_ISREG(file_stat.st_mode) ? "Régulier" : (S_ISDIR(file_stat.st_mode) ? "Répertoire" : "Inconnu"));
    printf("Mode : %o\n", file_stat.st_mode & (S_IRWXU | S_IRWXG | S_IRWXO));
}

int main(int argc, char *argv[]) {

    print_file_info(argv[1]);

    return EXIT_SUCCESS;
}
