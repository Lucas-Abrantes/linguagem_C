#include <stdio.h>

int main(){

    int i, numero;
    int soma = 0;
    int produto = 1;

    printf("Digite o valor: ");
    scanf("%d", &numero);

    printf("");

    for(i = 1; i <= numero; i++){
        soma += i;
        produto *= i;
    }

    printf("Resultado da soma: %d\n", soma);
    printf("");
    printf("Valor do produto: %d", produto);

    return 0;
}