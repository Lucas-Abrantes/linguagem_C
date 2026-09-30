#include <stdio.h>


int main(){

    float salario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if(salario < 100000){
        salario += 1000;
    } 
    // if(salario < 100000){
    //     salario += 1000;
    // }else{
    //     printf("Salario final: %.2f", salario);

    // }
    printf("Salario final: %.2f", salario);
    return 0;
}