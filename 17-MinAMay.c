/*
    17 De vocal minúscula a mayúscula
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [1°) Pida por teclado una vocal en minuscula (dato caracter).
     2°) Muestre por pantalla la misma  vocal pero en mayuscula.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    char letra; //se declara la variable
    printf("Escriba una letra min%cscula: ", 163); //se le pide al usuario
    scanf("%c", &letra); //se guarda en la variable

    switch (letra) //switch dependiendo la letra que introduzca el usuario
    {
    case 'a':
       printf("A");
        break;
    case 'i':
        printf("I");
        break;
    case 'u':
        printf("U");
        break;
    case 'e':
       printf("E");
        break;
    case 'o':
       printf("O");
        break;
    default: //caso default por si no se introduce ninguna vocal minuscula
        printf("ERROR: %c no es una vocal min%cscula.", letra, 163);
        break;
    }

    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}