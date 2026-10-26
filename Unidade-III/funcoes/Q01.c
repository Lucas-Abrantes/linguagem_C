#include <stdio.h>


void verificarPrimo(int numero);

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    verificarPrimo(numero);

    return 0;
}

void verificarPrimo(int numero){

    int i, primo = 1;

    if(numero < 2){
        primo = 0;
    }else{
        for(i=2; i * i <= numero; i++){
            if(numero % i == 0){
                primo = 0;
                break;
            }
        }
    }
    if(primo){
        printf("%d e primo. \n", numero);
    }else{
        printf("%d noa eh primo:", numero);
    }
}