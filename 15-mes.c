/*
    15 Mes del año
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [1°) Pida por teclado el número (dato entero) de un mes del año.
     2°) Muestre por pantalla el nombre (dato cadena) correspondiente a dicho mes.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int mes; //se declara variable
    printf("Digite un n%cmero: ", 163); //se pide el numero al usuario
    scanf("%d", &mes);

    switch (mes) //Switch con las opciones dependiendo el numero que se introducio
    {
    case 1:
        printf("El n%cmero 1 corresponde a Enero", 163);
        break;
    case 2:
        printf("El n%cmero 2 corresponde a Febrero", 163);
        break;
    case 3:
        printf("El n%cmero 3 corresponde a Marzo", 163);
        break;
    case 4: 
        printf("El n%cmero 4 corresponde a Abril", 163);
        break;
    case 5: 
        printf("El n%cmero 5 corresponde a Mayo", 163);
        break;
    case 6: 
        printf("El n%cmero 6  corresponde a Junio", 163);
        break;
    case 7:
        printf("El n%cmero 7 corresponde a Julio", 163);
        break;
    case 8: 
        printf("El n%cmero 8 corresponde a Agosto", 163);
        break;
    case 9: 
        printf("El n%cmero 9 corresponde a Septiembre", 163);
        break;
    case 10:
        printf("El n%cmero 10 corresponde a Octubre", 163);
        break;
    case 11:
        printf("El n%cmero 11 corresponde a Noviembre", 163);
        break;
    case 12: 
        printf("El n%cmero 12 corresponde a Diciembre", 163);
        break;
    default: //caso default por si no se introduce ningun numero valido en el switch
        printf("ERROR: Mes incorrecto.");
        break;
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}