/*
    28 Área de una circunferencia de radio válido
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado el radio (dato real) de una circunferencia.
    2º) En el caso de que el radio sea menor o igual que 0, muestre por pantalla el mensaje:
        "ERROR: El radio debe ser mayor que cero."
    3º) Repita los pasos 1º y 2º, mientras que, el radio introducido sea incorrecto.
    4º) Muestre por pantalla:
        "El área de una circunferencia es: <área>."
    Nota1: área de una circunferencia = Π * radio2
    Nota2: utilizar un bucle while.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    float radio, pi=3.1416, area;
    printf("Digite el radio: ");
    scanf("%f", &radio);

    while (radio<=0) //mientras que el radio sea menor o igual que 0
    {
        printf("ERROR: El radio debe ser mayor que cero. "); //muestra el error
        printf("\nDigite el radio: "); //lo pide de nuevo
        scanf("%f", &radio);
    }
    
    area=pi*pow(radio,2); //saca el area
    printf("El %crea de la circunferencia es: %.2f", 160, area); //Imprime el area
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}