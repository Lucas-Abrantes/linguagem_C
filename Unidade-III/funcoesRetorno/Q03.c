#include <stdio.h>


char* lerNome(char nome[]){
    printf("Digite o seu nome: ");
    scanf(" %[^\n]", nome);
}


int verificarMaioridade(int idade){
    if(idade > 18){
        return 1;
    }else
    return 0;
}


float calcularDesconto(float valor, int idade){
    if(verificarMaioridade(idade) == 1){
        return valor * 0.10;
    }else{
        return 0;
    }
}

int main(){

    char nome[100];
    int idade;
    float valor, desconto, valorFinal;

    lerNome(nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    desconto = calcularDesconto(valor, idade);
    valorFinal = valor - desconto;

    printf("\n");

    printf("Nome: %s", nome);
    printf("Idade: %d", idade);
    printf("\n");

    if(verificarMaioridade(idade) == 1){
        printf("Situacao: maior de idade\n");
    }else{
        printf("Situacao: menor de idade\n");
    }

    printf("Valor original: \n", valor);
    printf("Valor final: %.2f", valorFinal);

    return 0;
}


