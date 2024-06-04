#include <stdio.h>
#include <stdlib.h>

int main(void){

    int VInt[10];
    float VFloat[10];
    int i;

    printf("VInt\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo con basura (sin inicializarse)
        printf("VInt[%d] = %d\n",i,VInt[i]);

    printf("\n\n");

    printf("VFloat\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo con basura (sin inicializarse)
        printf("VFloat[%d] = %f\n",i,VFloat[i]);

    printf("\n\n");


    printf("\n\n");
    system("pause");
    system("cls");

    printf("Ingresa datos enteros\n\n");

    for(i=0; i<10; i++){//Se pide un vector, posicion por posicion
        printf("VInt[%d] ",i);
        scanf("%d",&VInt[i]);
    }

    printf("Ingresa datos flotantes\n\n");

    for(i=0; i<10; i++){//Se pide un vector, posicion por posicion
        printf("VFloat[%d] ",i);
        scanf("%f",&VFloat[i]);
    }


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

    return 0;
}
