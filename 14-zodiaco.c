/*
    14 Signo del Zodiaco
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [1°) Muestre un listado de los signos del zodiaco, con sus numeros asociados.
     2°) Pida por teclado un numero (dato entero) asociado a un signo del zodiaco.
     3°) Muestre la categoria a la que pertenece el signo del zodiaco seleccionado.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    //imprime la tabla con los signos
    printf("\n| 1 - Aries        | \n| 2 - Tauro        | \n| 3 - Geminis      | \n| 4 - Cancer       | \n| 5 - Leo          | \n| 6 - Virgo        | \n| 7 - Libra        | \n| 8 - Escorpio     | \n| 9 - Sagitario    | \n| 10 - Capricornio | \n| 11 - Acuario     | \n| 12 - Piscis      |\n");
    int signo; //declara la variable
    printf("Digite su signo del zodiaco en base a la tabla: "); // pide al usuario que escriba el numero
    scanf("%d", &signo);
    switch (signo) //switch que imprime dependiendo el signo que se introducio
    {
    case 1:
        printf("\nEl signo Aries es categoria:\n Fuego");
        break;
    case 2:
        printf("\nEl signo Tauro es categoria:\n Tierra");
        break;   
    case 3:
        printf("\nEl signo Geminis es categoria:\n Aire");
        break;
    case 4:
        printf("\nEl signo Cancer es categoria:\n Agua");
        break;
    case 5:
        printf("\nEl signo Leo es categoria:\n Fuego");
        break;
    case 6:
        printf("\nEl signo Virgo es categoria:\n Tierra");
        break;
    case 7:
        printf("\nEl signo Libra es categoria:\n Aire");
        break;
    case 8:
        printf("\nEl signo Escorpio es categoria:\n Agua");
        break;
    case 9:
        printf("\nEl signo Sagitario es categoria:\n Fuego");
        break;
    case 10:
        printf("\nEl signo Capricornio es categoria:\n Tierra");
        break;
    case 11:
        printf("\nEl signo Acuario es categoria:\n Aire");
        break;
    case 12:
        printf("\nEl signo Piscis es categoria:\n Agua");
        break;
    default: //case default por si no se introduce ninguna de las opciones
        printf("ERROR: %d no esta asociado a ning%cn signo.", signo, 163);
        break;
    }
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}