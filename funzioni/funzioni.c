#include <stdio.h>

// Constante condivisa
#define MAX 100

// Variabile globale, letta da tutte le funzioni e anche modificata
int var = 10;

// Function prototype for adding three integers
int add(int a, int b, int c);
int funzione(char *nome, int x, int y, int z);

int main() {
    int x = 1, y = 2, z = 3;

    // Call the add function and print the result1
    int sum = add(x, y, z);
    printf("La somma di %d, %d e %d e': %d\n", x, y, z, sum);

    return 0;
}

// Function definition for adding three integers
int add(int a, int b, int c) {
    int somma;
    int x = 8;

    somma = a + b + c;

    return somma;
}

int funzione(char *nome, int x, int y, int z) {
    int a = 89;
}

