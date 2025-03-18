/*
    13 Dia de la semana
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [1°) Pida por teclado el número (dato entero) de un dia de la semana.
     2°) Muestre por pantalla el nombre (dato cadena) correspondiente a dicho dia.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int dia; //se declaran variables
    printf("Digite un n%cmero del 1 al 7: \n", 163);
    scanf("%d", &dia);

    switch (dia) //switch con las opciones disponibles, las imprime dependiendo el numero que digite el usuario
    {
    case 1:
        printf("Lunes");
        break;
    case 2:
        printf("Martes");
        break;
    case 3:
        printf("Miercoles");
        break;
    case 4:
        printf("Jueves");
        break;
    case 5:
        printf("Viernes");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    default: //caso default por si no se introduce ninguna de las opciones
        printf("ERROR: Dia incorrecto.");
        break;
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}