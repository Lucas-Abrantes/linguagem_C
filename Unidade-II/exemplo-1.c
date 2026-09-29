#include <stdio.h>

int main(){

    char ch;

    printf("Digite um caractere: \n");

    ch = getchar();

    printf("O caractere digitado foi %c \n", ch);
    

    // Ex: 1 - Somar inteiro com float

    // int resultado =  valor_int + valor_float;

    //printf("SOMA --> %.2d\n", resultado);


    // Ex: 2 - Anlisar o tamanho da variáveis
    //  unsigned short int valor_int = 20;
    //  long int valor_int = 20;
    // printf("%g\n", valor_int);
    // printf("Possui - %zd bytes", sizeof(valor_int));



    // %f -> para float
    // %g -> para double
    // %d -> para int
    // %c -> para char

    // %u -> para representar unsigned. Significa que o tipo não possui representação para números negativos.
    // sizeof retorna um valor do tipo size_t, e o especificador adequado no printf é %zu.
    return 0;
}