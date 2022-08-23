#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ANIO_BASE 1601
#define VALIDO 1
#define ERROR 0

typedef struct
{
    int dia,
        mes,
        anio;
}tFecha;

int esFechaValida(tFecha fecha);
int cantDiaMes(int mes, int anio);
int esBisiesto(int anio);
char continuar(char* mensaje);
void restarNDias(int dia, int mes, int anio);


#endif // HEADER_H_INCLUDED
