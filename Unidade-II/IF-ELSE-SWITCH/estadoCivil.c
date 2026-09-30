#include <stdio.h>


int main(){

    char EST_CIVIL;

    printf("\n----- Estado Civil -----\n");
    printf ("C - CASADO(A) \n");
    printf ("S - SOLTEIRO(A) \n");
    printf ("V - VIUVO(A) \n");
    printf ("D - DIVORCIADO(A) \n");
    
    printf("\n");
    printf (" Escolha uma opcao : ");

    scanf("%c", &EST_CIVIL);    
    switch (EST_CIVIL)
    {
    case 'C':
        printf("\n");
        printf("Estado civil --> Casado.\n");
        break;
    
    case 'S':
        printf("\n");
        printf("Estado civil --> Solteiro.\n");
        break;

    case 'V':
        printf("\n");
        printf("Estado civil --> Viuvo.\n");
        break;

    case 'D':
        printf("\n");
        printf("Estado civil --> Divorciado.\n");
        break;
    default:
        printf("\n");
        printf("Caractere invalido!");
        break;
    }
    return 0;
}