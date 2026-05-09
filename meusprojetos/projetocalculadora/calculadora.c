#include <stdio.h> 
#include <stdlib.h>

void calcular(int opcao){
    double valor1, valor2, resultado;
        // entrada dos valores do usuário
        printf("\nDigite o primeiro valor: ");
        scanf("%lf", &valor1);
        printf("Digite o segundo valor: ");
        scanf("%lf", &valor2);


            switch (opcao) {
            case 1:
                // somando valores colhidos do usuário
                resultado = valor1 + valor2;
                printf("A soma dos números é: %.2lf\n", resultado);
                break;
            case 2:
                // subtraindo valores colhidos do usuário
                resultado = valor1 - valor2;
                printf("A subtração dos números é: %.2lf\n", resultado);
                break;
            case 3:
                // multiplicando valores colhidos do usuário
                resultado = valor1 * valor2;
                printf("A multiplicação dos números é: %.2lf\n", resultado);
                break;
            case 4:
                // dividindo valores colhidos do usuário
                if (valor2 == 0) {
                    printf("Erro: divisão por zero!\n");
                } else {
                    resultado = valor1 / valor2;
                    printf("A divisão dos números é: %.2lf\n", resultado);
                }
                break;
            default:
                printf("\nOpção inválida!\n");
            }
        }

int main () {
    int opcao;

    do {
        system("clear"); // limpa a tela antes de mostrar o menu
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


        if (opcao >= 1 && opcao <= 4) {
            calcular(opcao);  // só chama se a opção for válida
        } else if (opcao != 0) {
            printf("\nOpção inválida!\n");  
        }


    } while (opcao != 0); // repete enquanto o usuário não digitar 0
    printf("\nSaindo do programa...\n");

    return 0;
} 