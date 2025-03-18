/*
    12 Letra vocal
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [1º) Pida por teclado una letra (dato carácter) del abecedario.
    2º) Muestre por pantalla:
        "ES UNA VOCAL", cuando la letra introducida sea una vocal minúscula (a,
        e, i, o, u) o una vocal mayúscula (A, E, I, O, U).
        "NO ES UNA VOCAL", cuando la letra introducida no sea una vocal
        minúscula (a, e, i, o, u) ni una vocal mayúscula (A, E, I, O, U).]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    char letra; //se declara la variable

    printf("Escriba una letra cualquiera: "); //se le pide la letra al usuario
    scanf("%c", &letra); // se guarda en la variable
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
    letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){ // un if que incluye todas las vocales mayusculas y minusculas
        printf("La letra %c es vocal", letra);
    }else{ //si es cualquier otra letra de las que no se especifican
        printf("La letra %c no es una vocal", letra);
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}