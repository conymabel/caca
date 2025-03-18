/*
    03 Area de un circulo
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Si en lenguaje C se quiere escribir un programa que:
    1º) Pida por teclado el radio (dato real) de una circunferencia.
    2º) Calcule el área de la circunferencia.
    3º) Muestre por pantalla el resultado (dato real).]
*/
//librerias
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){ //función principal

    float area, radio, pi=3.1416; //se declaran variables
    printf("Ingrese el valor del radio: \n"); //se imprime y pide los valores al usuario
    scanf("%f", &radio); // guarda los valores en las variables
    area= pow(radio, 2)*pi; // ejecuta la operación para sacar el área
    printf("El %crea del circulo es: %f", 160, area); //imprime el resultado en pantalla
    getch();
    return 0;
}