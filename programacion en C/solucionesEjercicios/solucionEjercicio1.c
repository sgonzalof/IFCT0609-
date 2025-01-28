#include<stdio.h>

int main()
{
    int num1, num2, suma, producto;
    printf("Ingrese primer valor:");
    scanf("%d",&num1);
    printf("Ingrese segundo valor:");
    scanf("%d",&num2);
    suma = num1 + num2;
    producto = num1 * num2;
    printf("La suma de los dos valores es:");
    printf("%d",suma);
    printf("\n");
    printf("El producto de los dos valores es:");
    printf("%d",producto);
    return 0;
}