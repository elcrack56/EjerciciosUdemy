#include <stdio.h>
#include <stdlib.h>

//Media de un vector

int main(){
    float vector[5];
    for(int i=0;i<5;i++){
        printf("\nIngresa un numero real: ");
        scanf("%f",&vector[i]);
    }
    float *puntero=&vector[0];
    float media=0;
    for(int i=0;i<5;i++){
        media+=*(puntero+i);
    }
    media/=5;
    printf("\nLa media de los valores es: %.2f",media);
    return 0;
}