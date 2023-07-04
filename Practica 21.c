#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14159265359 //error con la libreria math.h en otros IDE's funciona sin esta declaracion

//Calculo de motores

int main(){
    struct cilindro{
        float diametro;
        float carrera;
    };
    struct motor{
        int identificador;
        struct cilindro cilindro1;
        int numCilindros;
        float cilindrada;
    };
    struct motor motor1;
    printf("Introduce el identificador: ");
    scanf("%d",&motor1.identificador);
    printf("\nIntroduce el diametro del cilindro(mm): ");
    scanf("%f",&motor1.cilindro1.diametro);
    printf("\nIntroduce la carrera del cilindro(mm): ");
    scanf("%f",&motor1.cilindro1.carrera);
    printf("\nIntroduce el numero de cilindros: ");
    scanf("%d",&motor1.numCilindros);
    motor1.cilindrada=(motor1.numCilindros*(motor1.cilindro1.carrera/10)*(M_PI)*pow((motor1.cilindro1.diametro/10),2))/4;
    printf("\nIdentificador: %d",motor1.identificador);
    printf("\nDiametro(mm): %.2f",motor1.cilindro1.diametro);
    printf("\nCarrera(mm): %.2f",motor1.cilindro1.carrera);
    printf("\nNumero de cilindros: %d",motor1.numCilindros);
    printf("\nCilindrada: %.2f",motor1.cilindrada);
    return 0;
}