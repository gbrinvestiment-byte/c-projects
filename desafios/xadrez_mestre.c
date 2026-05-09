#include <stdio.h>
// Biblioteca padrão para entrada e saída (printf)

void torre (int casas){
    if (casas > 0){
        printf("Direita \n");

        torre (casas -1);
    }
}

void rainha (int casas){
    if (casas > 0){
        printf("Esquerda \n");

        rainha (casas - 1);
    }
}

void bispo (int casas){
    if (casas > 0){
        for (int vertical = 1; vertical <= 1; vertical++) { // movimento vertical

            for (int horizontal = 1; horizontal <= 1; horizontal++) { //movimento horizontal

            printf("Cima \n");
            printf("Direita \n");

            }
        }
    bispo (casas -1); // chamada recursiva
    }
}

int main () {

    int movimentoTorre = 5, movimentoBispo = 5, movimentoRainha = 8;
    // Variáveis de controle dos loops (contadores de movimento)

    printf("Movimentando a peça Torre, 5 casas para direita: \n\n");

    torre (movimentoTorre);

    printf("\nMovimentando a peça Bispo, 5 casas na diagonal: \n\n");

    bispo (movimentoBispo);

    printf("\nMovimentando a peça Rainha, 8 casas para esquerda: \n\n");
    // Loop usando void: controla exatamente 8 movimentos da rainha para a esquerda

    rainha (movimentoRainha);

    printf("\nMovimentando a peça Cavalo: \n\n");

    for (int movimentoDireita = 1; movimentoDireita <= 1; movimentoDireita++){
            for (int casaCima = 1; casaCima <= 2; casaCima++){
                printf("A peça Cavalo se movimentou uma casa para cima.\n");
            }
         printf("A peça Cavalo se movimentou uma casa para direita.\n");
    }

    return 0;
}