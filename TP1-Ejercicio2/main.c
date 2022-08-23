#include "header.h"

int main()
{
    int n, m;
    printf("Ingrese un numero entero n: ");
    scanf("%d", &n);
    printf("Ingrese un numero entero m que sea mayor o igual a n: ");
    scanf("%d", &m);
    if(n > 0 && m >= n)
        printf("El combinatorio de %d y %d es: %.2f", n, m, combinatorio(n,m));
    else
        printf("Datos ingresados no cumplen la condicion requerida");
    return 0;
}
