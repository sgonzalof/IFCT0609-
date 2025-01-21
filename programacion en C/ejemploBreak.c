#include<stdio.h>

int main(void)
{
    int valor;
    int f;
    int suma=0;
    for(f=0;f<10;f++)
    {
        printf("Ingrese valor:");
        scanf("%i",&valor);
        if (valor==0)
        {
            break;
        }
        suma+=valor;
    }
    printf("La suma de los valores ingresados es:%i",suma);
    return 0;
}