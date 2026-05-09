#include <stdio.h> // Biblioteca padrão de entrada e saída (usada para printf e scanf)

int main (){ // Função principal do programa, onde a execução começa

// Vetor que guarda as letras que representam as LINHAS do tabuleiro
char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

// Vetor que guarda os números que representam as COLUNAS do tabuleiro
int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Matriz 10x10 que representa o tabuleiro da batalha naval
// Cada posição começa com 0 (representando água)
int tabuleiro[10][10] = {0};

// Vetor que representa um navio horizontal com 3 posições (cada posição vale 3 no tabuleiro)
int naviohorizontal[3] = {3,3,3};
// Linha inicial onde o navio horizontal começará no tabuleiro
int iniciolinhanavioH = 1;
// Coluna inicial onde o navio horizontal começará
int iniciocolunanavioH = 4;

// Vetor que representa um navio vertical com 3 posições
int naviovertical[3] = {3,3,3};
// Linha inicial onde o navio vertical começará
int iniciolinhanavioV = 5;
// Coluna inicial onde o navio vertical começará
int iniciocolunanavioV = 3;

// Vetor que representa um navio na diagonal com 3 posições
int naviodiagonal1[3] = {3,3,3};
// Linha inicial onde o navio diagonal 1 começará
int linhainicialdiagonal1 = 0;
// Coluna inicial onde o navio diagonal 2 começará
int colunainicialdiagonal1 = 0;

// Vetor que representa um navio na diagonal com 3 posições
int naviodiagonal2[3] = {3,3,3};
// Linha inicial onde o navio diagonal 2 começará
int linhainicialdiagonal2 = 3;
// Coluna inicial onde o navio diagonal 2 começará
int colunainicialdiagonal2 = 8;


// verifica os limites das posições do navio dentro do tabuleiro
if (iniciocolunanavioH + 3 > 10){
    printf("Navio horizontal ultrapassa o limite do tabuleiro\n");
    return 1;
}

if (iniciolinhanavioV + 3 > 10){
    printf("Navio vertical ultrapassa o limite do tabuleiro\n");
    return 1;
}

if (colunainicialdiagonal1 + 3 > 10 || linhainicialdiagonal1 + 3 > 10){
    printf("Navio diagonal ultrapassa o limite do tabuleiro\n");
    return 1;
}

if (colunainicialdiagonal2 - 2 < 0){
    printf("Navio diagonal ultrapassa o limite do tabuleiro\n");
    return 1;
}


// Loop que percorre o vetor do navio horizontal e copia cada parte dele para o tabuleiro
// A linha permanece fixa e a coluna aumenta (por isso o navio fica na horizontal)
for (int i = 0; i < 3; i++){

    // verifica sobreposição antes de posicionar o navio
    if (tabuleiro[iniciolinhanavioH][iniciocolunanavioH + i] != 0){
        printf("Erro: sobreposição de navios\n");
        return 1;
    }

    tabuleiro[iniciolinhanavioH][iniciocolunanavioH + i] = naviohorizontal[i]; // coloca cada parte do navio horizontal no tabuleiro avançando as colunas
}

// Loop que percorre o vetor do navio vertical e copia para o tabuleiro
// A coluna permanece fixa e a linha aumenta (por isso o navio fica na vertical)
for (int j = 0; j < 3; j++){

    // verifica sobreposição antes de posicionar o navio
    if (tabuleiro[iniciolinhanavioV + j][iniciocolunanavioV] != 0){
        printf("Erro: sobreposição de navios\n");
        return 1;
    }

    tabuleiro[iniciolinhanavioV + j][iniciocolunanavioV] = naviovertical[j]; // coloca cada parte do navio vertical descendo uma linha por vez
}

// Loop que percorre o vetor do navio diagonal 1 e copia para o tabuleiro
// Linha e coluna aumentam simultaneamente (formando diagonal)
for (int x = 0; x < 3; x++){

    // verifica sobreposição antes de posicionar o navio
    if (tabuleiro[linhainicialdiagonal1 + x][colunainicialdiagonal1 + x] != 0){
        printf("Erro: sobreposição de navios\n");
        return 1;
    }

    tabuleiro[linhainicialdiagonal1 + x][colunainicialdiagonal1 + x] = naviodiagonal1[x];
}

// Linha aumenta e coluna diminui (formando diagonal ↙)
for (int y = 0; y < 3; y++){

    // verifica sobreposição antes de posicionar o navio
    if (tabuleiro[linhainicialdiagonal2 + y][colunainicialdiagonal2 - y] != 0){
        printf("Erro: sobreposição de navios\n");
        return 1;
    }

    tabuleiro[linhainicialdiagonal2 + y][colunainicialdiagonal2 - y] = naviodiagonal2[y];
}


// Imprime dois espaços antes do cabeçalho das colunas para alinhar com as letras das linhas
printf ("  ");

// Loop que percorre o vetor de colunas para imprimir os números de 1 a 10 no topo do tabuleiro
for (int j = 0; j < 10; j++){
    printf("%d ", coluna[j]); // imprime o número da coluna atual
}

// Quebra de linha depois de imprimir o cabeçalho
printf("\n");

// Loop externo que percorre todas as linhas do tabuleiro
for (int i = 0; i < 10; i++){

    // Imprime a letra da linha atual (A até J)
    printf("%c ", linha[i]);
    
    // Loop interno que percorre todas as colunas da linha atual
    for (int j = 0; j < 10; j++){

        // Imprime o valor da posição da matriz (0 = água)
        printf("%d ", tabuleiro[i][j]);
    }

    // Depois de imprimir todas as colunas da linha, pula para a próxima linha
    printf("\n");
}

// Retorna 0 indicando que o programa terminou corretamente
return 0;
}