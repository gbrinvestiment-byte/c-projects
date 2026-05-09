#include <stdio.h>
// Biblioteca padrão para entrada e saída (printf)
int main () {

    /*
     Desafio: Movimentação de Peças de Xadrez
     Este programa simula o movimento de três peças utilizando
     diferentes estruturas de repetição:
     - Torre  -> while
     - Bispo  -> do-while
     - Rainha -> for
    */

    int torre = 1, bispo = 1, rainha;
    // Variáveis de controle dos loops (contadores de movimento)

    printf("Movimentando a peça Torre, 5 casas para direita: \n\n");

    // Loop while: executa enquanto a torre não completar 5 movimentos
    while (torre <= 5)
    {
        // Verifica se é o primeiro movimento para ajustar singular/plural
        if (torre == 1) {
            printf("A peça Torre movimentou 1 casa para a direita. \n");
        } else {
            printf("A peça Torre já se movimentou %d casas a direita. \n", torre);
        }
        torre++;
    }

    printf("\nMovimentando a peça Bispo, 5 casas na diagonal: \n\n");
    // Loop do-while: executa pelo menos uma vez para simular o movimento do bispo

    do {
        // Representa movimento diagonal (cima + direita)
        printf("A peça Bispo movimentou 1 casa para cima e 1 para a direita.\n");
        bispo++;
    } while (bispo <= 5);


    printf("\nMovimentando a peça Rainha, 8 casas para esquerda: \n\n");
    // Loop for: controla exatamente 8 movimentos da rainha para a esquerda

    for (rainha = 1; rainha <=8; rainha++) {
        // Ajusta mensagem para singular ou plural
        if (rainha == 1) {
            printf("A peça Rainha se movimentou %d casa à esquerda. \n", rainha);
        } else {
            printf("A peça Rainha já se movimentou %d casas à esquerda. \n", rainha);
        }
    }


    return 0;
}