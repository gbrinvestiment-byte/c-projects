#include <stdio.h> 

int main () {

    int opcao;
    double valor1, valor2, resultado;

    do {
        // imprime o menu da calculadora para o usuário
        printf("\n\n===================================\n");
        printf("|           CALCULADORA           |\n");
        printf("===================================\n");
        printf("Escolha a operação desejada:\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("0. Sair do programa\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        // usando estrutura de decisão switch para o menu
        switch (opcao) {
            case 1:
                // entrada dos valores do usuário
                printf("\nDigite o primeiro valor: \n");
                scanf("%lf", &valor1);
                printf("Digite o segundo valor: \n");
                scanf("%lf", &valor2);

                // somando valores colhidos do usuário
                resultado = valor1 + valor2;
                printf("A soma dos números é: %.2lf\n", resultado);
                break;
            case 2:
                // entrada dos valores do usuário
                printf("\nDigite o primeiro valor: \n");
                scanf("%lf", &valor1);
                printf("Digite o segundo valor: \n");
                scanf("%lf", &valor2);

                // subtraindo valores colhidos do usuário
                resultado = valor1 - valor2;
                printf("A subtração dos números é: %.2lf\n", resultado);
                break;
            case 3:
                // entrada dos valores do usuário
                printf("\nDigite o primeiro valor: \n");
                scanf("%lf", &valor1);
                printf("Digite o segundo valor: \n");
                scanf("%lf", &valor2);

                // multiplicando valores colhidos do usuário
                resultado = valor1 * valor2;
                printf("A multiplicação dos números é: %.2lf\n", resultado);
                break;
            case 4:
                // entrada dos valores do usuário
                printf("\nDigite o primeiro valor: \n");
                scanf("%lf", &valor1);
                printf("Digite o segundo valor: \n");
                scanf("%lf", &valor2);

                // dividindo valores colhidos do usuário
                if (valor2 == 0) {
                    printf("Erro: divisão por zero!\n");
                } else {
                    resultado = valor1 / valor2;
                    printf("A divisão dos números é: %.2lf\n", resultado);
                }
                break;
            case 0:
                // encerra o programa
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpção inválida!\n");
        }
    } while (opcao != 0); // repete enquanto o usuário não digitar 0

    return 0;

}