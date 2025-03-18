/*
    08 Promedio de tres exámenes
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [1) Pida por teclado la nota de tres exámenes (datos reales).
    2) Calcule la nota media de los tres exámenes.
    3) Muestre por pantalla el resultado (dato real).]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    //Se declaran las variables
    float a,b,c,prom;
    // Se piden los valores al usuario
    printf("Digite la primera calificaci%cn: ", 162);
    scanf("%f", &a);
    printf("Digite la segunda calificaci%cn: ", 162);
    scanf("%f", &b);
    printf("Digite la tercera calificaci%cn: ", 162);
    scanf("%f", &c);
    //Se saca el promedio
    prom=(a+b+c)/3;
    //Se imprime el promedio
    printf("Su promedio es de: %.2f", prom);
    //Termina el programa hasta que el usuario presione una tecla
    getch();
    return 0;
}