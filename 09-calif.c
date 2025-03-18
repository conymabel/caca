/*
    09 Calificación según nota
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [1) Pida por teclado la nota (dato real) de una asignatura.
    2) Muestre en pantalla:
        °APROBADO si es mayor o igual a 7.
        °REPROBADO si es menor que 7.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    //se declaran variables
    float nota;
    printf("Digite su nota: "); //se pide al usuario
    scanf("%f", &nota); //se guarda en la variable
    if (nota>=7){ //if para ver si cumple con lo que se pide (igual o mayor a 7)
        printf("APROBASTE"); //si cumple con los parametros
    }
    else{ // else por si no esta en el rango que se pide
        printf("REPROBASTE");
    }
    getch();
    return 0;
}