#include <stdio.h> //biblioteca padrão de entrada e saída
#include <locale.h> //biblioteca para configurar o idioma do programa

int main() {
    setlocale(LC_ALL, ""); //manda o programa usar as configurações de idioma e caracteres do sistema operacional
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (use ponto, ex: 1.75): ");
    scanf(" %f", &altura);

    printf("Digite seu nome: ");
    scanf(" %s", nome);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("\nNome do aluno: %s\n", nome);
    printf("Matrícula: %d\n", matricula);
    printf("Idade: %d - Altura: %.2f\n", idade, altura);

    return 0;
}