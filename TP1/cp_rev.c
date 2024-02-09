#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define CHK(op) do { if ((op) == -1) raler (#op); } while (0)


void raler (const char * msg)
{
    perror (msg);
    exit (EXIT_FAILURE);
}

int main(int argc, char* argv[]){
    // Préconditions : fichier source, fichier destination, taille du buffer
    // argv[1] : nom du fichier source
    // argv[2] : nom du fichier destination
    // argv[3] : taille du buffer en octets


    


    return 0;
}