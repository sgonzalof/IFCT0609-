#include <stdio.h>

int main (void)
{
    int valor1=10;
    float valor2=20.00;
    int *pe;
    float *pf;
    pe=&valor1;
    printf("lo apuntado por pe es: %d ",*pe); //sacamos el valor
    printf("\nla direccion que almacena pe es: %p",pe); //visualizo la direccion
    pf=&valor2;
    printf("\nlo apuntado por pe es: %f ",*pf); //sacamos el valor
    printf("\nla direccion que almacena pe es: %p",pf); //visualizo la direccion
    //repetir lo anterior con valor2

}