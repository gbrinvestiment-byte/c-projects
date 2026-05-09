/*
    Desafio Final - Super Trunfo
    Comparação com múltiplos atributos
    Desenvolvido para prática de estruturas condicionais em C.
*/

#include <stdio.h> // biblioteca padrão de entrada e saida

int main() { // função principal do programa
int atributo1, atributo2; // controlador do switch para escolher um atributo de determinado país para comparar 
long double somaBrasil = 0;
long double somaArgentina = 0;

    // ===== Variáveis da carta 1 ====(JA COM OS DADOS PARA SIMPLIFICAÇÃO DO DESAFIO COMO PEDIDO)

    char pais1[] = "Brasil"; // nome da cidade da carta 1
    float area1 = 8515767.0, densidade1; // area, pib, densidade, densidade invertida, pib per capita e super poder da carta 1
    int pontos1 = 70; // pontos turisticos da carta 1
    unsigned long int populacao1 = 203062512; // populacao da carta 1
    long double pib1 = 2130000000000;

    // ===== Variáveis da carta 2 ==== (JA COM OS DADOS PARA SIMPLIFICAÇÃO DO DESAFIO COMO PEDIDO)

    char pais2[] = "Argentina"; // nome da cidade da carta 2
    float area2 = 2780400.0, densidade2; // area, pib, densidade, densidade invertida, pib per capita e super poder da carta 2
    int pontos2 = 45; // pontos turisticos da carta 2
    unsigned long int populacao2 = 46044703; // populacao da carta 2
    long double pib2 = 640000000000;


        printf("**** DESAFIO SUPER TRUNFO! ****\n\n"); // Titulo do programa

        // ==== Exibição das Cartas ====
        printf("\nEXIBIÇÃO DOS ATRIBUTOS DAS CARTAS \n\n"); // imprime o resumo das cartas na tela

        printf("Carta 1:\n"); // exibe os dados da primeira carta 
        printf("País: %s\n", pais1); // mostra a cidade da carta 1
        printf("População: %lu\n", populacao1); // mostra a população da carta 1
        printf("Área: %.2f\n", area1); // mostra a área da carta 1
        printf("PIB: %Lf\n", pib1); // mostra o PIB da carta 1
        printf("Pontos Turísticos: %d\n", pontos1); // mostra os pontos turísticos da carta 1
        densidade1 = (float)populacao1 / area1; // calcula a densidade populacional da carta 1
        printf("Densidade Demográfica: %.2f\n\n", densidade1); // mostra a densidade populacional da carta 1

        printf("Carta 2:\n"); // exibe os dados da segunda carta
        printf("País: %s\n", pais2); // mostra o estado da carta 2
        printf("População: %lu\n", populacao2); // mostra a população da carta 2
        printf("Área: %.2f\n", area2); // mostra a área da carta 2
        printf("PIB: %Lf\n", pib2); // mostra o PIB da carta 2
        printf("Pontos Turísticos: %d\n", pontos2); // mostra os pontos turísticos da carta 2
        densidade2 = (float)populacao2 / area2; // calcula a densidade populacional da carta 2
        printf("Densidade Demográfica: %.2f\n", densidade2); // mostra a densidade populacional da carta 2

        printf("\nESCOLHA O PRIMEIRO ATRIBUTO: \n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        scanf("%d", &atributo1);

        printf("\nESCOLHA O SEGUNDO ATRIBUTO: \n");

        switch (atributo1) {
            case 1:
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
                printf("5. Densidade Demográfica\n");
            break;
            case 2:
                printf("1. População\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
                printf("5. Densidade Demográfica\n");
            break;
            case 3:
                printf("1. População\n");
                printf("2. Área\n");
                printf("4. Pontos Turísticos\n");
                printf("5. Densidade Demográfica\n");
            break;
            case 4:
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("5. Densidade Demográfica\n");
            break;
            case 5:
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
            break;
            default:
            printf("Opção inválida!\n");
            return 1;
        }
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) {
        printf("\n### Você não pode escolher o mesmo atributo! ###\n");
        return 1;
        }

        switch (atributo1) {
            case 1: // Caso o jogador tenha escolhido o atributo 1 (População)
                somaBrasil += populacao1; // adiciona a população do Brasil na soma final
                somaArgentina += populacao2; // adiciona a população da Argentina na soma final

                printf("\nPopulação:\n");
                printf("Brasil: %lu\n", populacao1);
                printf("Argentina: %lu\n", populacao2);

                if (populacao1 > populacao2) { 
                    printf("Resultado: Brasil venceu\n"); // Se a condição for verdadeira, o Brasil vence nesse atributo
                } else if (populacao2 > populacao1) {
                    printf("Resultado: Argentina venceu\n"); // Caso contrário, a Argentina vence
                } else {
                    printf("Resultado: Empate!\n");
                }
            break; // encerra o case 1 e impede que o switch continue executando outros cases
            case 2:
                somaBrasil += area1;
                somaArgentina += area2;

                printf("\nÁrea:\n");
                printf("Brasil: %.2f\n", area1);
                printf("Argentina: %.2f\n", area2);

                if (area1 > area2) {
                    printf("Resultado: Brasil venceu\n");
                } else if (area2 > area1) {
                    printf("Resultado: Argentina venceu\n");
                } else {
                    printf("Resultado: Empate\n");
                }
            break;
            case 3:
                somaBrasil += pib1;
                somaArgentina += pib2;

                printf("\nPIB:\n");
                printf("Brasil: %Lf\n", pib1);
                printf("Argentina: %Lf\n", pib2);
                
                if (pib1 > pib2) {
                    printf("Resultado: Brasil venceu\n");
                } else if (pib2 > pib1) {
                    printf("Resultado: Argentina venceu\n");
                } else {
                    printf("Empate!\n");
                }
            break;
            case 4:
                somaBrasil += pontos1;
                somaArgentina += pontos2;

                printf("\nPontos Turísticos:\n");
                printf("Brasil: %d\n", pontos1);
                printf("Argentina: %d\n", pontos2);

                if (pontos1 > pontos2) {
                    printf("Resultado: Brasil venceu\n");
                } else if (pontos2 > pontos1) {
                    printf("Resultado: Argentina venceu\n");
                } else {
                    printf("Empate!\n");
                }
            break;
            case 5:
                somaBrasil += densidade1;
                somaArgentina += densidade2;

                printf("\nDensidade Demógrafica:\n");
                printf("Brasil: %.2f\n", densidade1);
                printf("Argentina: %.2f\n", densidade2);

                if (densidade1 < densidade2) {
                    printf("Resultado: Brasil venceu\n");
                } else if (densidade2 < densidade1) {
                    printf("Resultado: Argentina venceu\n");
                } else {
                    printf("Empate!\n");
                }
            break;
        }

        switch (atributo2) {
            case 1:
                somaBrasil += populacao1;
                somaArgentina += populacao2;

                printf("\nPopulação:\n");
                printf("Brasil: %lu\n", populacao1);
                printf("Argentina: %lu\n", populacao2);

                if (populacao1 > populacao2) { 
                    printf("Resultado: Brasil venceu\n"); // Se a condição for verdadeira, o Brasil vence nesse atributo
                } else if (populacao2 > populacao1) {
                    printf("Resultado: Argentina venceu\n"); // Caso contrário, a Argentina vence
                } else {
                    printf("Empate!\n");
                }
            break; // encerra o case 1 e impede que o switch continue executando outros cases
            case 2:
                somaBrasil += area1;
                somaArgentina += area2;

                printf("\nÁrea:\n");
                printf("Brasil: %.2f\n", area1);
                printf("Argentina: %.2f\n", area2);

                if (area1 > area2) {
                    printf("Resultado: Brasil venceu\n");
                } else if (area2 > area1) {
                    printf("Resultado: Argentina venceu\n");
                } else {
                    printf("Empate!\n");
                }
            break;
            case 3:
                somaBrasil += pib1;
                somaArgentina += pib2;

                printf("\nPIB:\n");
                printf("Brasil: %.Lf\n", pib1);
                printf("Argentina: %.Lf\n", pib2);

                if (pib1 > pib2) {
                    printf("Resultado: Brasil venceu\n");
                } else if (pib2 > pib1) {
                    printf("Resultado: Argentina venceu\n");
                } else {
                    printf("Empate!");
                }
            break;
            case 4:
                somaBrasil += pontos1;
                somaArgentina += pontos2;

                printf("\nPontos Turísticos:\n");
                printf("Brasil: %d\n", pontos1);
                printf("Argentina: %d\n", pontos2);

                if (pontos1 > pontos2) {
                    printf("Resultado: Brasil venceu\n");
                } else if (pontos2 > pontos1) {
                    printf("Resultado: Argentina venceu\n");
                } else {
                    printf("Empate!\n");
                }
            break;
            case 5:
                somaBrasil += densidade1;
                somaArgentina += densidade2;

                printf("\nDensidade Demógrafica:\n");
                printf("Brasil: %.2f\n", densidade1);
                printf("Argentina: %.2f\n", densidade2);

                if (densidade1 < densidade2) {
                    printf("Resultado: Brasil venceu\n");
                } else if (densidade2 < densidade1) {
                    printf("Resultado: Argentina venceu\n");
                } else {
                    printf("Empate!\n");
                }
            break;
        }

        char *nomeAtributo1;
        char *nomeAtributo2;

        switch (atributo1) {
            case 1: nomeAtributo1 = "População"; break;
            case 2: nomeAtributo1 = "Área"; break;
            case 3: nomeAtributo1 = "PIB"; break;
            case 4: nomeAtributo1 = "Pontos Turísticos"; break;
            case 5: nomeAtributo1 = "Densidade Demográfica"; break;
        }

        switch (atributo2) {
            case 1: nomeAtributo2 = "População"; break;
            case 2: nomeAtributo2 = "Área"; break;
            case 3: nomeAtributo2 = "PIB"; break;
            case 4: nomeAtributo2 = "Pontos Turísticos"; break;
            case 5: nomeAtributo2 = "Densidade Demográfica"; break;
        }

        printf("\nAtributos escolhidos: %s e %s\n\n", nomeAtributo1, nomeAtributo2);

        printf("Soma Brasil: %.Lf\n", somaBrasil);
        printf("Soma Argentina: %.Lf\n\n", somaArgentina);
        (somaBrasil > somaArgentina) ? printf("===== Brasil ganhou na soma total! =====\n\n") :
        (somaArgentina > somaBrasil) ? printf("===== Argentina ganhou na soma total! =====\n") :
        printf("Empate!\n");


        return 0; // finalizacao do programa (0 executou com sucesso)
                
    
    
    }