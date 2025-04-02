#include <stdio.h>

int main(void) {
    int a1, n, r, an, i;
    int aux = 1;
    printf ("Para encontrar o termo desejado, digite o primeiro termo da P.G.: ");
    scanf ("%d", &a1);
    printf ("Agora, digite a posição do termo: ");
    scanf ("%d", &n);
    printf ("Por último, digite a razão: ");
    scanf ("%d", &r);
    for (i = 0; i < n-1; i++) {
        aux = (aux * r);
    }
    an = (a1 * aux);
    printf ("O %dº termo é %d\n", n, an);
    return 0;
}