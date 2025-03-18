/*
    42 Tabla de multiplicar de un número
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que muestre por pantalla 
    la tabla de multiplicar de un número entero introducido por el usuario.
    El proceso debe repetirse mientras que el usuario lo desee.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    char resp;
    int num;

    do {
        printf("\nDigite un numero: ");
        scanf("%d", &num);
        printf("La tabla de multiplicar de %d es: ", num);
        //inicio del anidamiento
        for(int i=1; i<=10; i++){
            printf("\n %d x %d = %d", num, i, num*i);
        }//se imprimira la tabla del numero que se introducio, se multiplicara por el iterador

        printf("\n Desea ver otra tabla (s/n)?: "); //se le pregunta al usuario si quiere otra tabla
        while(getchar()!='\n'); //se limpia el buffer de la terminal
        scanf("%c", &resp);
    }while(resp!='n'); //se repetira hasta que se introduzca 'n'
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}