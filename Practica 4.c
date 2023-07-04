#include <stdio.h>
#include <stdlib.h>

//Conversor de divisas

int main(){
    float euros;
    printf("Ingresa el valor de euros que quiera convertir: ");
    scanf("%f",&euros);
    //float pesetas=euros*166.386
    printf("\n%.2f euros equivalen a %.2f pesetas",euros,euros*166.386); //se puede incluir la operacion directamente en el printf
    return 0;
}
