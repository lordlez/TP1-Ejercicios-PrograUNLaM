#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define VALIDO 1
#define ERROR 0

typedef struct
{
    int dia,
        mes,
        anio;
} tFecha;

int esFechaValida(tFecha fecha);
int cantidadDiaMes(int anio, int mes);
int esBisiesto(int anio);

#endif // HEADER_H_INCLUDED
