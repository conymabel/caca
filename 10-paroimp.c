/*
    10 Número par o impar
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [1º) Pida por teclado un número (dato entero).
    2º) Muestre en pantalla:
        "ES PAR", en el caso de que el número sea.
        "ES IMPAR", en el caso de que el número no sea.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int num;
    // pide el número al usuario
    printf("Digite un n%cmero: ", 163);
    // se guarda en la variable
    scanf("%d", &num);
    // se saca el modulo del numero entre 2 para checar si es par o impar
    if (num%2==0){
        printf("El n%cmero %d es par", 163, num);
    }else{ //si es cualquier numero no divisible entre dos
        printf("El n%cmero %d es impar", 163, num);
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}