/*
    29 Área de un cubo
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado la arista (dato real) de un cubo.
    2º) En el caso de que la arista sea menor o igual que 0, muestre por pantalla el mensaje:
     "ERROR: La arista debe ser mayor que cero."
    3º) Repita los pasos 1º y 2º, mientras que, la arista introducida sea incorrecta.
    4º) Muestre por pantalla:
     "El área de un cubo de arista <arista> es: <área>."
    Nota1: área de un cubo = 6 * arista2
    Nota2: utilizar un bucle while.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    float arista, area;
    printf("\nIntroduzca arista: ");
    scanf("%f", &arista);

    while(arista<=0){ //si la arista es incorrecta, entra al bucle
        printf("\nERROR: La arista debe ser mayor que cero. ");
        printf("\nIntroduzca arista de nuevo: "); //pide de nuevo la arista
        scanf("%f", &arista); //la guarda en la variable
    }//sale del bucle hasta que se introduzca una arista valida
    area=6*pow(arista,2); //calcula el area
    printf("\nEl %crea del cubo con arista %.2f es: %.2f", 160, arista, area); //imprime el area

    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}