/*
    27 La mitad de uun número
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado un número (dato real).
    2º) En el caso de que el número sea distinto de cero, muestre por pantalla el mensaje:
    "La mitad de <número> es: <mitad>".
    3º) Repita los pasos 1º y 2º, mientras que, el número sea distinto de cero.
    4º) Muestre por pantalla cuántos números distintos de cero han sido introducidos por el usuario.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int cont=0;
    float num;

    printf("Digite un n%cmero: ", 163);
    scanf("%f", &num);

    while(num!=0){ //mientras el numero introducido sea diferente de cero
        printf("La mitad de %.0f es: %.1f", num, num/2); //como aun no tiene numero, entra al ciclo y pide el numero
        cont++; //se le suma 1 al contador
        printf("\nDigite un n%cmero: ", 163); //pide otro número al usuario
        scanf("%f", &num); //lo guarda de nuevo
    } //se saldra del bucle hasta que se introduzca un 0
    printf("\n Introducio %d n%cmero(s) diferente(s) de cero. ", cont, 163); 
    //ya que salio del ciclo, imprime la cantidad de numero introducidos por el usuario

    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}