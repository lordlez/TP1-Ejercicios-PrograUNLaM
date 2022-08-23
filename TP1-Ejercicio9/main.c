#include "header.h"

int main()
{
    int a, b;
    printf("Ingrese un dividendo: ");
    scanf("%d", &a);
    printf("Ingrese un divisor mayor a cero: ");
    scanf("%d", &b);

    if(b > 0)
        cocienteResto(a, b);
    else
        printf("El divisor ingresado es incorrecto");

    return 0;
}
