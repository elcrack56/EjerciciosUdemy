#include <stdio.h>
#include <stdlib.h>
#include "lecturas.h"

//Vector de pesos

int main(){
    float pesos[5];
    float suma=0;
    for(int i=0;i<5;i++){
        pesos[i]=leerDecimalPositivo("\nIngrese un peso para almacenarlo: ");
        suma+=pesos[i];
    }
    float promedio=suma/5;
    int contMayorIgual=0;
    int contMenor=0;
    for(int i=0;i<5;i++){
        if(pesos[1]>=promedio){
            contMayorIgual++;
        }else{
            contMenor++;
        }
    }
    printf("\nPromedio de pesos es: %.2f\nPesos mayores o iguales al promedio: %d y menores al promedio: %d",promedio,contMayorIgual,contMenor);
    return 0;
}