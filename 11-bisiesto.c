/*
    11 Año Bisiesto
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [1º) Pida por teclado un año (dato entero).
    2º) Muestre por pantalla:
        "ES BISIESTO", en el caso de que el año sea bisiesto.
        "NO ES BISIESTO", en el caso de que el año no sea bisiesto.
    Nota: Son bisiestos todos los años múltiplos de 4, excepto aquellos que son
    múltiplos de 100 pero no de 400.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int anio; //se declara la variable
    printf("Digite el a%co: ", 164); //se pide al usuario
    scanf("%d", &anio); //se guarda en la variable
    //Checa si el numero es multiplo de 4 y 400, más no de 100
    if (anio%4==0 && anio%100!=0 || anio%400==0){ //se declaran los parametros del if: que sea multiplo de 4 o 400 y que no sea de multiplo de 100 
        printf("El a%co %d es bisiesto", 164, anio);

    }else{ //si no cumple con los parametros del if
        printf("El a%co %d no es bisiesto", 164, anio);
    }

    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}