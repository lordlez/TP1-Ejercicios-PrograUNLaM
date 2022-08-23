#include "header.h"

int main()
{
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    printf("La suma de los numeros pares menores que %d es: %d", n, numerosParesMenoresQueN(n));

    return 0;
}
