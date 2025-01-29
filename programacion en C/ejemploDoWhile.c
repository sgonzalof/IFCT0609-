#include<stdio.h>

int main()
{
     int valor;
     do {
         printf("Ingrese un valor entre 0 y 999 (0 finaliza):");
         scanf("%i",&valor);
         if (valor >= 100)
         {
             printf("Tiene 3 digitos.");
         }//fin del primer if (3 digitos)
         else
         {
             if (valor >= 10)
             {
                 printf("Tiene 2 digitos.");
             }//fin del segundo if (dos digitos)
             else
             {
                 printf("Tiene 1 digito.");
             }//fin del else (1 digito)
         }
         printf("\n");
     } while (valor != 0); //se va a ejecutar hasta que el usuario introduzca 0
     return 0;
}