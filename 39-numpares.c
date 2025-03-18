/*
    39 Números pares del 1 al 300
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que muestre 
    por pantalla todos los números pares que hay entre 
    el 1 y el 300, ambos inclusive.
     Nota: utilizar un bucle for.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    /*se repetira hasta que el numero sea menor o igual a 300.
    se inicializa en 2 e ira en aumentos de 2 en 2, asi solo imprimira
    los numeros pares
    */
    for(int num=2; num<=300; num+=2){
        printf("%d ", num);
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}