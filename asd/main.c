#include <stdio.h>
#include <stdlib.h>

int somma(int x,int y);
void scan_pos(int *a);
int main() {
    int x;
    int y;
    int sum;

    scan_pos(&x);
    scan_pos(&y);
    sum = somma(x,y);

    int *vett = malloc(sum*sizeof (int));
    free (vett);

    return 0;
}
void scan_pos(int*a){
     do {
         printf("inserire un numero positivo");
    scanf("%d", a);
    }while (a<0);
}
int somma(int x, int y){
    int sum;
    sum = x+y;
    return sum;
}

