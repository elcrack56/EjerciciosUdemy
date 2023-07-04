#include <stdio.h>
#include <stdlib.h>

//Cadenas enlazadas

int main(){
    char cadena1[50],cadena2[50],cadena3[50],cadena4[50];
    printf("Introduce la cadena 1: ");
    gets(cadena1);
    printf("\nIntroduce la cadena 2: ");
    fflush(stdin);
    gets(cadena2);
    printf("\nIntroduce la cadena 3: ");
    fflush(stdin);
    gets(cadena3);
    printf("\nIntroduce la cadena 4: ");
    fflush(stdin);
    gets(cadena4);
    printf("\n%s-%s-%s-%s",cadena1,cadena2,cadena3,cadena4);
    return 0;
}