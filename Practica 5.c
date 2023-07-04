#include <stdio.h>
#include <stdlib.h>

//Calificaciones alumnado

int main(){
    int nota;
    do{
    printf("Ingresa la nota del estudiante: ");
    scanf("%d",&nota);
    }while(nota<0 || nota>10);
    if(nota<=5)
    {
        printf("\nSuspenso");
    }else if(nota==6)
    {
        printf("\nBien");
    }else if(nota==7 || nota==8)
    {
        printf("\nNotable");
    }else if(nota==9 || nota==10)
    {
        printf("\nSobresaliente");
    }
    return 0;
}