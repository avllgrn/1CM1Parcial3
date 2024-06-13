#include <stdio.h>
#include <stdlib.h>

void generaVectorAleatorio(float X[50], int tam);
void muestraVector(float X[50], int tam);
void ordenaVectorConBurbuja(float X[50], int tam);

int main(void){
    srand(time(NULL));
    float Califs[50];
    int i,n;
    printf("Ingresa n ");
    scanf("%d",&n);

    generaVectorAleatorio(Califs,n);
    printf("\n\nV\n");
    muestraVector(Califs,n);
    printf("\n\n");
    system("pause");
    ordenaVectorConBurbuja(Califs,n);
    printf("\n\nV\n");
    muestraVector(Califs,n);
    printf("\n\n");

    return 0;
}

void generaVectorAleatorio(float X[50], int tam){
    int i;
    for(i=0; i<tam; i++)
        X[i] = rand()%100/10.0;
}
void muestraVector(float X[50], int tam){
    int i;
    for(i=0; i<tam; i++)
        printf("[%d] = %f\n",i,X[i]);
}
void ordenaVectorConBurbuja(float X[50], int tam){
    int i, veces;
    float aux;
    for(veces=1; veces<tam; veces++){
        for(i=0; i<tam-1; i++){
            if(X[i+1] < X[i]){
                aux = X[i+1];
                X[i+1] = X[i];
                X[i] = aux;
            }
        }
    }
}
