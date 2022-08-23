#include "header.h"

int factorial(int numero)
{
    int i, facto = 1;
    for(i=2; i<=numero; i++)
        facto *= i;
    return facto;
}
