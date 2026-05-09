#include <stdio.h>
int main(){
// Declarar variaveis Produto, u i estoque, double valor unitario, double valor total e
// u i quantidade minima
char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;

int resultadoA, resultadoB;

// Exibir as informações dos produtos
printf("==== Comparacao de Inventario ====\n\n");
printf("Produto %s tem estoque %u e o unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e o unitário é R$ %.2f\n", produtoB, estoqueB, valorB);


// Comparações com valor minimo de estoque
// 1 verdadeiro 0 falso

resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;

printf("O produto %s tem estoque minímo %d\n", produtoA, resultadoA);
printf("O produto %s tem estoque minímo %d\n", produtoB, resultadoB);

// Comparação entre os valores totais dos produtos
printf("O valor total de A (R$ %.2f) é maior que o total de B (R$ %.2f)? %d\n", estoqueA * valorA, estoqueB * valorB, estoqueA * valorA > estoqueB * valorB);











}