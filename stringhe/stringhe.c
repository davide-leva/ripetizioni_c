#include <stdio.h>
#include <string.h>

int main() {
    char string[5] = "ciao"; // il terminatore viene inserito automaticamente
    char vet[10];

    vet[0] = 'm';
    vet[1] = 'o';
    vet[2] = 'n';
    vet[3] = 'd';
    vet[4] = 'o';
    vet[5] = '\0';

    /* *(string+3) = string[3] = 'o' */

    printf("%s ", string);
    printf("%s", vet);

    int num = strlen(vet);
    printf("%d", num);

    return 0;
}