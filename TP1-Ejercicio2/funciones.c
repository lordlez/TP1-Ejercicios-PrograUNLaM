#include "header.h"

float combinatorio(int n, int m)
{
    float combi;
    combi = (float)factorial(m) / (float)(factorial(n) * factorial(m-n));
    return combi;
}


int factorial(int numero)
{
    int i, facto = 1;
    for(i=2; i<=numero; i++)
        facto *= i;
    return facto;
}
