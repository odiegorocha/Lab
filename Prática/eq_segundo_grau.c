#include <stdio.h>

int main (void) {
    int a, b, c, delta, x1, x2, i, r;
    printf ("Digite os valores de a, b e c em ax² + bx + c:\n");
    scanf ("%d%d%d", &a, &b, &c);
    delta = ((b*b) - (4 * a * c));
    if (delta < 0) {
        printf ("Não existem raízes reais\n");
    } else if (delta == 0) {
        x1 = (-b)/(2 * a);
        x2 = x1;
        printf ("As raízes de %dx² + %dx + %d são %d e %d\n", a, b, c, x1, x2);
    } else {
        for (i = 0; i < delta; i++) {
            r = (i * i);
            if (r == delta) {
                r = i;
                break;
            }
        }
        x1 = ((-b + r)/(2 * a));
        x2 = ((-b - r)/(2 * a));
        printf ("As raízes de %dx² + %dx + %d são %d e %d\n", a, b, c, x1, x2);
    }
    return 0;
}
