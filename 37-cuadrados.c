/*
    37 Cuadrados de los números del 1 al 10
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que muestre por pantalla
    los cuadrados de los diez primeros números naturales.
      Nota1: cuadrado de un número = número2
      Nota2: utilizar un bucle for.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    for(int num=1; num<=10; num++){ //se declara la variable y se aumentara en uno por cada repeticion
        printf("%.0f ", pow(num, 2)); //se eleva el numero (la variable) a 2 y se imprime
    } //se repetira hasta que num sea igual o menor a 10
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}