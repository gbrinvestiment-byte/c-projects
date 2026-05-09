#include <stdio.h>

/*
 ============================================================
 MANIPULAÇÃO E CONVERSÃO DE TIPOS DE DADOS EM C

 Este programa demonstra:
 1) Operações com inteiros (int)
 2) Problema da divisão inteira
 3) Operações com ponto flutuante (float)
 4) Conversão implícita de tipos
 5) Conversão explícita (casting)
 ============================================================
*/

int main() {

    // ============================================================
    // 1) OPERAÇÕES COM INTEIROS (int)
    // ============================================================

    int a = 10;
    int b = 3;

    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente_int = a / b; // divisão entre inteiros (parte decimal é descartada)

    printf("=== Operacoes com inteiros ===\n");
    printf("Soma: %d\n", soma);
    printf("Diferenca: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente (int): %d\n\n", quociente_int);


    // ============================================================
    // 2) EXEMPLO DO PROBLEMA DA DIVISÃO INTEIRA
    // ============================================================

    int x = 7;
    int y = 2;

    int divisao_inteira = x / y; // 7 / 2 = 3 (a parte decimal é perdida)

    printf("=== Divisao inteira ===\n");
    printf("7 / 2 = %d (divisao inteira)\n\n", divisao_inteira);


    // ============================================================
    // 3) OPERAÇÕES COM FLOAT (ponto flutuante)
    // ============================================================

    float n1 = 5.5;
    float n2 = 2.2;

    float soma_float = n1 + n2;
    float diferenca_float = n1 - n2;
    float produto_float = n1 * n2;
    float quociente_float = n1 / n2; // divisão com decimais

    printf("=== Operacoes com float ===\n");
    printf("Soma: %.2f\n", soma_float);
    printf("Diferenca: %.2f\n", diferenca_float);
    printf("Produto: %.2f\n", produto_float);
    printf("Quociente: %.2f\n\n", quociente_float);


    // ============================================================
    // 4) CONVERSÃO IMPLÍCITA DE TIPOS
    // ============================================================
    // Quando um int é usado em uma operação com float,
    // o C converte automaticamente o int para float.

    int i = 10;
    float f = 3.5;

    float resultado_implicito = i + f; // i (int) é convertido para float automaticamente

    printf("=== Conversao implicita ===\n");
    printf("Resultado (int + float): %.2f\n\n", resultado_implicito);


    // ============================================================
    // 5) CONVERSÃO EXPLÍCITA (CASTING)
    // ============================================================
    // Aqui forçamos a conversão de int para float usando casting.

    int p = 10;
    int q = 3;

    float divisao_cast = (float) p / q; // p é convertido explicitamente para float

    printf("=== Conversao explicita (casting) ===\n");
    printf("10 / 3 = %.2f (com casting)\n", divisao_cast);


    return 0;
}