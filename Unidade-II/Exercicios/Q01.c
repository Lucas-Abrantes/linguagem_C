#include <stdio.h>

main()
{
    int n, valor;
    printf("Digite o valor: ");
    scanf("%d", &valor);
    n = 1;

    while (n <= 10)
    {
        printf("%d * %2d = %2d\n", valor, n, valor * n);
        n = n + 1;
    }
}