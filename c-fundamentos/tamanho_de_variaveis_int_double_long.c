#include <stdio.h>

int main() {
    printf("Tamanho de int: %u bytes\n" , sizeof(int));
    printf("Tamanho de long int: %u bytes\n" , sizeof(long int));
    printf("Tamanho de long long int: %u bytes\n" , sizeof(long long int));
    printf("Tamanho de double: %u bytes\n" , sizeof(double));
    printf("Tamanho de long double: %u bytes\n\n" , sizeof(long double));


    
    int numeroNormal = 2147483647; // valor maximo para int
    long int numeroLongo = 2147483647;

    printf("Número normal (int): %d\n", numeroNormal);
    printf("Número longo (long int): %ld\n", numeroLongo);

    numeroLongo = 2147483648; // valor que excede o limite do int
    printf("Número longo atualizado (long int): %ld\n\n", numeroLongo);

    
    
    
    
    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;
    printf("Numero preciso (double): %.15f\n", numeroPreciso) ;
    printf ("Numero muito preciso (long double): %.21lf\n\n", numeroMuitoPreciso);



    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrande = 4000000000;
    int numero = 4000000000;
    printf("Número positivo grande: %lu\n", numeroGrandePositivo);
    printf("Número positivo: %u\n", numeroPositivo); 
    printf("Número grande: %ld\n", numeroGrande);
    printf("Número: %d\n\n", numero);

    short int numeroPequeno = 32767; // Valor máximo de short int 
    printf ("Número pequeno (short int): %d\n", numeroPequeno);
    numeroPequeno = 32768; // Valor maior que o máximo de short int 
    printf( "Número pequeno atualizado (short int): %d\n", numeroPequeno);

    printf("\n*** Tamanho das variáveis ***\n");
    printf("short int: %lu B - int %lu B - long int %lu B - - long int: %lu B\n", sizeof (short int), sizeof(int), sizeof(long int), sizeof(long long int));
    printf("float: %lu B - double: %lu B - long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));





    return 0;
}