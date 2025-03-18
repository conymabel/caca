/*
    06 Volumen de un cubo
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [1º) Pida por teclado la arista (dato real) de un cubo.
    2º) Calcule el volumen del cubo.
    3º) Muestre por pantalla el resultado (dato real).]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    float arista, volumen; //se declara las variables
    printf("Digite el valor de la arista: "); //se pide al usuario
    scanf("%f", &arista); //se guarda el valor en la variable
    volumen=pow(arista,3); //se hace la operación 
    printf("\nEl volumen del cubo es %.3f", volumen); //imprime el resultado 
    getch();
    return 0;
}