#include<stdio.h>


int main()
{
    int x;
    x = 1;
    while (x <= 100) /*este bucle imprimiria los 100 primeros numeros*/
    {
        printf("%d",x);
        printf(" - ");
        x++;
    } //fin de while
 
    return 0;
}