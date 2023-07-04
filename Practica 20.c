#include <stdio.h>
#include <stdlib.h>

//Suma numeros de fichero (numero.txt)

int main(){
    FILE *f;
    f=fopen("numeros.txt","r");
    int suma=0,numero=0;
    while(feof(f)==0){
        fscanf(f,"%d",&numero);
        suma+=numero;
    }
    printf("\nLa suma de los numeros es: %d",suma);
    return 0;
}