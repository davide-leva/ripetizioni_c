#include <stdio.h>
#include <stdlib.h>

typedef int** matrice_t;


matrice_t crea_matrice(int r, int c);
void inserisci_matrice(matrice_t mat, int r, int c);
void print_matrice(matrice_t mat, int r, int c);
matrice_t somma(matrice_t matA, matrice_t matB, int r, int c);
matrice_t prodotto(matrice_t matA, matrice_t matB, int r, int c);
void distruggi_matrice(matrice_t mat, int r);

int main() {
    int r, c;

    printf("Inserisci dimensione delle matrici: ");
    scanf("%d %d", &r, &c);

    matrice_t matA = crea_matrice(r, c);
    inserisci_matrice(matA, r, c);

    matrice_t matB = crea_matrice(r, c);
    inserisci_matrice(matB, r, c);

    matrice_t matSOMMA = somma(matA, matB, r, c);
    matrice_t matPRODOTTO = prodotto(matA, matB, r, c);

    printf("Matrice somma:\n");
    print_matrice(matSOMMA, r, c);

    printf("Matrice prodotto:\n");
    print_matrice(matPRODOTTO,  r, c);

}

int **crea_matrice(int r, int c) {
    int **mat = malloc(r * sizeof(int *));

    for (int i=0; i<r; i++) {
        mat[i] =  malloc(c * sizeof(int *));
    }

    return mat;
}

void inserisci_matrice(matrice_t mat, int r, int c) {
    printf("Inserisci matrice:\n");
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

matrice_t somma(matrice_t matA, matrice_t matB, int r, int c) {
    matrice_t mat = crea_matrice(r, c);

    for(int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            mat[i][j] = matA[i][j] + matB[i][j];
        }
    }

    return mat;
}

matrice_t prodotto(matrice_t matA, matrice_t matB, int r, int c) {
    matrice_t mat = crea_matrice(r, c);

    for(int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            mat[i][j] = matA[i][j] * matB[i][j];
        }
    }

    return mat;
}

void print_matrice(matrice_t mat, int r, int c) {
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void distruggi_matrice(matrice_t mat, int r) {
    if (mat != NULL)
        return;

    for (int i=0; i<r; i++) {
        free(mat[i]);
    }

    free(mat);
}