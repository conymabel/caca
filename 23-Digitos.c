/*
    23 Digitos de un numero Entero
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado un número (dato entero).
    2º) Muestre por pantalla el número de dígitos que tiene el número introducido por el usuario.
    Nota: Si el número introducido tiene 4 ó más dígitos, se mostrará el mensaje: "Tiene más de 3 dígitos".]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int num;
    printf("Digite un n%cmero entero: ", 163);
    scanf("%d", &num);

    if(num>=-9 && num<=9){ //condición para checar si el número es de un digito
        printf("Tiene 1 d%cgito.", 161);
    }else{//si no esta dentro del rango se pasa al siguiente if
        if(num>=-99 && num<=99){
            printf("Tiene 2 d%cgitos.", 161);
        }else{
            if(num>=-999 && num<=999){
                printf("Tiene 3 d%cgitos.", 161);
            }else{ //si no se cumple ninguno de las condiciones sera un num de mas de tres digitos
                printf("Tiene m%cs de 3 d%cgitos.", 160, 161);
            }
        }
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}