#include <stdio.h>

int main(){

    float num1, num2, resultado;
    int opcao;

    printf("Digite o priemiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("\n------- Calculadora -------\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICACAO\n");
    printf("4 - DIVISAO\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            resultado = num1 + num2;
            printf("Valor da soma: %.2f", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Valor da subtracao: %.2f", resultado);
            break;
        
        case 3:
            resultado = num1 * num2;
            printf("Valor da multiplicacao: %.2f", resultado);
            break;

        case 4:
            if(num2 != 0){
                resultado = num1/num2;
                printf("Valor da divisao: %.2f", resultado);
            }else{
                printf("Nao existe divisao por zero");
            }
            break;
        default:
            printf("Opcao invalida. Tente mais uma vez!!");
            break;
    }
    return 0;
}