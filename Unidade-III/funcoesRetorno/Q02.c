#include <stdio.h>

long long calcularPotencia(int base, int expoente){

    long long resultado = 1;
    int i;

    for(i=1; i <= expoente; i++){
        resultado =  resultado * base;
    }

    return resultado;
}

int main(){
    int base, expoente;
    long long resultado;

    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if(expoente < 0){
        printf("Nao pode ter expoente negativo");
    }else{

        resultado = calcularPotencia(base, expoente);
        printf("Resultado --> %lld\n", resultado);

    }
    
    return 0;
}
