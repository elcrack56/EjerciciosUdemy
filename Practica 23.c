#include <stdio.h>
#include <stdlib.h>

//Reserva dinamica de una estructura

struct producto{
    int codigo;
    char descripcion[50];
    float precio;
};

int main(){
    struct producto *prod;
    prod=malloc(sizeof(struct producto));
    printf("Ingrese el codigo: ");
    scanf("%d",&prod->codigo);
    printf("\nIngrese la descripcion: ");
    scanf("%s",prod->descripcion);
    printf("\nIngrese el precio: ");
    scanf("%f",&prod->precio);
    printf("\nCodigo del articulo: %d", prod->codigo);
    printf("\nDescripccion: %s", prod->descripcion);
    printf("\nPrecio: %f", prod->precio);
    free(prod);
    prod=NULL;
    return 0;
}