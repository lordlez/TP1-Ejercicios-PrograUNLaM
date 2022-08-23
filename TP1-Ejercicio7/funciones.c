#include "header.h"

void esPerfectoDeficienteAbundante(int numero)
{
    int i, suma = 0;

    for(i = 1; i <numero; i++)
    {
        if(numero%i == 0)
        {
            suma += i;
        }
    }

    if(suma == numero)
    {
        printf("El numero %d es PERFECTO", numero);
    }else
    {
        if(suma < numero)
        {
            printf("El numero %d es DEFICIENTE", numero);
        }else
        {
            printf("El numero %d es ABUNDANTE", numero);
        }
    }
}


