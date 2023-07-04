#include <stdio.h>
#include <stdlib.h>
#include "lecturas.h"

//Precio final coche

int main(){
    int precioBase,kilometros;
    float consumo,precioFinal;
    precioBase=leerEnteroPositivo("Ingrese el precio base del vehiculo: ");
    kilometros=leerEnteroPositivo("Ingrese los kilometros: ");
    consumo=leerDecimalPositivo("Ingrese el consumo del vehiculo: ");
    if(kilometros<=20000 && consumo<=5){
        precioFinal=precioBase*1.2;
    }else if(kilometros>20000 && consumo<=5){
        precioFinal=precioBase*1.1;
    }else if(consumo>5){
        precioFinal=precioBase*1.05;
    }
    printf("\nEl precio final del vehiculo es: %.2f",precioFinal);
    return 0;
}