/*
    32 Suma y cantidad de números introducidos (Versión 1)
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado un número (dato entero).
    2º) Pregunte al usuario si desea introducir otro número o no.
    3º) Repita los pasos 1º y 2º, mientras que, el usuario no responda 'n' de (no).
    4º) Muestre por pantalla cuántos números han sido introducidos por el usuario, así como, la suma de todos ellos.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    char resp;
    int suma=0, cont=0, num;

    do{ //instrucciones
        printf("\nDigite un n%cmero: ", 163); //se pide el numero
        scanf("%d", &num); //se guarda en la variable de numero
        suma+=num; //se suma el numero introducido en la suma
        cont++; //se aumenta uno al contador
        printf("Desea introducir otro n%cmero (s/n)?: ", 163); //se pregunta si se desea continuar
        while(getchar()!='\n'); //se limpia el buffer de la terminal
        scanf("%c", &resp); //se guarda la respuesta en la variable char de respuesta
    }while(resp!='n'); //se hara todas las instrucciones mientras la respuesta sea diferente de n (no)

    //se imprimen los resultados
    printf("\nSe introducio %d n%cmero(s). ", cont, 163);
    printf("\nSuma total: %d", suma, 163);
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}