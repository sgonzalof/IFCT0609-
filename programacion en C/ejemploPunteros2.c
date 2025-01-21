#include<stdio.h>

int main()
{
    int x1,x2;
    int *pe;
    pe=&x1;
    *pe=100;
    pe=&x2;
    *pe=200;
    printf("Primer variable entera:%i\n",x1);
    printf("Segunda variable entera:%i\n",x2);
    return 0;
}