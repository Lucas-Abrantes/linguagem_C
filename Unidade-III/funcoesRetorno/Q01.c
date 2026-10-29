#include <stdio.h>

float calcularSituacao(float nota1, float nota2);


int main(){

    int quantidade, i;

    float nota1, nota2;

    printf("Quantidade de alunos: ");
    scanf("%d", &quantidade);

    for(i=1; i <= quantidade; i++){
        printf("\nAluno -- %d\n", i);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        calcularSituacao(nota1, nota2);
    }

    return 0;
}

float calcularSituacao(float nota1, float nota2){

    float media;
    media = (nota1 + nota2)/2;

    printf("Media --> \n", media);
    printf("\n");

    if(media >= 7.0){
        printf("Situacao: APROVADO.");
    }else{
        printf("Situacao: REPROVADO.");
    }
}