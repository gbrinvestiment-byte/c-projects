#include <stdio.h>

int main() {
int numero;
    do 
    {
        printf("Digite um numero par para sair do programa... \n");
        scanf ("%d", &numero);

        if (numero % 2 == 0) {
            printf("%d é par! \n", numero);
        } else {                    // Caso a condição anterior seja falsa (ou seja, o número seja ímpar), executa o bloco abaixo.
            printf("%d é impar! \n", numero);
        }
    }
     while (numero % 2 != 0); // Continue repetindo enquanto o número for diferente de par.
printf ("Voce digitou um numero par, saindo do programa... \n"); // Essa linha só executa depois que o loop termina, ou seja, depois que o usuário digita um número par.

/*	•	Se numero % 2 != 0 → o número é ímpar → continua o loop
	•	Se numero % 2 == 0 → o número é par → sai do loop */

return 0;
}