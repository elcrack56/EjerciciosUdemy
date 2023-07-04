#include <stdio.h>
#include <stdlib.h>
#include "lecturas.h"

//Dias de la semana

int main(){
    int dia;
    dia=leerEnteroEntre("Introduce un numero entre 1 y 7: ",1,7);
    switch(dia){
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
        default:
            printf("Error");
        break;
    }
    return 0;
}