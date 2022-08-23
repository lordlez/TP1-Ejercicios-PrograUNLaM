#include "header.h"

void esPrimo()
{
    int numero, i, contador = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    for(i=1; i<=numero; i++)
        if(numero%i == 0)
            contador++;

    if(contador != 2)
        printf("El numero %d NO es Primo", numero);
    else
        printf("El numero %d SI es Primo", numero);
}



