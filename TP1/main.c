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

    int buffer_size;
    char buff[buffer_size];

    int fichierSource;
    int fichierDestination;
    fichierSource = open(argv[1], O_RDONLY);
    

    fichierDestination = open("fichierCreer.txt", O_WRONLY | O_TRUNC | O_CREAT, 0666);

    int nb_octet = read(fichierSource, buff, buffer_size);

    fichierDestination = write(fichierDestination, buff, nb_octet);

    CHK(close(fichierSource));
    CHK(close(fichierDestination));


    return 0;


}

   
