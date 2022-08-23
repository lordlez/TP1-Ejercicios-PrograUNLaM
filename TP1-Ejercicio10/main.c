#include "header.h"

int main()
{
    int numero;
    printf("Ingrese un numero natural: ");
    scanf("%d", &numero);
    printf("La suma de los primeros %d numeros naturales es: %d", numero, primerosNNumerosNaturales(numero));
    return 0;
}
