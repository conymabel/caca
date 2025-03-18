/*
    36 Sucesión de números positivos y negativos
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que muestre por pantalla 
     la sucesión de números: 1 -1 2 -2 3 -3 4 -4 5 -5
     Nota: Utilizar un bucle for.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    for(int num=1; num<=5; num++) //se declara la variable, se ira incrementando de 1
    {
        printf("%d %d ", num, -num); //se imprimiran los numeros en postivo y negativo
    } //se repetira hasta que num sea menor o igual a 5
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}