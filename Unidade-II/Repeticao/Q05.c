#include <stdio.h>

int main(){

    float nota1 = 0, nota2 = 0, media = 0;
    int resp;

    do
    {
        printf("Digite a primeira nota: \n");
        scanf("%f", &nota1);
        printf("");

        printf("Digite a segunda nota: \n");
        scanf("%f", &nota2);

        media = (nota1 + nota2)/2;

        printf("A media do aluno vale: %.2f\n", media);
        printf("");

        printf("Digite 1 para continuar e 0 para sair: ");
        scanf("%d", &resp);

    } while (resp == 1);
    
    return 0;
}