#include <stdio.h>


void calcularSituacao(float nota1, float nota2);

int main(){
    int quantidade, i;
    float nota1, nota2;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);

    for(i=1; i <= quantidade; i++){
        printf("Aluno: %d\n", i);

        printf("Digite a primeira nota: \n");
        scanf("%f", &nota1);

        printf("\n");
        printf("Digite a segunda nota: \n");
        scanf("%f", &nota2);

        calcularSituacao(nota1, nota2);
    }

    return 0;
}

void calcularSituacao(float nota1, float nota2){

    float media;

    media = (nota1 + nota2)/2;

    printf("Media do aluno: %.1f\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado!!\n");
    }else{
        printf("Aluno reprovado.");
    }
}