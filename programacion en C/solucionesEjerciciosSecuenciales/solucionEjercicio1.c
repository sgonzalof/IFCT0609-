/*Realizar la carga de dos números enteros por teclado e imprimir su suma y su
producto.*/

#include <stdio.h>

int main()
{
    /*define cuatro variables, dos de ellas para leer los numeros por teclado 
    y las otras dos para almacenar la suma y el producto*/
    int num1, num2, suma, producto;
    /*empezamos pidiendo los dos numeros enteros por teclado*/
    printf("Ingrese primer valor: ");
    scanf("%d",&num1); /*lee por teclado lo que ha introducido el usuario
    y lo almacena en la posicion de memoria de la variable num1*/
    printf("Ingrese segundo valor: ");
    scanf("%d",&num2);
    /*calculo la suma y el producto y lo almaceno en las variables 
    correspondientes*/
    suma = num1 + num2;
    producto = num1 * num2;
    /*una vez calculado la suma y el producto, lo muestro por pantalla*/
    printf("La suma de los dos valores es:");
    printf("%d",suma);
    printf("El producto de los dos valores es:");
    printf("%d",producto);
    return 0;
}