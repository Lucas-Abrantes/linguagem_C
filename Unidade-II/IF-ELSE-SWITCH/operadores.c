#include <stdio.h>


int main(){

    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    // printf("Digite o valor de x e y: ");

    // scanf("%d%d",&x,&y);

    printf("O Resultado de %d ==%d: %d\n", x, y, x==y);

    printf("O Resultado de %d > %d: %d\n", x, y, x > y);

    printf("O Resultado de %d >= %d: %d\n", x, y, x >= y);

    printf("O Resultado de %d < %d: %d\n", x, y, x < y);

    printf("O Resultado de %d <= %d: %d\n", x, y, x <= y);

    printf("O Resultado de %d != %d: %d\n", x, y, x != y);

    return 0;

}