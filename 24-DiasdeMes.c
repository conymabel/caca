/*
    24 - Días de un mes
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Si en lenguaje C se quiere escribir un programa que:
    1º) Pida por teclado un año (dato entero).
    2º) Pida por teclado un mes (dato entero) de ese año.
    3º) Muestre por pantalla el número de días que tiene dicho mes.
    Nota 1: Si el número de mes introducido es menor que 1 ó mayor que 12, se mostrará el mensaje: "ERROR: Mes incorrecto.".
    Nota 2:
     -Tienen 31 días: enero, marzo, mayo, julio, agosto, octubre y diciembre.
     -Tienen 30 días: abril, junio, septiembre y noviembre.
     -Tiene 29 días: febrero (si el año es bisiesto).
     -Tiene 28 días: febrero (si el año no es bisiesto).
    Nota 3: Son bisiestos todos los años múltiplos de 4, excepto aquellos que son múltiplos de 100 pero no de 400.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int anio, mes; //se declaran variables
    printf("Digite el a%co: ", 164);
    scanf("%d", &anio);
    printf("Digite el mes: ");
    scanf("%d", &mes); //se guardan en sus respectivas variables

    switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: //la mimsa instrucción para todos los meses que tienen 31 días
            printf("31 d%cas", 161);
            break; 
        case 4:
        case 6: 
        case 9:
        case 11: //la misma instrucción para todos los meses que tienen 30 días
            printf("30 d%cas", 161);
            break; 
        case 2: // caso especial para febrero
            if(anio%4==0 && anio%100!=0 || anio%400==0){ //se checa si el año es bisiesto
                printf("29 d%cas", 161);
            }else{ //si no es bisiesto se marca con 28 días
                printf("28 d%cas", 161);
            }
            break;
        default: //caso default por si no se introduce ningún mes valido
            printf("ERROR: Mes Incorrecto.");
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}