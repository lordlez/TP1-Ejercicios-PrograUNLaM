#include "header.h"

int main()
{
    int numero1, numero2;
    printf("Ingrese un numero: ");
    scanf("%d", &numero1);
    printf("Ingrese otro numero: ");
    scanf("%d", &numero2);
    printf("El resultado de la multiplicacion por sumas susecivas es de: %d", sumasSucesivas(numero1, numero2));
    return 0;
}
