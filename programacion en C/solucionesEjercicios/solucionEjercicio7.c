/*una compañia de refrescos comercializa tres productos. Cola, limon y naranja
realizar un programa que calcule las ventas por producto y lo muestre en 
formato tabla (ver en el enunciado del documento de ejercicios el formato
a utilizar)*/

#include <stdio.h>
int main(void)
{
    /*vamos a usar variables float para los precios y variables int para 
    las cantidades*/
    int cantidadCola, cantidadLimon, cantidadNaranja;
    float precioCola,precioLimon,precioNaranja;
    /*pedimos por teclado los precios unitarios de todos los refrescos*/
    printf("introduce el precio de la Cola ");
    scanf("%f",&precioCola);
    printf("introduce el precio de la Naranja ");
    scanf("%f",&precioNaranja);
    printf("introduce el precio del Limon ");
    scanf("%f",&precioLimon);

    /*pedimos el numero de unidades vendidas por cada refresco*/

    printf("introduce las uds vendidas de Cola ");
    scanf("%d",&cantidadCola);
    printf("introduce las uds vendidas de Naranja ");
    scanf("%d",&cantidadNaranja);
    printf("introduce las uds vendidas de Limon ");
    scanf("%d",&cantidadLimon);

    /*visualizamos*/
    printf("Producto    Ventas      Precio      Total\n");
    printf("------------------------------------------\n");
    printf("Cola        %4d     %4.2f   %10.2f\n",cantidadCola,precioCola,precioCola*cantidadCola);
    printf("Naranja     %4d     %4.2f   %10.2f\n",cantidadNaranja,precioNaranja,precioNaranja*cantidadNaranja);
    printf("Cola        %4d     %4.2f   %10.2f\n",cantidadLimon,precioLimon,precioLimon*cantidadLimon);

    return 0;
}
