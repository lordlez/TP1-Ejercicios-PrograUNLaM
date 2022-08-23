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


