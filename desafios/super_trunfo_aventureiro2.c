#include <stdio.h> // biblioteca padrão de entrada e saida

int main() { // função principal do programa
int opcaoPaises; // controlador do switch para escolher o pais e seus atributos
int opcaoAtributos; // controlador do switch para escolher um atributo de determinado país para comparar    

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
        printf("Densidade Demográfica: %.2f\n", densidade1); // mostra a densidade populacional da carta 1

        printf("Carta 2:\n"); // exibe os dados da segunda carta
        printf("País: %s\n", pais2); // mostra o estado da carta 2
        printf("População: %lu\n", populacao2); // mostra a população da carta 2
        printf("Área: %.2f\n", area2); // mostra a área da carta 2
        printf("PIB: %Lf\n", pib2); // mostra o PIB da carta 2
        printf("Pontos Turísticos: %d\n", pontos2); // mostra os pontos turísticos da carta 2
        densidade2 = (float)populacao2 / area2; // calcula a densidade populacional da carta 2
        printf("Densidade Demográfica: %.2f\n", densidade2); // mostra a densidade populacional da carta 2

        printf("\n\nEscolha uma carta para comparação:\n\n"); // imprime titulo do menu de escolhas
        printf("1. Brasil\n");
        printf("2. Argentina\n");
        scanf("%d", &opcaoPaises);

        // Estrutura condicional switch principal: decide qual carta (país) será usada como base para comparação
        switch (opcaoPaises) {
            // Caso o usuário escolha a Carta 1 (Brasil)
            case 1: 
            printf("### Você escolheu %s ###\n\n", pais1);
            printf("Escolha um atributo:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Demográfica\n");
            scanf("%d", &opcaoAtributos);
            // Switch interno: decide qual atributo será comparado
            switch (opcaoAtributos) {
                // Comparação baseada na População
                case 1:
                printf("\nVocê escolheu população:\n");
                printf("Brasil: %lu x ", populacao1);
                printf("Argentina: %lu\n", populacao2);
                    if (populacao1 > populacao2) {
                    printf("### Carta %s venceu! ###\n", pais1);
                    } else if (populacao1 < populacao2) {
                    printf("### Carta %s venceu! ###\n", pais2);
                    } else {
                    printf("Empate!");
                    }
                break;
                // Comparação baseada na Área
                case 2:
                printf("Você escolheu área:\n");
                printf("Brasil: %.2f x ", area1);
                printf("Argentina: %.2f\n", area2);
                    if (area1 > area2) {
                    printf("### Carta %s venceu! ###\n", pais1);
                    } else if (area1 < area2) {
                    printf("### Carta %s venceu! ###\n", pais2);
                    } else {
                    printf("Empate!");
                    }
                break;
                // Comparação baseada no PIB
                case 3:
                printf("Você escolheu PIB:\n");
                printf("Brasil: %.Lf x ", pib1);
                printf("Argentina: %.Lf\n", pib2);
                    if (pib1 > pib2) {
                    printf("### Carta %s venceu! ###\n", pais1);
                    } else if (pib1 < pib2) {
                    printf("### Carta %s venceu! ###\n", pais2);
                    } else {
                    printf("Empate!");
                    }
                break;
                // Comparação baseada nos Pontos Turísticos
                case 4:
                printf("Você escolheu pontos turísticos:\n");
                printf("Brasil: %d x ", pontos1);
                printf("Argentina: %d\n", pontos2);
                    if (pontos1 > pontos2) {
                    printf("### Carta %s venceu! ###\n", pais1);
                    } else if (pontos1 < pontos2) {
                    printf("### Carta %s venceu! ###\n", pais2);
                    } else {
                    printf("Empate!");
                    }
                break;
                // Comparação baseada na Densidade Demográfica (menor valor vence)
                case 5:
                printf("Você escolheu densidade demográfica:\n");
                printf("Brasil: %.2f x ", densidade1);
                printf("Argentina: %.2f\n", densidade2);
                    if (densidade1 < densidade2) {
                    printf("### Carta %s venceu! ###\n", pais1);
                    } else if (densidade2 < densidade1) {
                    printf("### Carta %s venceu! ###\n", pais2);
                    } else {
                    printf("Empate!");
                    }
                break;
            }
            break;
            // Caso o usuário escolha a Carta 2 (Argentina)
            case 2:
            printf("### Você escolheu %s ###\n\n", pais2);
            printf("Escolha um atributo:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Demográfica\n");
            scanf("%d", &opcaoAtributos);
                // Switch interno: decide qual atributo será comparado
                switch (opcaoAtributos) {
                // Comparação baseada na População
                case 1:
                printf("\nVocê escolheu população:\n");
                printf("Argentina: %lu x ", populacao2);
                printf("Brasil: %lu\n", populacao1);
                    if (populacao1 > populacao2) {
                    printf("### Carta %s venceu! ###\n", pais1);
                    } else if (populacao1 < populacao2) {
                    printf("### Carta %s venceu! ###\n", pais2);
                    } else {
                    printf("Empate!");
                    }
                break;
                // Comparação baseada na Área
                case 2:
                printf("Você escolheu área:\n");
                printf("Argentina: %.2f x ", area2);
                printf("Brasil: %.2f\n", area1);
                    if (area1 > area2) {
                    printf("### Carta %s venceu! ###\n", pais1);
                    } else if (area1 < area2) {
                    printf("### Carta %s venceu! ###\n", pais2);
                    } else {
                    printf("Empate!");
                    }
                break;
                // Comparação baseada no PIB
                case 3:
                printf("Você escolheu PIB:\n");
                printf("Argentina: %.Lf x ", pib2);
                printf("Brasil: %.Lf\n", pib1);
                    if (pib1 > pib2) {
                    printf("### Carta %s venceu! ###\n", pais1);
                    } else if (pib1 < pib2) {
                    printf("### Carta %s venceu! ###\n", pais2);
                    } else {
                    printf("Empate!");
                    }
                break;
                // Comparação baseada nos Pontos Turísticos
                case 4:
                printf("Você escolheu pontos turísticos:\n");
                printf("Argentina: %d x ", pontos2);
                printf("Brasil: %d\n", pontos1);
                    if (pontos1 > pontos2) {
                    printf("### Carta %s venceu! ###\n", pais1);
                    } else if (pontos1 < pontos2) {
                    printf("### Carta %s venceu! ###\n", pais2);
                    } else {
                    printf("Empate!");
                    }
                break;
                // Comparação baseada na Densidade Demográfica (menor valor vence)
                case 5:
                printf("Você escolheu densidade demográfica:\n");
                printf("Argentina: %.2f x ", densidade2);
                printf("Brasil: %.2f\n", densidade1);
                    if (densidade1 < densidade2) {
                    printf("### Carta %s venceu! ###\n", pais1);
                    } else if (densidade2 < densidade1) {
                    printf("### Carta %s venceu! ###\n", pais2);
                    } else {
                    printf("Empate!");
                    }
                break;
                default: 
                printf("Opção inválida.");
                } 
            break;
            // Caso o usuário digite uma opção inválida para a escolha da carta
            default:
            printf("Opção inválida.");
        }



        return 0; // finalizacao do programa (0 executou com sucesso)
                
    
    
    }