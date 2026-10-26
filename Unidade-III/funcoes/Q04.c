#include <stdio.h>
#include <math.h>

void exibirMenu() {
    printf("\n===== CALCULADORA =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Raiz quadrada\n");
    printf("4 - Logaritmo natural\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

void somar(double a, double b) {
    printf("Resultado da soma: %.2lf\n", a + b);
}

void subtrair(double a, double b) {
    printf("Resultado da subtracao: %.2lf\n", a - b);
}

void calcularRaiz(double n) {
    if (n >= 0) {
        printf("Raiz quadrada: %.2lf\n", sqrt(n));
    } else {
        printf("Erro: nao existe raiz real para esse numero.\n");
    }
}

void calcularLogaritmo(double n) {
    if (n > 0) {
        printf("Logaritmo natural: %.2lf\n", log(n));
    } else {
        printf("Erro: o logaritmo exige um numero positivo.\n");
    }
}

int main() {
    int opcao;
    double num1, num2;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                somar(num1, num2);
                break;

            case 2:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                subtrair(num1, num2);
                break;

            case 3:
                printf("Digite um numero: ");
                scanf("%lf", &num1);
                calcularRaiz(num1);
                break;

            case 4:
                printf("Digite um numero: ");
                scanf("%lf", &num1);
                calcularLogaritmo(num1);
                break;

            case 0:
                printf("Encerrando a calculadora...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}