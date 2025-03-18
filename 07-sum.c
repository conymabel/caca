/*
    07 Suma y Multiplicacion
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [1º) Pida por teclado dos números (datos enteros).
    2º) Calcule la suma y multiplicación de los dos números introducidos.
    3º) Muestre por pantalla los resultados (datos enteros).]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int a, b, suma, mul; //se definen las variables
    printf("Introduzca un valor entero: "); //se pide el primer valor
    scanf("%d", &a); //se guarda en la variable
    printf("Introduza un segundo valor entero: "); // ""
    scanf("%d", &b); // ""
    suma=a+b; //se hace la suma
    mul=a*b; // se hace la multiplicación
    printf("La suma de los n%cmeros %d y %d es %d", 163, a, b, suma); //se imprime el resultado de la suma
    printf("\nLa multiplicacion de los n%cmeros %d y %d es %d", 163, a, b, mul); //se imprime el resultado de la multiplicación
    getch();
    return 0;
}