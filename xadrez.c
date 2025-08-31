#include <stdio.h>

int main() {

    //variáveis das peças
    int torre = 0, bispo = 0, rainha = 0, cavalo = 0;

    // Indicação de que a torre está se movimentando
    printf("*** Torre ***\n");

    //Estrutura de movimentação da torre
    while (torre < 5)
    {
        printf("Direita\n");
        torre++;
    }

    printf("\n");
    
    // Indicação de que o bispo está se movimentando
    printf("*** Bispo ***\n");

    // Estrutura de movimentação do bispo
    do {
        printf("Diagonal cima/direita\n");
        bispo++;
    } while (bispo < 5);

    printf("\n");

    // Indicação de que a rainha está se movimentando
    printf("*** Rainha ***\n");

    // Estrutura de movimentação da rainha
    for (rainha; rainha < 8; rainha++) {
        printf("Esquerda\n");
    }

    printf("\n");

    // Indicação da movimentação do cavalo
    printf("*** Cavalo ***\n");

    // Estrutura de movimentação do cavalo com loop aninhado
    while (cavalo < 1)
    {
        for (cavalo; cavalo < 2; cavalo++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        cavalo++;
        printf("\n");
    }
    

    return 0;
}
