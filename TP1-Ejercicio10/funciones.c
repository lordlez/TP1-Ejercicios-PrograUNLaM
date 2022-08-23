#include "header.h"

int primerosNNumerosNaturales(int numero)
{
    int i, suma = 0;

    for(i = 1; i<=numero; i++)
        suma += i;

    return suma;
}

