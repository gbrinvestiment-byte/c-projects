#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

void criar_bomba_cone(int bombacone[5][5]){

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){

            if (j >= 2 - i && j <= 2 + i && i <= 2){
                bombacone[i][j] = 1;
            } else {
                bombacone[i][j] = 0;
            }

        }
    }
}
void criar_bomba_cruz(int bombacruz[5][5]){

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){

            if (j == 2 || i == 2){
                bombacruz[i][j] = 1;
            } else {
                bombacruz[i][j] = 0;
            }
        }
    }
}
void criar_bomba_octaedro(int bombaoctaedro[5][5]){

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){

            int di = i - 2;
            if (di < 0){
                di = -di;
            }

            int dj = j - 2;
            if (dj < 0){
                dj = -dj;
            }

            if (di + dj <= 2){
                bombaoctaedro[i][j] = 1;
            } else {
                bombaoctaedro[i][j] = 0;
            }
        }
    }
}

int main () {

    // MATRIZ DO TABULEIRO
    int tabuleiro [LINHAS][COLUNAS] = {0};

    // MATRIZES DOS CABEÇALHOS
    int colunas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // NAVIOS

    // matriz do navio horizontal e as variaveis para pontos iniciais para adicioná-lo ao tabuleiro
    int navio_horizontal[3] = {3, 3, 3};
    int linha_navio_h = 0;
    int coluna_navio_h = 6;

    int navio_vertical[3] = {3, 3, 3};
    int linha_navio_v = 6;
    int coluna_navio_v = 2;

    int navio_diagonal1[3] = {3, 3, 3};
    int linha_navio_d1 = 1;
    int coluna_navio_d1 = 2;

    int navio_diagonal2[3] = {3, 3, 3};
    int linha_navio_d2 = 4;
    int coluna_navio_d2 = 8;

    // BOMBAS

    // matriz da bomba cone
    int bombacone[5][5];
    int origem_linha_cone = 4;
    int origem_coluna_cone = 4;

    int bombacruz[5][5];
    int origem_linha_cruz = 2;
    int origem_coluna_cruz = 7;

    int bombaoctaedro[5][5];
    int origem_linha_octaedro = 7;
    int origem_coluna_octaedro = 3;


    // ====================================================================
    // IMPLEMENTAÇÃO DOS NAVIOS


    // navio horizontal
    for (int j = 0; j < 3; j++){

        // verifica sobreposição antes de posicionar o navio
        if (tabuleiro[linha_navio_h][coluna_navio_h + j] != 0){
            printf("Erro: sobreposição de navios\n");
        return 1;
        }

        tabuleiro[linha_navio_h][coluna_navio_h + j] = navio_horizontal[j];
    }


    // navio vertical
    for (int i = 0; i < 3; i++){

        // verifica sobreposição antes de posicionar o navio
        if (tabuleiro[linha_navio_v + i][coluna_navio_v] != 0){
            printf("Erro: sobreposição de navios\n");
        return 1;
        }

        tabuleiro[linha_navio_v + i][coluna_navio_v] = navio_vertical[i];
    }


    // navio diagonal 1 (linha e coluna aumentam simultaneamente formando diagonal)
    for (int y = 0;  y < 3; y++){

        // verifica sobreposição antes de posicionar o navio
        if (tabuleiro[linha_navio_d1 + y][coluna_navio_d1 + y] != 0){
            printf("Erro: sobreposição de navios\n");
        return 1;
        }

        tabuleiro[linha_navio_d1 + y][coluna_navio_d1 + y] = navio_diagonal1[y];
    }


    // navio diagonal 2 invertido (linha aumenta e coluna diminui formando diagonal ↙)
    for (int x = 0; x < 3; x++){

        // verifica sobreposição antes de posicionar o navio
        if (tabuleiro[linha_navio_d2 + x][coluna_navio_d2 - x] != 0){
            printf("Erro: sobreposição de navios\n");
        return 1;
        }
        tabuleiro[linha_navio_d2 + x][coluna_navio_d2 - x] = navio_diagonal2[x];
    }


    // ====================================================================
    // IMPLEMENTAÇÃO DAS MATRIZES DAS BOMBAS

    criar_bomba_cone(bombacone);
  
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){

            if (bombacone[i][j] == 1){

                int linha_tabuleiro = origem_linha_cone + (i - 2);
                int coluna_tabuleiro = origem_coluna_cone + (j - 2);

                if (linha_tabuleiro >= 0 && linha_tabuleiro < LINHAS &&
                    coluna_tabuleiro >= 0 && coluna_tabuleiro < COLUNAS){

                    tabuleiro[linha_tabuleiro][coluna_tabuleiro] = 5;
                }
            }

        }
    }


    criar_bomba_cruz(bombacruz);

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){

            if (bombacruz[i][j] == 1){

                int linha_tabuleiro = origem_linha_cruz + (i - 2);
                int coluna_tabuleiro = origem_coluna_cruz + (j - 2);

                if (linha_tabuleiro >= 0 && linha_tabuleiro < LINHAS &&
                    coluna_tabuleiro >= 0 && coluna_tabuleiro < COLUNAS){

                    tabuleiro[linha_tabuleiro][coluna_tabuleiro] = 5;
                }
            }
        }
    }


    criar_bomba_octaedro(bombaoctaedro);

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){

            if (bombaoctaedro[i][j] == 1){

                int linha_tabuleiro = origem_linha_octaedro + (i - 2);
                int coluna_tabuleiro = origem_coluna_octaedro + (j - 2);

                if (linha_tabuleiro >= 0 && linha_tabuleiro < LINHAS &&
                    coluna_tabuleiro >= 0 && coluna_tabuleiro < COLUNAS){

                    tabuleiro[linha_tabuleiro][coluna_tabuleiro] = 5;
                }
            }
        }
    }

    // ====================================================================
    // ESTRUTURA DE IMPRENSÃO DOS CABEÇALHOS E TABULEIRO

    // saida de espaços para alinhar o cabeçalho das colunas
    printf("  ");

    // loop para adicionar o cabeçalho ao tabuleiro
    for (int j = 0; j < COLUNAS; j++){
        printf("%d ", colunas[j]);
    }
    // saida para paragrafar
    printf("\n");

    // loop para adicionar o cabeçalho e imprimir o tabuleiro
    for (int i = 0; i < LINHAS; i++){
        printf("%c ", linhas[i]);
        for (int j = 0; j < COLUNAS; j++){
            printf("%d ", tabuleiro[i][j]);
        }
    printf("\n");
    }

    // ====================================================================

    return 0;
}