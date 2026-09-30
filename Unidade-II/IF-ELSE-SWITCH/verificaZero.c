#include <stdio.h>


int main(){

    int valor;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    if(valor != 0){
        printf("Valor diferente de zero");
    }else{
        printf("Valor eh igual a zero");
    }

    return 0;

}