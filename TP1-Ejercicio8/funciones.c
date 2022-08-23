#include "header.h"

int sumasSucesivas(int numero1, int numero2)
{
    int i, suma = 0;
    for(i = 1; i <= numero2; i++)
        suma += numero1;

    return suma;
}
