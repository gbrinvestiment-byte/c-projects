#include <stdio.h>

int main() {
    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerencimaneto de Notas do Estudantes\n");
    printf("1. Calcular Média das Notas\n");
    printf("2. Determinar Status\n");
    printf("3. Sair do Programa\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    // usando a estrutura de decisão switch
    switch (opcao) {
        case 1: 
            // entrada das notas
            printf("\nDigite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);

            // calculando a media das notas
            media = (nota1 + nota2) / 2;
            printf("A média do estudante é %.2f\n", media);
            break;
        case 2:
            // determinar o status com base na média
            printf("\nDigite a média do estudante: ");
            scanf("%f", &media);

            // usando estrutura if else para imprimir resultado de status baseado na nota media
            if (media >=8) {
                printf("Status: Aprovado!\n");
            } else if (media >=5) {
                printf("Status: Recuperação.\n");
            } else {
                printf("Status: Reprovado!\n");
            }
        break;
        case 3:
            printf("Saindo do programa...\n");
        default:
            printf("Opção inválida!\n");
    }

return 0;

}