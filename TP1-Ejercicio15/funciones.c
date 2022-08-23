#include "header.h"


int esFechaValida(tFecha fecha)
{
    if(fecha.anio >= 1600)
    {
        if(fecha.mes >= 1 && fecha.mes <= 12)
        {
            if(fecha.dia >= 1 && fecha.dia <= cantidadDiaMes(fecha.anio, fecha.mes))
            {
                return VALIDO;
            }else
            {
                return ERROR;
            }
        }else
        {
            return ERROR;
        }
    }else
    {
        return ERROR;
    }
}

int cantidadDiaMes(int anio, int mes)
{
    int cdm[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(mes == 2 && esBisiesto(anio))
    {
        return 29;
    }else
    {
        return cdm[mes-1];
    }
}

int esBisiesto(int anio)
{
    if((anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0))
    {
        return VALIDO;
    }else
    {
        return ERROR;
    }
}

void diaSiguiente(int dia, int mes, int anio)
{
    dia += 1;
    if(dia > cantidadDiaMes(anio, mes))
    {
        dia = 1;
        mes += 1;
        if(mes > 12)
        {
            mes = 1;
            anio += 1;
        }
    }
    printf("Al sumar un dia la fecha es: %d/%d/%d", dia,mes,anio);
}

char continuar(char* mensaje)
{
    char respuesta;
    puts(mensaje); // puts recibe cadena de caracteres a mostrar en pantalla
    fflush(stdin);
    scanf("%c", &respuesta);
    respuesta = tolower(respuesta);
    while(respuesta != 's' && respuesta != 'n')
    {
        puts("Respuesta invalida");
        puts("Debe ingresar (s/n): ");
        fflush(stdin);
        scanf("%c", &respuesta);
        respuesta = tolower(respuesta);
    }
    return respuesta == 's'; //preguntar a la profe
}










