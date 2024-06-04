#include <stdio.h>
#include <stdlib.h>

int main(void){

    int VInt[10];
    float VFloat[10];
    char VChar[10];
    int i;

    printf("VInt\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo con basura (sin inicializarse)
        printf("VInt[%d] = %d\n",i,VInt[i]);

    printf("\n\n");

    printf("VFloat\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo con basura (sin inicializarse)
        printf("VFloat[%d] = %f\n",i,VFloat[i]);

    printf("\n\n");

    printf("VChar\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo con basura (sin inicializarse)
        printf("VChar[%d] = %c\n",i,VChar[i]);

    printf("\n\n");


    printf("\n\n");
    system("pause");
    system("cls");

    printf("Se incializan los vectores...\n\n");

    for(i=0; i<10; i++)//Se inicializa un vector, posicion por posicion
        VInt[i] = 0;

    for(i=0; i<10; i++)//Se inicializa un vector, posicion por posicion
        VFloat[i] = 0.0;

    for(i=0; i<10; i++)//Se inicializa un vector, posicion por posicion
        VChar[i] = '\0';


    printf("\n\n");
    system("pause");
    system("cls");

    printf("VInt\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo sin basura (inicializado)
        printf("VInt[%d] = %d\n",i,VInt[i]);

    printf("\n\n");

    printf("VFloat\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo sin basura (inicializado)
        printf("VFloat[%d] = %f\n",i,VFloat[i]);

    printf("\n\n");

    printf("VChar\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo sin basura (inicializado)
        printf("VChar[%d] = %c\n",i,VChar[i]);

    printf("\n\n");

    return 0;
}
