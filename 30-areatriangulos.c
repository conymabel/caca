/*
    30 Área de triángulos
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado la base y altura (datos reales) de un triángulo
    2º) En el caso de que la base y la altura sean ambas distintas de cero, muestre por pantalla el mensaje:
     "El área del triángulo es: <área>"
    3º) Repita los pasos 1º y 2º, mientras que, la base y la altura sean ambas distintas de cero.
    4º) Muestre por pantalla cuántas áreas de triángulos han sido calculadas.
    Nota1: área de un triángulo = base * altura / 2
    Nota2: utilizar un bucle while.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    float base, altura, area;
    int cont=0;
    printf("Digite la base: ");
    scanf("%f", &base);
    printf("Digite la altura: ");
    scanf("%f", &altura);

    while (base!=0 && altura!=0) //verifica que la base y la altura sean diff de cero
    {
        area=base*altura/2; //calcula el area
        printf("El area del tri%cngulo es: %.2f", 160, area); //imprime el area
        cont++; //se sumara el contador cada que se repita el bucle
        printf("\n\nDigite la base: "); //se piden la base y altura de nuevo 
        scanf("%f", &base);
        printf("Digite la altura: ");
        scanf("%f", &altura);
    } //se saldra del bucle hasta que el usuario introduzca 0 como valor de la base o altura
    
    printf("\nSe calculo el %crea de %d tri%cngulo(s).", 160, cont, 160); //se imprime el contador con la cnatidad de areas obtenidas en el bucle

    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}