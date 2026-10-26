#include <stdio.h>


int main(){

    int inicio, i, fim, soma = 0;
    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);
    printf("Digite o valor final: ");
    scanf("%d", &fim);

    for (i = inicio; i <= fim; i++){
        if (i % 2 == 0){
            soma += i;
        }
    }
    printf("Soma dos números pares: %d\n", soma);
    return 0;
}