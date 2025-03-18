/*
    20 Número cercano al 1 o al 0
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado un número (dato real).
    2º) Muestre por pantalla:
        "Está más cercano al 1", en el caso de que el número introducido esté más cercano al 1 que al 0.
        "Está más cercano al 0", en el caso de que el número introducido esté más cercano al 0 que al 1.
        "Está en medio", en el caso de que el número introducido sea el 0.5.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    float num; //declarar variable
    printf("Introduzca un n%cmero: ", 163);
    scanf("%f", &num); //se guarda el num en la variable

    if (num > 0.5){ //if para ver si es mayor que 0.5
        printf("Est%c m%cs cerca del 1", 160, 160); //si se cumple está más cerca del 1
    }else{ //si no se cumple la condición se sigue al sig if anidado
        if(num<0.5){ //if para ver si es menor que 0.5
            printf("Est%c m%cs cerca del 0", 160, 160); // si se cumple está más cerca del 0
        }else{ //si no se cumple ninguna de las condiciones
            printf("Est%c en medio", 160); //está en medio (0.5)
        }
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}