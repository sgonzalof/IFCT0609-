#include <stdio.h>

int main()
{
    int valor;
    printf("Ingrese un valor entre 1 y 5:");
    scanf("%i",&valor);
    switch (valor) {
        case 1:printf("Uno");
               break;
        case 2:printf("Dos");
               break;
        case 3:printf("Tres");
               break;
        case 4:printf("Cuatro");
               break;
        case 5:printf("Cinco");
               break;
        default:
            printf("El valor esta fuera de rango");
    } //fin del switch
    printf("fin del procedimiento");
    return 0;
}