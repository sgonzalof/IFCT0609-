#include <stdio.h>
int main(void)
{
    int a,b;
    float resultado;
    printf("\nIntroduce el valor de a: ");
    scanf("%d",&a);
    printf("\nIntroduce el valor de b: ");
    scanf("%d",&b);

    if (b!=0)
    {
        resultado=a/b;

        printf("\nEl valor de %d dividido %d es: %f\n",a,b,resultado);
    
    }
    else
        printf("\nError, b vale 0\n");

    return 0;
}

#include <stdio.h>
int main()
{
    int fahr, celsius;
    int lower, upper, step;
    lower=0;
    upper=300;
    step=20;
    fahr=lower;
    while(fahr<=upper)
    {
        celsius=5*(fahr-32)/9;
        printf("%d\t%d\n",fahr,celsius);
        fahr=fahr+step;
    }
    return 0;
}