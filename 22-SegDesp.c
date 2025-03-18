/*
    22 La hora un segundo después
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado una hora en tres variables: horas, minutos y segundos (datos enteros).
    2º) Muestre por pantalla la hora un segundo después.
    Nota 1: Si la hora introducida por el usuario es incorrecta, se debe mostrar el mensaje: "ERROR: La hora es incorrecta.".
    Nota 2: Para que una hora sea válida, se tiene que cumplir que:
        Las horas deben ser mayor o igual que 0 y menor o igual que 23.
        Los minutos deben ser mayor o igual que 0 y menor o igual que 59.
        Los segundos deben ser mayor o igual que 0 y menor o igual que 59.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int h, m, s; //se declaran las variables
    printf("Introduzca la hora: ");
    scanf("%d", &h);
    printf("\nIntroduzca los minutos: ");
    scanf("%d", &m);
    printf("\nIntroduzca los segundos: ");
    scanf("%d", &s); // se piden y se guardan en su respectiva variable

    //se declaran las condiciones para que la hora introducida cuente como valida
    if(h>=0 && h<=23 && m>=0 && m<=59 && s>=0 && s<=59){
        s++; //incremento de 1 en los segundos
        if(s==60){ //si los segundos quedan en 60, se escribira en la hora final como 0 seg
            s=0;
            m++; //incremento de 1 en los minutos
            if (m==60){ //lo mismo que la condición de los segundos
                m=0;
                h++; //incremento de 1 en las horas
                if(h==24);{ //lo mismo que los min y seg, pero su limite es de 24
                    h=0;
                }

            }
        }
        printf("\nUn segundo despu%cs de la hora es: %d:%d:%d",130,h,m,s); //se imprime la hora despues del segundo agregado
    } else{ //si no se introduce una hora correcta pasa directo a mostrar error
        printf("ERROR: Hora Invalida.");
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}