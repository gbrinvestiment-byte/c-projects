#include <stdio.h>

int main () {

    int idade = 17;
    
    // usando o operador ternário para simplicaficar o if else
    idade >= 18 ? printf("Você é maior de idade.") : printf("Você é menor de idade.");

    return 0;
}