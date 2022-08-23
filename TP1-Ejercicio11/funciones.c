#include "header.h"

int primerosNNumerosPares(int numero)
{
    int suma = 0, i = 1, contador = 0;
    while(contador < 10)
    {
        if(i%2 == 0)
        {
            suma += i;
            contador++;
        }
        i++;
    }
    return suma;
}


