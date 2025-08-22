#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void es_lunghezza();
void es_concatenazione();
int inverti_stringa();
void swap(char *a, char *b);

int main() {

    es_lunghezza();
    es_concatenazione();
    int res = inverti_stringa();

    return res;
}

void es_lunghezza() {
    char string[MAX];
    int lunghezza, oppure = 0;
    int len;

    printf("Inserisci stringa: ");
    scanf("%s", string);

    for (int i=0; i<MAX; i++) {
        if (string[i] == '\0') {
            lunghezza = i;
            break;
        }

        oppure++;
    }

    for (len = 0; string[len] != '\0'; len++) {

    }

    printf("%d %d %d\n", lunghezza, oppure, len);
}

void es_concatenazione() {
    char str1[50];
    char str2[50];

    printf("Inserisci prima stringa: ");
    scanf("%s", str1);
    printf("Inserisci seconda stringa: ");
    scanf("%s", str2);

    int l1 = strlen(str1);
    int l2 = strlen(str2);

    for (int i=0; i<=l2; i++) { // l'uguale serve per copiare anche \0
        str1[i+l1] = str2[i];
    }

    printf("%s", str1);
}

int inverti_stringa() {
    char *string, temp;
    int n, len, i;

    do {
        printf("Inserire numero caratteri: ");
        scanf("%d", &n);
    } while( n <= 0);

    n++;

    string = malloc(n * sizeof(char));
    if (string == NULL) {
        printf("Errore di allocazione dinamica\n");
        return 1;
    }

    printf("Inserisci stringa: ");
    scanf("%s", string);


    len = strlen(string);
    for (i = 0; i<len/2; i++) {
        swap(string+i, string+len-i-1);
    }

    printf("Invrtita: %s", string);
}

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}