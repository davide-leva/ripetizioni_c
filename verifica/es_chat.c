#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 200

int conta_vocali(char *s);
int conta_parole(char *s);
char *rimuovi_spazi(char *s);

int main() {
    char frase[MAX], *senza_spazi;
    int n_vocali;

    printf("Inserisci frase: ");
    gets(frase);

    n_vocali = conta_vocali(frase);
    printf("La frase contiene %d vocali\n", n_vocali);

    senza_spazi = rimuovi_spazi(frase);
    printf("Senza spazi: %s\n", senza_spazi);

    return 0;
}

int conta_vocali(char *frase) {
    int n_vocali = 0, len, i;
    char c;

    len = strlen(frase);
    for(i=0; i<len; i++) {
        c = frase[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            n_vocali++;
        }
    }

    return n_vocali;
}

int conta_parole(char *s) {
    int n_parole = 1, len, i;

    len = strlen(s);

    if (len == 0) {
        return 0;
    }

    for(i = 0; i < len; i++) {
        if (s[i] == ' ') {
            n_parole++;
        }
    }

    return n_parole;
}

char *rimuovi_spazi(char *s) {
    char *senza_spazi = malloc(MAX * sizeof(char));
    int i, j, len;

    len = strlen(s);
    for (i=0, j=0; i < len; i++) {
        if (s[i] != ' ') {
            senza_spazi[j++] = s[i];
        }
    }

    return senza_spazi;
}