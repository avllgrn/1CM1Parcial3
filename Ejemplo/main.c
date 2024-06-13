#include <stdio.h>
#include <stdlib.h>

void generaVectorAleatorio(float X[50], int tam);
void muestraVector(float X[50], int tam);
float retornaPromedioEn(float X[50], int tam);
float retornaMenorEn(float X[50], int tam);
float retornaMayorEn(float X[50], int tam);
int retornaPosicionDeMenorEn(float X[50], int tam);
int retornaPosicionDeMayorEn(float X[50], int tam);
int retornaCuantosAprobaron(float X[50], int tam);
int retornaCuantosReprobaron(float X[50], int tam);

int main(void){
    srand(time(NULL));
    float Califs[50];
    int i,n;
    printf("Ingresa n ");
    scanf("%d",&n);

    generaVectorAleatorio(Califs,n);
    system("cls");
    muestraVector(Califs,n);
    printf("\n\n");
    printf("El valor promedio es %f\n",retornaPromedioEn(Califs,n));
    printf("El menor valor es %f\n",retornaMenorEn(Califs,n));
    printf("El menor valor esta en [%d]\n",retornaPosicionDeMenorEn(Califs,n));
    printf("El mayor valor es %f\n",retornaMayorEn(Califs,n));
    printf("El mayor valor esta en [%d]\n",retornaPosicionDeMayorEn(Califs,n));
    printf("Aprobaron %d\n",retornaCuantosAprobaron(Califs,n));
    printf("Reprobaron %d\n",retornaCuantosReprobaron(Califs,n));

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
float retornaPromedioEn(float X[50], int tam){
    int i;
    float suma,promedio;
    suma= 0.0;
    for(i=0; i<tam; i++)
        suma += X[i];
    promedio = suma / tam;
    return promedio;
}
float retornaMenorEn(float X[50], int tam){
    int i;
    float menor;
    menor = X[0];
    for(i=0; i<tam; i++)
        if(X[i] < menor)
            menor = X[i];
    return menor;
}
float retornaMayorEn(float X[50], int tam){
    int i;
    float mayor;
    mayor = X[0];
    for(i=0; i<tam; i++)
        if(X[i] > mayor)
            mayor = X[i];
    return mayor;
}
int retornaPosicionDeMenorEn(float X[50], int tam){
    int i,posicionMenor;
    float menor;
    menor = X[0];
    posicionMenor = 0;
    for(i=0; i<tam; i++)
        if(X[i] < menor){
            menor = X[i];
            posicionMenor = i;
        }
    return posicionMenor;
}
int retornaPosicionDeMayorEn(float X[50], int tam){
    int i,posicionMayor;
    float mayor;
    mayor = X[0];
    posicionMayor = 0;
    for(i=0; i<tam; i++)
        if(X[i] > mayor){
            mayor = X[i];
            posicionMayor = i;
        }
    return posicionMayor;
}
int retornaCuantosAprobaron(float X[50], int tam){
    int i,aprobados;
    aprobados = 0;
    for(i=0; i<tam; i++)
        if(X[i] >= 6)
            aprobados++;
    return aprobados;
}
int retornaCuantosReprobaron(float X[50], int tam){
    int i,reprobados;
    reprobados = 0;
    for(i=0; i<tam; i++)
        if(X[i] < 6)
            reprobados++;
    return reprobados;
}
