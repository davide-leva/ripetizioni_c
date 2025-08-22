#include <string.h>
#include <stdio.h>

#define MAX 100

int conta_caratteri(char *stringa, char carattere);

int main() {
    char stringa[MAX];
    char carattere;
    int conta;

    printf("Inserisci stringa: ");
    scanf("%s", stringa);
    getchar(); // raccoglie lo \n che proviene dal click del tasto ENTER

    printf("Inserisci carattere: ");
    scanf("%c", &carattere);
    
    conta = conta_caratteri(stringa, carattere);
    printf("Il carattere %c compare %d volte in %s\n", carattere, conta, stringa);

    return 0;   
}

int conta_caratteri(char *stringa, char carattere) {
    int conta = 0, len, i;

    len = strlen(stringa);
    for (i = 0; i < len; i++) {
        if (stringa[i] == carattere) {
            conta++;
        }
    }

    return conta;
}