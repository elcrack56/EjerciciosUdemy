#include <stdio.h>
#include <stdlib.h>

//Tabla de un numero (ficheros)

int main(){
    int numero;
    printf("Ingresa un numero: ");
    scanf("%d",&numero);
    FILE *f;
    f=fopen("tabla.txt","w"); //"w" for write "r" for read
    for(int i=0;i<=10;i++){
        fprintf(f,"%d\n",i*numero);
    }
    fclose(f);
}