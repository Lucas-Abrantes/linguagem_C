#include <stdio.h>

int main(){

    float num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    if(num1 > num2){
        printf("O maior numero eh: %2.f", num1);
    }else if (num2 > num1){
        printf("O maior valor eh: %f", num2);
    }else{
        printf("Os dois valore sao iguais.");
    }

    return 0;
}