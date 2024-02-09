#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    FILE *fichierSource = fopen(argv[1], "r");

    FILE *fichierDestination = fopen(argv[2], "w");

    int c;

    while ((c = fgetc(fichierSource)) != EOF) {
        fputc(c, fichierDestination);
    }

    fclose(fichierSource);
    fclose(fichierDestination);

    return 0;
}

   
