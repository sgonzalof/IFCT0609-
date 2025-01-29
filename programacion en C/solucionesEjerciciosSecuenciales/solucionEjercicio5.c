/*Se debe desarrollar un programa que pida el ingreso del precio de un artículo y
la cantidad que lleva el cliente. Mostrar lo que debe abonar el comprador.
Definir una variable de tipo float para el precio del artículo*/

#include <stdio.h>
int main()
{
    float precioArticulo;
    int cantidad;
    printf("introducir el precio del articulo ");
    scanf("%f",&precioArticulo);
    printf("introduce la cantidad que ha adquirido el comprador ");
    scanf("%d",&cantidad);
    /*calculamos el precio total multiplicando el precio y la cantidad
    como el precio es de tipo float y el resultado lo quiero sacar con 
    decimales, convierto la variable cantidad a float (se declaro como
    entera) y realizo la multiplicacion. El resultado me lo mostrará con 
    decimales, en este caso, se ha formateado el resultado para que me 
    muestre dos decimales*/
    printf("el precio total es: %.2f",(float)cantidad*precioArticulo);
    return 0;
}
