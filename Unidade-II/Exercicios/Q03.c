#include <stdio.h>

int main(){

    unsigned int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade <= 67){
        printf("Voce pode doar sangue\n");
    }else{
        printf("Voce nao pode doar sangue");
    }

    return 0;
}