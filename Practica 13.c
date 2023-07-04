#include <stdio.h>
#include <stdlib.h>

//Habitaciones de un hotel

int main(){
    int info[3][4]={{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int sumaTempBaja=0;
    int sumaTempMedia=0;
    int sumaTempAlta=0;
    for(int i=0;i<3;i++){
        for(int j=1;j<4;j++){
            if(j==1){
                sumaTempBaja+=info[i][j];
            }else if(j==2){
                sumaTempMedia+=info[i][j];
            }else if(j==3){
                sumaTempAlta+=info[i][j];
            }
        }
    }
    float promedioTempBaja=sumaTempBaja/3;
    float promedioTempMedia=sumaTempMedia/3;
    float promedioTempAlta=sumaTempAlta/3;
    printf("\nPromedio temporada baja: %.2f\nPromedio temporada media: %.2f\nPromedio temporada alta: %.2f",promedioTempBaja,promedioTempMedia,promedioTempAlta);
    return 0;
}