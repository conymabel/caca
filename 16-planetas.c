/*
    16 Distancia de un planeta al sol
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [1°) Muestre el listado de los plantes (con sus números asociados)
     2°) Pida por teclado el número (dato entero) asociado a un planeta.
     3°) Muestre la distancia media al Sol, a la que se encuentra el planeta seleccionado.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int num;// se declara variable
    //imprime la tabla con los nombres y numeros de los planetas
    printf("|1 - Mercurio|\n|2 - Venus   |\n|3 - Tierra  |\n|4 - Marte   |\n|5 - Jupiter |\n|6 - Saturno |\n|7 - Urano   |\n|8 - Neptuno |\n|9 - Pluton  |");
    printf("\nDigite el planeta en base a la tabla: ");
    scanf("%d", &num); //se guarda el número en la variable

    switch (num) //switch para mostrar las opciones dependiendo el numero que escribio el usuario
    {
    case 1:
        printf("La distancia media al Sol desde Mercurio es: \n 59 Millones de Kilometros");
        break;
    case 2:
        printf("La distancia media al Sol desde Venus es: \n 108 Millones de Kilometros");
        break;
    case 3:
        printf("La distancia media al Sol desde la Tierra es: \n 150 Millones de Kilometros");
        break;
    case 4:
        printf("La distancia media al Sol desde Marte es: \n 228 Millones de Kilometros");
        break;
    case 5:
        printf("La distancia media al Sol desde Jupiter es: \n 750 Millones de Kilometros");
        break;
    case 6:
        printf("La distancia media al Sol desde Saturno es: \n 1431 Millones de Kilometros");
        break;
    case 7:
        printf("La distancia media al Sol desde Urano es: \n 2877 Millones de Kilometros");
        break;
    case 8:
        printf("La distancia media al Sol desde Neptuno es: \n 4509 Millones de Kilometros");
        break;
    case 9:
        printf("La distancia media al Sol desde Pluton es: \n 5916 Millones de Kilometros");
        break;
    default: //caso default por si no se introduce un numero valido
        printf("ERROR: %d no esta asociado a ning%cn planeta. ", num, 163);
        break;
    }
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}