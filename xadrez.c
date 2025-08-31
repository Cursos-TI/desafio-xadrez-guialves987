#include <stdio.h>

int main() {

    //variáveis das peças
    int torre = 0, bispo = 0, rainha = 0;

    // Indicação de que a torre está se movimentando
    printf("*** Torre ***\n");

    //Estrutura de movimentação da torre
    while (torre < 5)
    {
        printf("Direita\n");
        torre++;
    }
    
    // Indicação de que o bispo está se movimentando
    printf("*** Bispo ***\n");

    // Estrutura de movimentação do bispo
    do {
        printf("diagonal cima/direita\n");
        bispo++;
    } while (bispo < 5);

    // Indicação de que a rainha está se movimentando
    printf("*** Rainha ***\n");

    // Estrutura de movimentação da rainha
    for (rainha; rainha < 8; rainha++) {
        printf("Esquerda\n");
    }

    return 0;
}
