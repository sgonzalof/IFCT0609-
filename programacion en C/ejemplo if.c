#include<stdio.h>
int main(void)
{
    /* code */
    int a,b;
    printf ("introduce el valor de a");
    scanf("%d",&a);
    printf ("introduce el valor de b");
    scanf("%d",&b);

    if (a>b)    
        { //inicio del if
            b--; //es lo mismo que b=b-1
            a=a+5; //a+=5 seria lo mismo, si por ejemplo pongo a+=b, seria lo mismo
                   //que poner a=a+b
        } /*final del if*/
    else
        {
            a++; //que lo mismo que a=a+1
            b=b-5;
        }//fin de else

    if (b-a!=7) b=5; //el operador logico != es lo mismo que distinto
    printf("%d",a);
    printf("%d",b);
    return (0);
}

