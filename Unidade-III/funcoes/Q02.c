#include <stdio.h>

void exibirPares(int n);


int main(){

    int n;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &n);
    exibirPares(n);
    return 0;
}


void exibirPares(int n){

    int i, soma = 0;

    for(i=2; i <= n; i += 2){
        printf("%d\n", i);
        soma += i;
    }
    printf("A soma de todos os numeros pares vale: %d", soma);
}