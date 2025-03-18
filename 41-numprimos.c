/*
    41 Números primos entre el número 1 y el 20
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Si en lenguaje C se quiere escribir un programa que muestre por pantalla todos los 
    números enteros del 1 al 20 (ambos inclusive) que sean primos.
     Nota: Un número primo es aquél que sólo es divisible por sí mismo y por 1.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int cont, num, primo;
    //bucle que recorre los números del 1 al 20
    for(num=1; num<=20; num++){
        primo=1; //se asume que el numero es primo inicialmente
        cont=2; //se inicializa el contador en 2

        while(cont<=num/2 && primo){ //bucle para verificar si el num es primo
            if(num%cont==0){ //si el num es divisible por el contador, no es primo
                primo=0; //cambia a 0, indicando que no es primo
            }
            cont++; //aumenta el contador para probar el sig divisor
        }

        if(primo){//si primo sigue siendo 1, significa que num es primo
            printf("%d ", num); //se imprime el numero
        }
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}