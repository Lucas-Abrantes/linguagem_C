#include <stdio.h>


int main(){

    int valor;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    if(valor > 0){
        printf("Valor maior do que 0");
    }else if(valor == 0){
        printf("Valor eh igual a zero!");
    }
    else{
        printf("Valor menor do que 0");
    }

    return 0;

}