#include "header.h"

int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    printf("La suma de los primeros %d numeros pares es: %d", numero, primerosNNumerosPares(numero));
    return 0;
}
