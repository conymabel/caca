/*
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado dos números (datos enteros).
    2º) En el caso de que alguno de ellos sea menor o igual que cero, muestre por pantalla el mensaje:
     "ERROR: Ambos números deben ser mayores que cero.".
    En caso contrario, muestre por pantalla el resultado de realizar la división entera del primer número introducido 
    por el usuario entre el segundo, y el resto.
    Nota: No se puede utilizar el operador división (/) ni el operador módulo (%).]
*/

/*  Programa: División entera con restas sucesivas */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int dividendo, divisor, cociente, residuo;
    printf("\nDigite un n%cmero (dividendo): ", 163);
    scanf("%d", &dividendo);
    printf("Digite un n%cmero (divisor): ", 163);
    scanf("%d", &divisor);

    if(dividendo>0 && divisor>0){
        cociente=0;
        residuo=dividendo;
        while(residuo >= divisor){
            residuo=residuo-divisor;
            cociente++;
        }

        printf("\n%d / %d = %d", dividendo, divisor, cociente);
        printf("\n---------------");
        printf("\nResiduo = %d\n", residuo);

    }else{
        printf("ERROR: AMBOS n%cmeros deben ser mayor a 0.", 163);
    }

    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}