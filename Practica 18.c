#include <stdio.h>
#include <stdlib.h>

//Multiplicar vector por un valor (con punteros)

void multiplicaVector(int *,int,int);

int main(){
    int vector[10]={1,2,3,4,5,6,7,8,9,10};
    multiplicaVector(&vector[0],10,3);
    for(int i=0;i<10;i++){
        printf("%d/t",vector[i]);
    }
    return 0;
}

void multiplicaVector(int *vector,int numElem,int numero){
    for(int i=0;i<numElem;i++){
        *(vector+i)*=numero;
    }
}