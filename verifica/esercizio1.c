// ES1. Inserire da tastiera un numero intero e utilizzare malloc
// per dimensionare un array di interi. Tramite funzioni, determinare
// il valore minimo, massimo e stamparli nel main. Deallocare la memoria.

#include <stdio.h>
#include <stdlib.h>

void scan_vet(int *vet, int dim);
int max(int *vet, int dim);
int min(int *vet, int dim);

int main() {
    int n, *vet;

    printf("Inserisci dimensione vettore: ");
    scanf("%d", &n);

    // Allochiamo la memoria per il vettore
    vet = malloc(n * sizeof(int));

    scan_vet(vet, n);

    printf("Il valore massimo e': %d\n", max(vet, n));
    printf("Il valore minimo e': %d\n", min(vet, n));

    free(vet); // Deallocazione della memoria

    return 0;
}

void scan_vet(int *vet, int dim) {
    int num;

    for(int i=0; i<dim; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &num);
        vet[i] = num;
    }
}

int max(int *vet, int dim) {
    int max_val = vet[0];

    for (int i=1; i<dim; i++) {
        if (vet[i] > max_val) {
            max_val = vet[i];
        }
    }

    return max_val;
}

int min(int *vet, int dim) {
    int max_val = vet[0];

    for (int i=1; i<dim; i++) {
        if (vet[i] < max_val) {
            max_val = vet[i];
        }
    }

    return max_val;
}