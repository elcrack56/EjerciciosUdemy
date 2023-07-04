#include <stdio.h>
#include <stdlib.h>

//Buscar caracteres en cadena

int main(){
    char cadena[50];
    char caracter;
    printf("Ingrese una cadena: ");
    gets(cadena);
    printf("Ingrese un caracter");
    fflush(stdin);
    caracter=getchar();
    int i=0;
    int pos=-1;
    while(cadena[i]!='\0' && pos==-1){
        if(cadena[i]==caracter){
            pos=1;
        }
        i++;
    }
    if(pos!=-1){
        printf("\nEl caracter %c se encuentra en la cadena %s en la posicion %d",caracter,cadena,pos);
    }else{
        printf("\nEl caracter %c no se encuentra en la cadena %s",caracter,cadena);
    }
    return 0;
}