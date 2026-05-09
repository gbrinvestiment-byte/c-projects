#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar número aleatório srand (time (0));
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

    // Início do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual! \n");
    printf( "Você deve escolher um número e o tipo de comparação. \n");
    printf("M. Maior \n");
    printf("N. Menor \n");
    printf("I. Igual\n");
    printf("Escolha a comparação: "); scanf (" %c", &tipoComparacao);

    printf ("Digite seu número (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
    break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor.\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    default:
        printf("Opção de jogo inválida.\n");
        return 1;
    }

    printf ("O número do Computador é: %d e o número do Jogador é: %d\n", numeroComputador, numeroJogador);


    if (resultado == 1) 
    {
        printf("Parabéns, você ganhou!\n");
    } else {
        printf("Infelizmente você perdeu!\n");
    }
}