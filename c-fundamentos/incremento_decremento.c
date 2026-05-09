#include <stdio.h>

int main() {

    /*
     ============================================================
     INCREMENTO E DECREMENTO EM C
     
     Incremento: aumenta o valor da variável em 1
     - Pré-incremento: ++variavel  -> incrementa ANTES de usar o valor
     - Pós-incremento: variavel++  -> usa o valor e incrementa DEPOIS

     Decremento: diminui o valor da variável em 1
     - Pré-decremento: --variavel -> decrementa ANTES de usar o valor
     - Pós-decremento: variavel-- -> usa o valor e decrementa DEPOIS
     ============================================================
    */

    // ============================================================
    // 1) INCREMENTO E DECREMENTO SIMPLES (fora de expressões)
    // ============================================================

    int numero1 = 1;

    printf("Valor inicial de numero1: %d\n", numero1);

    numero1++; // pós-incremento (aumenta 1)
    printf("Após incremento (numero1++): %d\n", numero1);

    numero1--; // pós-decremento (diminui 1)
    printf("Após decremento (numero1--): %d\n\n", numero1);


    // ============================================================
    // 2) PRÉ-INCREMENTO (++variavel)
    // ============================================================

    int numero2 = 1;
    int resultado;

    /*
      Pré-incremento:
      - Primeiro incrementa numero2
      - Depois atribui o valor a resultado
    */
    resultado = ++numero2;

    printf("Pré-incremento (++numero2)\n");
    printf("Valor de numero2: %d\n", numero2);
    printf("Valor de resultado: %d\n\n", resultado);


    // ============================================================
    // 3) PÓS-INCREMENTO (variavel++)
    // ============================================================

    /*
      Pós-incremento:
      - Primeiro atribui o valor de numero2 a resultado
      - Depois incrementa numero2
    */
    resultado = numero2++;

    printf("Pós-incremento (numero2++)\n");
    printf("Valor de numero2: %d\n", numero2);
    printf("Valor de resultado: %d\n\n", resultado);


    // ============================================================
    // 4) PRÉ-DECREMENTO (--variavel)
    // ============================================================

    int numero3 = 1;

    printf("Valor inicial de numero3: %d\n", numero3);

    /*
      Pré-decremento:
      - Primeiro diminui numero3
      - Depois usa o valor
    */
    printf("Após pré-decremento (--numero3): %d\n", --numero3);
    printf("Valor final de numero3: %d\n", numero3);

    return 0;
}