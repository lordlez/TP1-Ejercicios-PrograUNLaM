#include "header.h"

/**
Ejercicio 17
Desarrollar una función que a partir de una fecha obtenga la que resulte de res-tarle
N días.
*/

int main()
{
    tFecha fecha;

    do
    {
        printf("Ingrese una fecha: ");
        scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);
        if(esFechaValida(fecha))
        {
            restarNDias(fecha.dia, fecha.mes, fecha.anio);
        }else
        {
            printf("La fecha ingresada no es valida");
        }

    }while(continuar("\nDesea ingresar otra fecha?(s/n): "));


    return 0;
}
