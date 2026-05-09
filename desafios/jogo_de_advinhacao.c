#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Inicar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair do jogo\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10 + 1;
        printf("Digite um número de 0 a 10: ");
        scanf("%d", &palpite);
        if(numeroSecreto == palpite)
        {
            printf("Você acertou!\n");
            printf("Número secreto: %d\n", numeroSecreto);
        } else {
            printf("Você errou!\n");
            printf("Número secreto: %d\n", numeroSecreto);
        }
        break;
    case 2:
        printf("Explicação das Regras...\n");
        printf("Digite a opção relacionada as regras do jogo: \n");
        scanf("%d", &regras);
        switch (regras)
        {
        case 1:
            printf("Regra 1.\n");
            break;
        case 2:
            printf("Regra 2.\n");
            break;
        case 3:
            printf("Regra 3.\n");
            break;
        }
        break;
    case 3:
        printf("Encerrando jogo...\n");
        break;
    default:
        printf("Opção inválida!\n");
    }

return 0;

}