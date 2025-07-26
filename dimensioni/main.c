#include <stdio.h>
#include <stdlib.h>

int main() {
    int intero = 4;
    long long intero_grosso = 5;
    char carattere = 's';
    float decimale = 3.6;
    double doppia_precisione = 3.6;
    int *puntatore = &intero;
    int vettore[6];

    size_t dim_intero = sizeof (intero);
    size_t dim_carattere = sizeof (carattere);
    size_t dim_decimale = sizeof (decimale);
    size_t dim_doppia_precisione = sizeof (doppia_precisione);
    size_t dim_intero_grosso = sizeof(intero_grosso);
    size_t dim_puntatore = sizeof (puntatore);
    size_t dim_vettore = sizeof(vettore);

    printf("dimensione intero: %d\n", dim_intero);
    printf("dimensione carattere: %d\n", dim_carattere);
    printf("dimensione decimale: %d\n", dim_decimale);
    printf("dimensione doppia precisione: %d\n", dim_doppia_precisione);
    printf("dimensione intero lungo: %d\n", dim_intero_grosso);
    printf("dimensione puntatore: %d\n", dim_puntatore);
    printf("dimensione vettore: %d\n", dim_vettore);

    return 0;
}
