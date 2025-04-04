#include <stdio.h>

int normal[1000];
int prioridade[1000];

void inserirNormal() {
    int i, aux = 1;
    normal[i] = i+100;
    printf ("Senha de número: N%d\n", normal[i]);
    aux = aux + 1;
    printf ("%d\n", i);
}

void inserirPrioridade() {

}


void consumirSenha() {
    
}

void visualizar() {
    
}

void menu() {
    char x;
    printf ("Solicite sua senha: ");
    scanf ("%c", &x);
        switch (x) {
            case 'N':
            case 'n':
                inserirNormal();
                menu();

            case 'P':
            case 'p':
                inserirPrioridade();
                menu();
                break;

            case 'S':
            case 's':
                break;
            
            case 'C':
            case 'c':
                consumirSenha();
                menu();
                break;
 
            case 'V':
            case 'v':
                visualizar();
                menu();
                break;

            default:
        }
}

int main(void) {
    menu();
    return 0;
}
