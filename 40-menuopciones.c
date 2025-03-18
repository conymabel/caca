/*
    40 Menú de opciones
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Si en lenguaje C se quiere escribir un programa que:
    1º) Muestre un menú con 4 opciones:
     •	1. Calcular el doble de un número entero.
     •	2. Calcular la mitad de un número entero.
     •	3. Calcular el cuadrado de un número entero.
     •	4. Salir.
    2º) Pida por teclado la opción deseada (dato entero).
    3º) Ejecute la opción del menú seleccionada.
    4º) Repita los pasos 1º, 2º y 3º, mientras que, el usuario no seleccione la opción 4 (Salir) del menú.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int num, opc;

    do{
        printf("\n           ===MENU===");
        printf("\n [1] Calcular el doble de un n%cmero. ", 163); //se imprime el menu
        printf("\n [2] Calcular la mitad de un n%cmero. ", 163);
        printf("\n [3] Calcular el cuadrado de un n%cmero. ", 163);
        printf("\n [4] Salir.", 163);
        printf("\n\n Digite su opci%cn [1-4]: ", 162); //se pide la opcion al usuario
        scanf("%d", &opc);

        switch(opc){ //inicio del anidamiento
            case 1: printf("\n Digite un n%cmero (entero): ", 163);
            scanf("%d", &num);
            printf(" El doble de %d es %d\n", num, num*2);
            break;
            case 2: printf("\n Digite un n%cmero (entero): ", 163);
            scanf("%d", &num);
            printf(" La mitad de %d es %.1f\n", num, (float) num/2);
            break;
            case 3: printf("\n Digite un n%cmero (entero): ", 163);
            scanf("%d", &num);
            printf(" El cuadrado de %d es %d\n", num, (int) pow(num, 2));
        }
    }while(opc!=4); //se repetira el bucle mientras la opcion que ingrese el usuario sea diff de 4
    
    //para terminar el programa hasta que se presione una tecla
    printf("\n Presione cualquier tecla para terminar\n");
    getch();
    return 0;
}