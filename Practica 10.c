#include <stdio.h>
#include <stdlib.h>

//Suma y promedio de valores

int main(){
    int cont=0,suma=0,numero=0;
    while(numero!=0){
        printf("Inserte un numero (cero para terminar): ");
        scanf("%d",numero);
        cont++;
        suma+=numero;
    }
    float promedio=suma/cont;
    printf("\nLa suma de los numeros es: %d y el promedio es: %.2f",suma,promedio);
    return 0;
}