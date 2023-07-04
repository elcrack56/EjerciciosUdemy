#include <stdio.h>
#include <stdlib.h>
#include <string.h> //para usar strcmp

//Jugadores de un equipo de futbol

int main(){
    struct jugador{
        char nombre[50];
        int edad;
        float altura;
    };
    struct jugador jugadores[5]; //vector de estructura de cinco jugadores
    for(int i=0;i<5;i++){
        fflush(stdin);
        printf("\nIngrese el nombre del jugador %d: ",i+1);
        scanf("%s",jugadores[i].nombre);  // se puede usar el gets()
        printf("\nIngrese la edad del jugador %d: ",i+1);
        scanf("%d",&jugadores[i].edad);
        printf("\nIngrese la altura del jugador %d: ",i+1);
        scanf("%f",&jugadores[i].altura);
    }
    int op=0;
    while(op!=4){
        printf("\n1)Listar jugador\n2)Buscar jugador\n3)Jugador mas alto\n4)Salir\nEscoge una opcion: ");
        scanf("%d",&op);
        fflush(stdin);
        switch(op){
        case 1:
            for(int i=0;i<5;i++){
                printf("\nNombre del jugador: %s\nEdad: %d\nAltura: %.2f",jugadores[i].nombre,jugadores[i].edad,jugadores[i].altura);
            }
        break;
        case 2:
            char nombreJugador[50];
            int encontrado=0;
            printf("\nIngrese el nombre a buscar: ");
            scanf("%s",nombreJugador);  // se puede usar el gets()
            for(int i=0;i<5;i++){
                if(strcmp(jugadores[i].nombre,nombreJugador)==0){ //si es igual a cero, las cadenas son iguales
                    encontrado=1;
                    printf("\nEdad: %d\nAltura: %.2f",jugadores[i].edad,jugadores[i].altura);
                }
            }
            if(encontrado==0){
                printf("\nJugador no encontrado");
            }
        break;
        case 3:
            float AlturaMayor=jugadores[0].altura;
            char nombreAlturaMayor[50];
            int edadAlturaMayor=jugadores[0].edad;
            strcpy(nombreAlturaMayor,jugadores[0].nombre);  //strcpy, copiar una cadena en otra
            for(int i=1;i<5;i++){
                if(jugadores[i].altura>AlturaMayor){
                    strcpy(nombreAlturaMayor,jugadores[i].nombre);
                    edadAlturaMayor=jugadores[i].edad;
                    AlturaMayor=jugadores[i].altura;
                }
            }
            printf("\nJugador con mayor altura\nNombre del jugador: %s\nEdad: %d\nAltura: %.2f",nombreAlturaMayor,edadAlturaMayor,AlturaMayor);
        break;
        case 4:
            printf("\nFinalizando programa");
        break;
        default:
            printf("\nOpcion no valida");
        break;
        }
    }
    return 0;
}