/*Escribir un programa en el cual se ingresen cuatro números, calcular e informar
la suma de los dos primeros y el producto del tercero y el cuarto.*/

/*en el ejercicio hay un error*/

#include <stdio.h>
int main()
{
    int num1, num2,num3,num4;
    printf("introduce el primer numero: ");
    scanf("%d",&num1);
    printf("introduce el segungo numero: ");
    scanf("%d",&num2);
    printf("introduce el tercer numero: ");
    scanf("%d",&num3);
    printf("introduce el cuarto numero: ");
    scanf("%d",&num4);
    printf("la suma de los dos primeros numeros es: %d",num1+num2);
    printf("\nel producto de los dos primeros numeros es: %d",num3*num4);
    
    return 0;
}
