#include <stdio.h>

int main() {
    /*
    Operadores de atribuição:
    =   (atribuição simples)
    +=  (adição e atribuição)
    -=  (subtração e atribuição)
    *=  (multiplicação e atribuição)
    /=  (divisão e atribuição)
    %=  (resto da divisão e atribuição)
    */

    int numero = 10; //atribuição simples
    printf("Número inicial: %d\n", numero);

    numero += 5; //equivalente a numero = numero + 5
    printf("Após += 5: %d\n", numero);

    numero -= 3; //equivalente a numero = numero - 3
    printf("Após -= 3: %d\n", numero);

    numero *= 2; //equivalente a numero = numero * 2
    printf("Após *= 2: %d\n", numero);

    numero /= 4; //equivalente a numero = numero / 4
    printf("Após /= 4: %d\n", numero);

    numero %= 3; //equivalente a numero = numero % 3
    printf("Após %%= 3: %d\n", numero);

    return 0;
}   