/*
    04 Saludo
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado el nombre (dato cadena) de una persona.
    2º) Muestre por pantalla el mensaje: Hola nombre, buenos días.]
*/
// librerias
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){ //función principal
    char nombre[10]; //se declara el vector para una cadena de caracteres
    printf("Ingresa tu nombre: \n"); // se pide al usuario su nombre
    scanf("%s", nombre); //se guarda el nombre que introduzca el usuario en la variable
    printf("Hola %s, buenos dias", nombre); // se imprime el saludo con el nombre que ingreso el usuario

    getch();
    return 0;
}