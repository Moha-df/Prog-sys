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
    char c;

    int fichierSource = open(argv[1], O_RDONLY);

    int fichierDestination = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0666);

    // On place le curseur a la fin du fichier
    off_t taille_fichier = lseek(fichierSource, 0, SEEK_END);

    // Boucle qui va parcourir tout le fichier source en partant de la fin jusqua arriver au premier caractere
    for (off_t i = taille_fichier - 1; i >= 0; i--) {

        // Déplacement du curseur vers l'arrière d'un caractère à partir de la fin du fichier
        off_t position = lseek(fichierSource, i, SEEK_SET);
        

        // Lecture du caractère à la position actuelle du curseur
        int lecture = read(fichierSource, &c, 1);
        

        // Écriture du caractère lu dans le fichier destination
        int ecriture = write(fichierDestination, &c, 1);
}
    

    CHK(close(fichierSource));
    CHK(close(fichierDestination));
    


    return 0;
}