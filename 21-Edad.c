/*
    21 Edad de una persona
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado la edad (dato entero) de una persona.
    2º) Muestre por pantalla:
    "BEBÉ", en el caso de que la edad sea 0 ó 1.
    "NIÑO", en el caso de que la edad sea mayor o igual que 2 y menor o igual que 12.
    "ADOLESCENTE", en el caso de que la edad sea mayor o igual que 13 y menor o igual que 17.
    "JOVEN", en el caso de que la edad sea mayor o igual que 18 y menor o igual que 30.
    "ADULTO", en el caso de que la edad sea mayor o igual que 31 y menor o igual que 64.
    "ANCIANO", en el caso de que la edad sea mayor o igual que 65 y menor o igual que 120.
    "ERROR: Edad incorrecta.", en el caso de que la edad sea menor que 0 o mayor que 120.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int edad; //declara variable
    printf("Digite su edad: ");
    scanf("%d", &edad); //se guarda en la variable

    if (edad>=0 && edad<=120){ //si esta dentro de los parametros se pasa al sig if
        if(edad<2){
            printf("BEB%c", 144);
        }else{ //si no cumple la condición se pasa al sig if hasta que cumpla alguna
            if(edad<13){
                printf("NI%cO", 165);
            }else{
                if(edad<18){
                    printf("ADOLESCENTE");
                }else{
                    if(edad<31){
                        printf("JOVEN");
                    }else{
                        if(edad<65){
                            printf("ADULTO");
                        }else{
                            printf("ANCIANO");
                        }
                    }
                }
            }
        }
    }else{ //si no se cumple ninguna de las condiciones en los if's anidados se marca error
        printf("ERROR: Edad Incorrecta.");
    }

    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}