#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int numeroElementos,i;
    int *array;
    i=0;
    printf("introduce el numero de elementos");
    scanf("%d",&numeroElementos);
    array=(int*)malloc(numeroElementos*sizeof(int));
   
    for(i=0;i<=numeroElementos;i++)
    {
        array[i]=1;
    }
    for(i=0;i<=numeroElementos;i++) printf("%d",array[i]);
    return 0;
}
