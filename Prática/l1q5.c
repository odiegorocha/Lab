#include <stdio.h>

int main (void) {
    int a, aux, b;
    printf ("Digite o valor de a: \n");
    scanf ("%d", &a);
    printf ("Digite o valor de b: \n");
    scanf ("%d", &b);
    aux = a;
    a = b;
    b = aux;
    printf ("Com os valores trocados, a = %d e b = %d\n", a, b);
    return 0;
}