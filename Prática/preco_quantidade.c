#include <stdio.h>
 
int main (void) {
    float preco, total;
    int quantidade;
    printf ("Insira o preço do produto: R$");
    scanf ("%f", &preco);
    printf ("Insira a quantidade de produtos: ");
    scanf ("%d", &quantidade);
    total = ((preco * quantidade) * 1.0);
    printf ("Total a pagar: R$%.2f", total);
    return 0;
}
