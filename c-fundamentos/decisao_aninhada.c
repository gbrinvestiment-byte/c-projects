#include <stdio.h>
int main () {

int idade, dependentes;
float renda;

printf("Digite a sua idade: ");
scanf("%d", &idade);
printf("Digite a sua renda: ");
scanf("%f", &renda);
printf("Digite o número de dependentes: ");
scanf("%d", &dependentes);

if (idade >= 18 && idade < 65) {
     if (renda < 2000) {
        if (dependentes >= 2) {
        printf("\nVocê tem direito ao beneficio!\n");
        } else {
        printf("Você não tem direito ao beneficio devido ao número de dependentes.\n");
        }
    } else {
    printf("Você não tem direito ao beneficio devido à sua renda.\n");
    }
} else {
    printf("Você não tem direito ao beneficio devido à sua idade.\n");
}

return 0;
}