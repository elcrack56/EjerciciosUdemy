#include <stdio.h>
#include <stdlib.h>

//Entradas de un museo

int main(){
    struct horaEntrada{
        int hora;
        int minutos;
    };
    struct entrada{
        struct horaEntrada hora1;
        int asistentes;
        float precio;
    };
    struct entrada e1;
    char continuar='s';
    while(continuar=='s'){
        printf("Introduce la hora de entrada: ");
        scanf("%d",&e1.hora1.hora);
        printf("\nIntroduce el minuto de entrada: ");
        scanf("%d",&e1.hora1.minutos);
        printf("\nIntroduce el numero de asistentes: ");
        scanf("%d",&e1.asistentes);
        int total=0;
        for(int i=0;i<e1.asistentes;i++){
            int edad;
            printf("\nIntroduce la edad del asistente %d: ",i+1);
            scanf("%d",&edad);
            if(edad<6){
                total+=0;
            }else if(edad>=6 && edad<=15){
                total+=5;
            }else if(edad>=16 && edad<=26 || edad>65){
                total+=8;
            }else{
                total+=10;
            }
        }
        if(e1.asistentes>=5){
            e1.precio=total-total*0.1;
        }else{
            e1.precio=total;
        }
        printf("\nHora de entrada del grupo: %d:%d",e1.hora1.hora,e1.hora1.minutos);
        printf("\nPrecio de las entradas: %.2f",e1.precio);
        printf("\n¿Desea continuar con otro grupo (S/N): ");
        scanf("%c",&continuar);
        while(continuar=='\n'){
            scanf("%c",&continuar);
        }
    }
    printf("\nHasta la proxima...");
    return 0;
}