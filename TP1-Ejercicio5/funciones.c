#include "header.h"

void enFibonacci(int numero)
{
    int a = 1, b = 1, c;
    while(a != numero && a < numero)
    {
        c = a + b;
        a = b;
        b = c;
    }
    if (a == numero)
        printf("El numero %d pertenece a la serie Fibonacci", numero);
    else
        printf("El numero %d no pertenece a la serie Fibonacci", numero);
}
