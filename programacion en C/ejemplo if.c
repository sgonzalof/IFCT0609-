#include<stdio.h>
int main(void)
{
    /* code */
    int a,b;
    if (a>b)    
    {
        b--;
        a=a+5;
    }
    else
    {
        a++;
        b=b-5;
    }
    if (b-a!=7) b=5;
    printf(a);
    return (0);
}

