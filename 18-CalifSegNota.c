/*
    18 Calificar según nota
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Si en lenguaje C se quiere escribir un programa que:
    1º) Pida por teclado la nota (real) de una asignatura.
    2º) Muestre por pantalla:
    "APTO", en el caso de que la nota sea mayor o igual que 7 y menor o igual que 10.
    "NO APTO", en el caso de que la nota sea mayor o igual que 0 y menor que 7.
    "ERROR: Nota incorrecta.", en el caso de que la nota sea menor que 0 o mayor que 10.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    float nota; //se declara variable
    printf("Digite su nota: "); //se pide la nota al usuario
    scanf("%f", &nota); //se guarda en la variable

    if(nota>=5 && nota<=10){ //if de APTO si la nota es mayor o igual que cinco y menor o igual que 10
        printf("APTO");
    }else{
        if(nota >=0 && nota<5){ //anidamiento de if, si es mayor o igual que cero y menor que cinco
            printf("NO APTO");
        }else{ //si no se introduce un numero valido
            printf("ERROR: Nota Incorrecta.");
        }
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}