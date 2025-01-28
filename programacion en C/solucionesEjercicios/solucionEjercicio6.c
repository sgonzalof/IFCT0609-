/*consultar el enunciado en el documento de los ejercicios*/
/*análisis 
datos de entrada: cantidad a devolver
datos de salida: cantidad de monedas de 50 de 10 de 20 y de 5 cts
proceso: determinar cuantas monedas de cada tipo hacen falta para totalizar
el importe a devolver

Podemos describir el proceso de la siguiente forma:
1. dividir la cantidad a devolver entre 0.50 para saber cuantas monedas de 50cts
tenemos que devolver
2. calcular lo que queda por devolver (total - numero de monedas de 50cts*0.50)
3. dividir lo que queda por devolver entre 0.20 para saber cuantas monedas de 20cts
necesitamos devolver
4. repetir el paso 3 pero con el importe correspondiente a las monedas de 
20cts
5. dividir la cantidad que queda por 0.10 para saber la cantidad de monedas de 10cts
que hay que devolver
6. repetir el paso 3 pero con el importe correspondiente a las monedas de 10cts
7. dividir la cantidad que queda por 0.05 para saber la cantidad de monedas de 5cts
que hay por devolver
8. calcular la cantidad que queda por devolver final
El programa mostrara lo que devuelve en monedas, da igual que la cantidad sea
igual o distinta de 0
*/
#include <stdio.h>
int main()
{
    float cantidadDevolver, faltaPorDevolver;
    int monedas50, monedas20, monedas10, monedas05;
    printf("introduce la cantidad a devolver: ");
    scanf("%f",&cantidadDevolver);

    faltaPorDevolver=cantidadDevolver;    

    monedas50=faltaPorDevolver/0.50;
    printf("monedas 50: %d",monedas50);
    faltaPorDevolver=faltaPorDevolver-monedas50*0.50;

    monedas20=(faltaPorDevolver/0.20);
    printf("\nmonedas 20: %d",monedas20);
    faltaPorDevolver=faltaPorDevolver-monedas20*0.20;

    monedas10=(faltaPorDevolver/0.10);
    printf("\nmonedas 10: %d",monedas10);
    faltaPorDevolver=faltaPorDevolver-monedas10*0.10;

    monedas05=(faltaPorDevolver/0.05);
    printf("\nmonedas 05: %d",monedas05);
    


    return 0;
}
