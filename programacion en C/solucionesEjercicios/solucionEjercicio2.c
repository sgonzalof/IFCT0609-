/* Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro de
este (El perímetro de un cuadrado se calcula multiplicando el valor del lado por
cuatro)*/

#include <stdio.h>
int main()
{
    int lado, perimetro;
    printf("introduce el lado del cuadrado: ");
    scanf("%d",&lado);
    perimetro=4*lado;
    printf("el perimetro del cuadrado es:  %d",perimetro);
    return 0;
}
