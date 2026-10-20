#include <stdio.h>

int main(){

    int numero = 1;

    while(numero <= 10){
        printf("5 * %d = %d\n", numero, 5 * numero);
        numero += 1;
    }
    return 0;
}