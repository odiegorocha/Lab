#include <stdio.h>

int main(void) {
    int a1, n, r, an;
    printf ("Para encontrar o termo desejado, digite o primeiro termo da P.A.: ");
    scanf ("%d", &a1);
    printf ("Agora, digite a posição do termo: ");
    scanf ("%d", &n);
    printf ("Por último, digite a razão: ");
    scanf ("%d", &r);
    an = (a1 +(n - 1) * r);
    printf ("O %dº termo é %d\n", n, an);
    return 0;
}
