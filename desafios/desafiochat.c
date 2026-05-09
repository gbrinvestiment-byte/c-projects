#include <stdio.h>

int main () {

printf("Desafio ChatGPT - Manipulação de Variáveis em C\n\n");
// ===== TAMANHO DOS TIPOS PRIMITIVOS =====
printf("Tamanho de Char: %zu bytes\n", sizeof(char));
printf("Tamanho de Int: %zu bytes\n", sizeof(int));
printf("Tamanho de Float: %zu bytes\n", sizeof(float));
printf("Tamanho de Double: %zu bytes\n\n", sizeof(double));

int varInt = 100;
char varCharArray[10];

// ===== TAMANHO DE UMA VARIAVEL =====
printf("Tamanho da variável varInt: %zu bytes\n", sizeof(varInt));
// ===== TAMANHO DE UM ARRAY =====
printf("Tamanho da variável varCharArray: %zu bytes\n", sizeof(varCharArray));



return 0;
    
    
}