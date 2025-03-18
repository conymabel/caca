/*
    05 Cambio de divisas
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado una cantidad (dato entero) en Pesos.
    2º) Calcule su equivalente en euros.
    3º) Muestre por pantalla el resultado (dato real).
    1Euro = 21.30 pesos]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int peso; //se declara la variable entero
    float conversion, euro=21.30; //se declaran las variables para hacer la operacion
    printf("Digite la cantidad a convertir: "); // se pide al usuario el numero
    scanf("%d", &peso);//se guarda en la variable
    conversion=peso/euro; //se hace la operacion para la conversion de pesos a euros
    printf("%d Pesos son %.3f Euros", peso, conversion); //se imprime el resultado, con .3 para que redondee el resultado

    getch(); //para que no se cierre en automatico el programa 
    return 0;
}