#include <stdlib.h> // Include le funzioni malloc e free
#include <stdio.h>

int main() {
    int *vettore;
    
    vettore = malloc(20 * sizeof(int));

    vettore[0] = 10;
}