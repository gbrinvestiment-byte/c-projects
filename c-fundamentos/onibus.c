#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>      // Biblioteca padrão de entrada e saída (printf)
#include <stdlib.h>     // Biblioteca para funções gerais (system, rand, srand)
#include <time.h>       // Biblioteca para trabalhar com tempo (time)
#include <unistd.h>     // Biblioteca para funções do sistema Unix (sleep, usleep)
#include <string.h>     // Biblioteca para manipulação de strings (strlen, snprintf)

#define LIMITE 170      // Define o limite máximo da corrida
#define LARGURA 170     // Define a largura da pista no terminal

void limpar() {        // Função para limpar a tela do terminal
    system("clear");   // Executa o comando 'clear' do sistema (limpa tela no mac/Linux)
}

void desenhar_onibus(int pos, const char *nome) {  // Função que desenha o ônibus na tela
    int pos_visual = (pos * (LARGURA - 30)) / LIMITE; // Calcula posição proporcional na tela

    char l1[64], l2[64], l3[64], l4[64], l5[64]; // Declara linhas do desenho do ônibus

    snprintf(l1, sizeof(l1), " _______________");          // Primeira linha do ônibus
    snprintf(l2, sizeof(l2), "|__|__|__|__|__|___");       // Segunda linha (janelas)
    snprintf(l3, sizeof(l3), "| %-15s |)", nome);          // Terceira linha com nome do ônibus
    snprintf(l4, sizeof(l4), "|___________________|");     // Quarta linha (corpo)
    snprintf(l5, sizeof(l5), "  (o)            (o)");      // Quinta linha (rodas)

    char *linhas[] = {l1, l2, l3, l4, l5}; // Array que agrupa todas as linhas do ônibus

    for (int k = 0; k < 5; k++) {          // Loop para imprimir cada linha do ônibus
        int len = strlen(linhas[k]);       // Calcula o tamanho da linha atual

        for (int i = 0; i < pos_visual; i++) printf(" "); // Espaço antes do ônibus (movimento)

        printf("%s", linhas[k]);           // Imprime a linha do ônibus

        int total = pos_visual + len;      // Soma posição + tamanho da linha
        for (int i = total; i < LARGURA - 1; i++) printf(" "); // Preenche até o final da pista

        printf("|\r\n");                  // Fecha a linha com '|' e quebra de linha
    }
}

int main() {                              // Função principal do programa
    int a = 0, b = 0;                     // Posições dos ônibus A e B

    srand(time(NULL));                    // Inicializa o gerador de números aleatórios
    setbuf(stdout, NULL);                 // Desativa buffer de saída (print imediato)

    printf("A corrida vai comecar...\n"); // Mensagem inicial
    sleep(1);                             // Pausa de 1 segundo

    while (a < LIMITE && b < LIMITE) {    // Loop principal da corrida
        limpar();                         // Limpa a tela a cada frame
        fflush(stdout);                   // Garante que tudo foi exibido

        if (rand() % 2) a++;              // Incrementa ônibus A aleatoriamente
        else b++;                         // Incrementa ônibus B

        desenhar_onibus(a, "   COCA-COLA"); // Desenha ônibus A

        printf("\n");                     // Espaço entre os ônibus
        for (int i = 0; i < LARGURA - 1; i++) printf("-"); // Desenha pista
        printf("|\n\n");                  // Fecha pista e pula linhas

        desenhar_onibus(b, "     PEPSI"); // Desenha ônibus B

        usleep(15000);                    // Pequena pausa para animação (~15ms)
    }

    printf("\nRESULTADO:\n");             // Exibe resultado final

    if (a > b) printf("COCA-COLA venceu!\n"); // Verifica vencedor A
    else if (b > a) printf("PEPSI venceu!\n"); // Verifica vencedor B
    else printf("Empate!\n");             // Caso empate

    return 0;                             // Finaliza o programa
}
