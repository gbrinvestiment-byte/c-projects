#include <stdio.h> // biblioteca padrão de entrada e saida

int main() { // função principal do programa
    // ===== Variáveis da carta 1 ====
    char estado1; // letra inicial da estado (Carta 1)
    char codigo1[4]; // codigo da carta 1
    char cidade1[50]; // nome da cidade da carta 1
    float area1, pib1; // area e pib da carta 1
    int populacao1, pontos1; // populacao e pontos turisticos da carta 1

    // ===== Variáveis da carta 2 ====
    char estado2; // letra inicial do estado (carta 2)
    char codigo2[4]; // codigo da carta 2
    char cidade2[50]; // nome da cidade da carta 2
    float area2, pib2;// area e pib da carta 2
    int populacao2, pontos2; // populacao e pontos turisticos da carta 2


        printf("Desafio Super Trunfo!\n\n"); // Titulo do programa

        // ===== Entrada de dados da Carta 1 =====
        printf("Carta 1\n"); // indica que o usuario vai digitar os dados da primeira carta

        printf("Digite a letra inicial do estado: "); // mostra mensagem pedindo a letra inicial do estado
        scanf(" %c", &estado1); // Lê um caractere (letra inicial do estado). O espaço ignora ENTER anterior. (bug)

        printf("Digite o código: "); // pede o codigo da carta
        scanf("%3s", codigo1); // lê uma string de até 3 caracteres

        printf("Digite o nome da cidade: "); // solicita o nome da cidade
        scanf("%49s", cidade1); // lê uma string de até 49 caracteres (sem espaço)

        printf("Digite a população: "); // pede o numero da populaçao da cidade (sem pontos)
        scanf("%d", &populacao1); // lê um número inteiro

        printf("Digite a área da cidade: "); // solicita a area da cidade
        scanf("%f", &area1); // lê um número decimal (float)

        printf("Digite o PIB: "); // solicita o PIB da cidade
        scanf("%f", &pib1); // lê um número decimal (float)

        printf("Digite o número de pontos turísticos: "); // solicita o número de pontos turísticos da cidade
        scanf("%d", &pontos1); // lê um número inteiro (int)


        // ===== Entrada de dados da Carta 2 =====
        printf("\n\nCarta 2\n"); // indica que o usuário vai digitar os dados da segunda carta

        printf("Digite a letra inicial do estado: "); // solicita a letra inicial do estado da segunda carta
        scanf(" %c", &estado2); // lê um caractere (letra inicial do estado)

        printf("Digite o código: "); // pede o codigo da segunda carta
        scanf("%3s", codigo2); // lê uma string de até 3 caracteres

        printf("Digite o nome da cidade: "); // solicita o nome da cidade da segunda carta
        scanf("%49s", cidade2); // lê uma string de até 49 caracteres

        printf("Digite a população: "); // peede o número da população da segunda carta 
        scanf("%d", &populacao2); // lê um número inteiro

        printf("Digite a área da cidade: "); // pede a area da cidade da segunda carta
        scanf("%f", &area2); // lê um número decimal

        printf("Digite o PIB: "); // solicita o PIB da cidade
        scanf("%f", &pib2); // lê um número decimal

        printf("Digite o número de pontos turísticos: "); // pede o número de pontos turísticos da cidade
        scanf("%d", &pontos2); // lê um número inteiro


        // ==== Resumo das Cartas ====
        printf("\n===== RESUMO DAS CARTAS ====\n\n"); // imprime o resumo das cartas na tela

        printf("Carta 1:\n"); // exibe os dados da primeira carta 
        printf("Estado: %c\n", estado1); // mostra o estado da carta 1
        printf("Código: %s\n", codigo1); // mostra o código da carta 1
        printf("Cidade: %s\n", cidade1); // mostra a cidade da carta 1
        printf("População: %d\n", populacao1); // mostra a população da carta 1
        printf("Área: %f\n", area1); // mostra a área da carta 1
        printf("PIB: %f\n", pib1); // mostra o PIB da carta 1
        printf("Pontos Turísticos %d\n\n", pontos1); // mostra os pontos turísticos da carta 1

        printf("Carta 2:\n"); // exibe os daddos da segunda carta
        printf("Estado: %c\n", estado2); // mostra o estado da carta 2
        printf("Código: %s\n", codigo2); // mostra o código da carta 2
        printf("Cidade: %s\n", cidade2); // mostra a cidade da carta 2
        printf("População: %d\n", populacao2); // mostra a população da carta 2
        printf("Área: %f\n", area2); // mostra a área da carta 2
        printf("PIB: %f\n", pib2); // mostra o PIB da carta 2
        printf("Pontos Turísticos: %d\n", pontos2); // mostra os pontos turísticos da carta 2

        return 0; // finalizacao do programa (0 executou com sucesso)
    }