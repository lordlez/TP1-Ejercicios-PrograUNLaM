#include "header.h"

/**
Ejercicio 15
Desarrollar una funci�n que a partir de una fecha obtenga la correspondiente al
d�a siguiente.
*/

int main()
{
    tFecha fecha;
    do
    {
        printf("Ingrese una fecha (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);

        if(esFechaValida(fecha))
        {
            diaSiguiente(fecha.dia, fecha.mes, fecha.anio);
        }else
        {
            printf("La fecha ingresada no es valida");
        }
    }while(continuar("\nDesea ingresar otra fecha?(s/n): "));

    return 0;
}
