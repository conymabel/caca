/*
    Examen Validación de fecha
    Cony Mabel Jiménez Jiménez
    TDSM1A ID: 4963

    [Escribir en lenguaje C un programa que:
    1º) Pida por teclado una fecha en tres variables: día, mes y año (datos enteros).
    2º) Muestre por pantalla:
    "FECHA CORRECTA", en el caso de que la fecha sea válida.
    "FECHA INCORRECTA", en el caso de que la fecha no sea válida.
    Nota 1: Para que una fecha sea válida, se tiene que cumplir que:
     El mes debe ser mayor o igual que 1 y menor o igual que 12.
     El día debe ser mayor o igual que 1 y menor o igual que un número, el cual
     dependerá del mes y año introducidos por el usuario.
    Nota 2:
     Tienen 31 días: enero, marzo, mayo, julio, agosto, octubre y diciembre.
     Tienen 30 días: abril, junio, septiembre y noviembre.
     Tiene 29 días: febrero (si el año es bisiesto).
     Tiene 28 días: febrero (si el año no es bisiesto).
    Nota 3: Son bisiestos todos los años múltiplos de 4, excepto aquellos que son
    múltiplos de 100 pero no de 400.]
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    int dia, mes, anio;
    printf("Digite el a%co: ", 164);
    scanf("%d", &anio);
    printf("Digite el mes: ");
    scanf("%d", &mes);
    printf("Digite el d%ca: ", 161);
    scanf("%d", &dia);

    if(mes>=1 && mes<=12){ //if para validar si el mes es correcto
        switch (mes)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(dia>=1 && dia<=31){ //para validar si esta dentro del rango de dias de esos meses
                printf("FECHA CORRECTA");
            }else{
                printf("FECHA INCORRECTA");
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(dia>=1 && dia<=30){
                printf("FECHA CORRECTA");
            }else{
                printf("FECHA INCORRECTA");
            }
            break;
        case 2: //para checar si es año bisiesto
            if(anio%4==0 && anio%100!=0 || anio%400==0){
                if(dia>=1 && dia<=29){ //si es bisiesto, se checa si tiene un dia valida
                    printf("FECHA CORRECTA");
                }else{
                    printf("FECHA INCORRECTA");
                }
            }else{
                if(dia>=1 && dia<=28){ //si no es bisiesto, se checa de igual manera si es valido
                    printf("FECHA CORRECTA");
                }else{
                    printf("FECHA INCORRECTA");
                }
            }
            break;
        }
    }else{ //si  el mes no es valido
        printf("FECHA INCORRECTA");
    }
    
    //para terminar el programa hasta que se presione una tecla
    printf("\nPresione cualquier tecla para terminar\n");
    getch();
    return 0;
}