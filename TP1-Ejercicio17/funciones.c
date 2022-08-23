#include "header.h"

int esFechaValida(tFecha fecha)
{
    if(fecha.anio > ANIO_BASE)
    {
        if(fecha.mes >= 1 && fecha.mes <= 12)
        {
            if(fecha.dia >=1 && fecha.dia <= cantDiaMes(fecha.mes, fecha.anio))
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

int cantDiaMes(int mes, int anio)
{
    int cdm[] = {31,28,31,30,30,30,31,31,30,31,30,31};
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
    if((anio % 400 == 0) || (anio % 4 == 0 && anio % 100!= 0))
    {
        return VALIDO;
    }else
    {
        return ERROR;
    }
}

char continuar(char* mensaje)
{
    char respuesta;
    puts(mensaje);
    fflush(stdin);
    scanf("%c", &respuesta);
    respuesta = tolower(respuesta);
    while(respuesta != 's' && respuesta != 'n')
    {
        puts("Respuesta incorrecta, debe ingresar (s/n): ");
        fflush(stdin);
        scanf("%c", &respuesta);
        respuesta = tolower(respuesta);
    }
    return respuesta == 's';
}


void restarNDias(int dia, int mes, int anio)
{
    int i, dias;
    printf("Ingrese la cantidad de dias a restar a la fecha: ");
    scanf("%d", &dias);
    for(i=1; i<dias; i++)
    {
        dia -= 1;
        if(dia < 1)
        {
            mes -= 1;
            dia = cantDiaMes(mes, anio);
            if(mes < 1)
            {
                mes = 12;
                anio -= 1;
            }
        }
    }
    printf("La fecha luego de restarle %d dias es: %d/%d/%d", dias, dia, mes, anio);
}



