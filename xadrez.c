#include <stdio.h>

// recursividade para os movimentos da torre
void moverTorre (int casas) {
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
        }
}

// recursividade para os movimentos do bispo
void moverBispo (int casas) {
    if (casas > 0){
        printf("Cima\n");
        if (casas > 0)
        {
            printf("Direita\n");
        }
        moverBispo(casas - 1);
    }
}

// recursividade para os movimentos da rainha
void moverRainha (int casas) {
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
        }
}

int main() {


    // Movimento da torre utilizando recursividade
    printf("*** Torre ***\n");
    moverTorre (5);

    printf("\n");
    
    // Movimento do bispo utilizando recursividade
    printf("*** Bispo ***\n");
    moverBispo(5);

    printf("\n");

    // Movimento da rainha utilizando recursividade
    printf("*** Rainha ***\n");
    moverRainha (8);

    printf("\n");

    // Movimento do cavalo com loops aninhados e diversas variáveis e condições
    printf("*** Cavalo ***\n");
    
    for (int MovCavaloDir = 0, MovCavaloCima = 0; MovCavaloDir < 5; MovCavaloDir++, MovCavaloCima++) {

        if (MovCavaloCima < 2) {
            printf("Cima\n");
            continue; // volta para o próximo ciclo
        }

        if (MovCavaloCima== 2) {
            printf("Direita\n");
            break; // sai do laço
        }
    }

    return 0;
}