/*
    26 Calificación según nota validada
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado la nota (dato real) de una asignatura.
    2º) En el caso de que la nota sea incorrecta, muestre por pantalla el mensaje:
        "ERROR: Nota incorrecta, debe ser >= 0 y <= 10".
    3º) Repita los pasos 1º y 2º, mientras que, la nota introducida sea incorrecta.
    4º) Muestre por pantalla:
        "APROBADO", en el caso de que la nota sea mayor o igual que 5.
        "SUSPENDIDO", en el caso de que la nota sea menor que 5.
    Nota: Utilizar un bucle while.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    float nota;
    printf("Digite su nota: ");
    scanf("%f", &nota);

    while(nota<0 || nota>10){ //si la nota que ingreso en incorrecta, entrara al bucle de while
        printf("ERROR: Nota incorrecta\n"); //le muestra al usuario el error
        printf("Digite su nota de nuevo: "); //pide la nota de nuevo
        scanf("%f", &nota); //la guarda en la variable
    } // saldra del bucle solo si la nota es correcta

    if(nota>=5){ //ya que la nota es correcta pop
        printf("\nAPROBADO");
    }else{
        printf("\nREPROBADO");
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}