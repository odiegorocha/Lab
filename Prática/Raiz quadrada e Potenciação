#include <stdio.h>

int main (void) {
    int numero, operacao, contador, potencia = 0;
    int resultado = 1;
    printf ("Insira um número: ");
    scanf ("%d", &numero);
    printf ("Digite 1 para calcular a raiz quadrada e 2 para calcular a potenciação: ");
    scanf ("%d", &operacao);
    switch (operacao) {
        case 1:
            for (contador = 0; contador != numero; contador++) {
                resultado = (contador * contador);
                if (resultado == numero) {
                    printf ("A raiz quadrada de %d é %d\n", numero, contador);
                    break;
                } 
            }
            if (resultado != numero) {
                printf ("Não existe raiz exata para %d\n", numero);
            }
            break;
        case 2:
            printf ("Insira um número para realizar a potenciação: ");
            scanf ("%d", &potencia);
            for (contador = 0; contador < potencia; contador++) {
                resultado = (resultado * numero);
            }
            printf ("O resultado de %d elevado a %d é %d\n", numero, potencia, resultado);
            break;
        default:
    }
    return 0;
}
