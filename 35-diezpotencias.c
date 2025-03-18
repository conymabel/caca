/*
    35 Primeras diez potencias de 2
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Si en lenguaje C se quiere escribir un 
    programa que muestre por pantalla las primeras 
    diez potencias de 2, desde 21 hasta 210]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    /*se declara el iterador en 1, se repetira el ciclo for mientras 
    sea menor o igual que 10, tambien se ira aumentado de 1 por cada 
    repeticion del ciclo*/
    for (int i=1; i<=10; i++){ 
        printf("%.0f ", pow(2,i)); //el 2 se aumenta en potencia de acuerdo al numero que tenga el iterador
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}