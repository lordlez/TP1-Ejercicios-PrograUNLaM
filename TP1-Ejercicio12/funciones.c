#include "header.h"

int numerosParesMenoresQueN(int n)
{
    int suma = 0, i;

    for(i = 1; i<n; i++)
        if(i%2 == 0)
            suma += i;

    return suma;
}



