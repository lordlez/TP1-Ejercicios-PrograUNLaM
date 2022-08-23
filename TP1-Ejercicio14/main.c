#include "header.h"

int main()
{
    tFecha fecha;
    char respuesta;
    do
    {
        printf("Ingrese una fecha (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);

        if(esFechaValida(fecha))
            printf("La fecha es valida");
        else
            printf("La fecha no es valida");

        printf("\nDesea ingresar otra fecha? (n -> salir): ");
        fflush(stdin);
        scanf("%c", &respuesta);
    }while(respuesta != 'n');

    return 0;
}
