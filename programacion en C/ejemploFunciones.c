/* */

#include <stdio.h>
#include <math.h>

int pasoPorValor(int a,int b) 

{  
a++;
b++;
printf("El valor de a y b en el ambito de la funcion es: %d %d ",a,b);
return a+b;

} 

int main(void)
{
    int x,y,suma;
    x=0;
    y=0;
    suma=pasoPorValor(x,y);
    printf("\nEl valor de x e y tras invocar a  la funcion es: %d %d  ",x,y);
    printf("\nLa suma es igual a %d ",suma);
    return 0;
}
