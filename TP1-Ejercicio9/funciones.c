#include "header.h"

void cocienteResto(int a, int b)
{
    int cociente, resto;
    cociente = a / b;
    resto = a % b;
    printf("El cociente entero entre %d dividido %d es: %d", a, b, cociente);
    printf("\nEl resto entre %d dividido %d es: %d", a, b, resto);
}
