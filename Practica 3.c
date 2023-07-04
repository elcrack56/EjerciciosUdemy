#include <stdio.h>
#include <stdlib.h>

//Area de un triangulo

int main(){
    float base,altura;
    printf("Ingrese la base del triangulo: ");
    scanf("%f",&base);
    printf("\nIngrese la altura del triangulo: ");
    scanf("%f",&altura);
    float area=base*altura; //declaracion y calculo del area
    printf("\nEl area del triangulo de base %.2f y altura %.2f es: %.2f",base,altura,area);
    return 0;
}
