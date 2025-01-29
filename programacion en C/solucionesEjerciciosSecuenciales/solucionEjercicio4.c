/*Realizar un programa que lea cuatro valores numéricos e informar su suma y
promedio*/
#include <stdio.h>

int main(void)
{
    int num1,num2,num3,num4,suma;
    float promedio;/*promedio*/
    printf("introduce el primer numero ");
    scanf("%d",&num1);
    printf("introduce el segundo numero ");
    scanf("%d",&num2);
    printf("introduce el tercer numero ");
    scanf("%d",&num3);
    printf("introduce el cuarto numero ");
    scanf("%d",&num4);
    suma = num1+num2+num3+num4;
    promedio = (float)suma/4; /*como las variables suma y float son de distintos
    tipos, lo primero que tengo que hacer para que el promedio me saque 
    decimales, es convertir suma (que es un entero) a tipo float*/
    printf("\nla suma es: %d",suma);
    printf("\nelpromedio es: %.2f",promedio);
    return 0;
}
