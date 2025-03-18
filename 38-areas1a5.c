/*
    38 Áreas de las circunferencias de radios 1 al 5
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que muestre por pantalla 
    el área de las circunferencias de radios 1, 2, 3, 4 y 5.
     Nota1: área de una circunferencia = Π * radio2
     Nota2: utilizar un bucle for.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    for(int radio=1; radio<=5; radio++){ 
        printf("\n%crea de la circunferencia con radio de %d: %.2f", 181, radio, 3.1416*pow(radio,2));
    } //se imprime el area dependiendo en que ciclo del for este, se repetira hasta que sea menor o igual a 5
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}