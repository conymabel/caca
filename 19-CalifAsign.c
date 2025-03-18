/*
    19 Calificar Asignatura
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Si en lenguaje C se quiere escribir un programa que:
    1º) Pida por teclado la nota (dato real) de una asignatura.
    2º) Muestre por pantalla:
        "SOBRESALIENTE", en el caso de que la nota sea mayor o igual que 9 y menor o igual que 10.
        "NOTABLE", en el caso de que la nota sea mayor o igual que 8 y menor que 9.
        "BIEN", en el caso de que la nota sea mayor o igual que 6 y menor que 8.
        "SUFICIENTE", en el caso de que la nota sea mayor o igual que 5 y menor que 6.
        "INSUFICIENT", en el caso de que la nota sea mayor o igual que 3 y menor que 5.
        "MUY DEFICIENTE", en el caso de que la nota sea mayor o igual que 0 y menor que 3.
        "ERROR: Nota incorrecta."", en el caso de que la nota sea menor que 0 o mayor que 10.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    float nota; //se declara variable
    printf("Digite su nota: ");
    scanf("%f", &nota); //se guarda en la variable

    if (nota<0 || nota > 10){ //si la nota es menor que 0 o mayor a 10 se imprimira el mensaje de ERROR
        printf("ERROR: Nota incorrecta.");
    }else{
        if (nota>=9){ //inicia el anidamiento, si es igual o mayor que 9 mostrara el mensaje
            printf("SOBRESALIENTE");
        }else{ //si no cumple, se salta al siguiente anidamiento
            if (nota>=7){
               printf("NOTABLE");
            }else{
                if (nota >=6){
                    printf("BIEN");
                }else{//continua pasando a los siguientes anidamientos de if mientras no se cumpla los parametros
                    if (nota >= 5){
                        printf("SUFICIENTE");
                    }else{
                        if (nota>=3){
                            printf("INSUFICIENTE");
                        }else{ //si no cumplio ninguna de las condiciones (ser mayor o igual que 3 y menor o igual que 10)
                            printf("MUY DEFICIENTE");
                        }
                        
                    }
                    
                }
                
            }
            
        }
    }
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}