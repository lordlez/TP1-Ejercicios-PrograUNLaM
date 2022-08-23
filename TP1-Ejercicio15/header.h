#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
void diaSiguiente(int dia, int mes, int anio);
char continuar(char* mensaje);

#endif // HEADER_H_INCLUDED
