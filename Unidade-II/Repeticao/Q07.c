#include <stdio.h>


int main(){

    int n, i;
    double soma = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(i =1; i <= n; i++){
        soma = soma * 1.0/i;
    }

    printf("S = %.2g", soma);

    return 0;
}