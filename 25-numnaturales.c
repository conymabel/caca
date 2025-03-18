/*
    25 Primeros diez números naturales
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Si en lenguaje C se quiere escribir un programa que muestre por pantalla los
    primeros diez números naturales]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int cont;//se declara el contador
    cont=1; //se le da el valor de 1 para empezar
    while(cont<=10){ //condicion que se tiene que cumplir
        printf("%d\n", cont); //mientras se cumpla, se imprimira el número
        cont++; //despues de que se imprima, se le sumara 1
    } //se repetira el bucle hasta que se cumpla la condicion
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}