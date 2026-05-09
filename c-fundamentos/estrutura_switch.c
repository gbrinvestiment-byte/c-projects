#include <stdio.h>
int main () {

int opcao;
float saldo = 2505;

printf("Escolha uma opção:\n\n");
printf("1. Verificar o saldo.\n");
printf("2. Fazer depósito.\n");
printf("3. Fazer saque.\n");
scanf("%d", &opcao);

switch (opcao) {
    case 1:
    printf("Seu saldo é R$%.2f", saldo);
    break;
    case 2:
    printf("Depósito realizado com sucesso!\n");
    break;
    case 3:
    printf("Digite o valor desejado:");
    break;
    default:
    printf("Opção inválida.");
}

return 0;
}