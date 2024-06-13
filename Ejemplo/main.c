#include <stdio.h>
#include <stdlib.h>

void leeVector(float X[50], int tam);
void muestraVector(float X[50], int tam);

int main(void){
    float V[50];
    int n;

    printf("Dame n ");scanf("%d",&n);

    leeVector(V,n);
    system("pause");
    system("cls");
    muestraVector(V,n);

    return 0;
}

void leeVector(float X[50], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("Ingresa [%d] ",i);
        scanf("%f",&X[i]);
    }
}
void muestraVector(float X[50], int tam){
    int i;
    for(i=0; i<tam; i++)
        printf("[%d] = %f\n",i,X[i]);
}
