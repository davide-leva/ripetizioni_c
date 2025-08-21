#include <stdio.h>
#include <string.h>

#define MAX 100

void es_lunghezza();
void es_concatenazione();

int main() {

    es_lunghezza();
    es_concatenazione();

    return 0;
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