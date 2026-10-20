#include <stdio.h>


int main(){

    int idade;
    int maiores = 0;
    int continuar;
    
    do
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("");
        if(idade >= 18){
            maiores++;
        }
        printf("Deseja continuar? (1 - sim) / (0 - nao): ");
        scanf("%d", &continuar);

    } while (continuar == 1);
    printf("");
    printf("Quantidade de pessoas maiores de 18 anos: %d", maiores);
    printf("");
    return 0;
}