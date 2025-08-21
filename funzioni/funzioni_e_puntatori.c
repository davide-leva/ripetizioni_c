#include <stdio.h>

int raddoppia(int x);
void raddoppia_davvero(int *x);
void raddoppia_tre_cose(int *x, int *y, int *z);

int main() {
    int x = 10;

    printf("Valore di x prima della funzione: %d\n", x);
    
    // Call the function that does not modify the value
    x = raddoppia(x);
    printf("Valore di x dopo raddoppia: %d\n", x);
    
    // Call the function that modifies the value
    raddoppia_davvero(&x);
    printf("Valore di x dopo raddoppia_davvero: %d\n", x);
    scanf("%d", &x);
    
    int y = 20, z = 30;
    raddoppia_tre_cose(&x, &y, &z);

    return 0;
}

int raddoppia(int x) {
    return x * 2;
}

void raddoppia_davvero(int *x) {
    *x = *x * 2;
}

void raddoppia_tre_cose(int *x, int *y, int *z) {
    *x = *x * 2;
    *y = *y * 2;
    *z = *z * 2;
}