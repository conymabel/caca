/*
    34 Suma de los cuadrados calculados
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado un número (dato entero).
    2º) Muestre por pantalla el mensaje:
     "<número> elevado a 2 es: <cuadrado>"
    3º) Pregunte al usuario si desea introducir otro número o no.
    4º) Repita los pasos 1º, 2º y 3º, mientras que, el usuario no responda 'n' de (no).
    5º) Muestre por pantalla la suma de los cuadrados calculados.
    Nota: utilizar un bucle do...while.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    char resp;
    int suma=0, cuadrado, num;

    do{
        printf("\nIntroduzca un n%cmero entero: ", 163); //se pide el numero
        scanf("%d", &num); //se guarda en la variable
        cuadrado=pow(num, 2); //se caclula el cuadradoo del número
        printf("%d al cuadrado es: %d", num, cuadrado); //se imprime el cuadrado en pantalla
        suma+=cuadrado;
        printf("\nDesea introducir otro n%cmero (s/n)?: ", 163); //se pregunta si se quiere introducir otro número
        while(getchar()!='\n'); //se limpia el buffer de la terminal para introducir la respuesta en tipo char
        scanf("%c", &resp); //se guarda en la variable de respuesta
    }while(resp!='n');  //se repetira el codigo de do mientras la respuesta sea s (si)

    printf("\nLa suma total es: %d", suma); //se imprime la suma acumulada de los cuadrados
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}