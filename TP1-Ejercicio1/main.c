#include "header.h"

int main()
{
    int numero;
    printf("Ingrese un numero entero: ");
    scanf("%d",&numero);
    printf("El factorial de %d es: %d", numero, factorial(numero));
    return 0;
}
