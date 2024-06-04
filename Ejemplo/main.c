#include <stdio.h>
#include <stdlib.h>

int main(void){

    int VInt[10];
    float VFloat[10];
    char VChar[10];
    int i;

    printf("VInt\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo con basura
        printf("%d\n", VInt[i]);

    printf("\n\n");

    printf("VFloat\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo con basura
        printf("%f\n", VFloat[i]);

    printf("\n\n");

    printf("VChar\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo con basura
        printf("%c\n", VChar[i]);

    printf("\n\n");
    system("pause");
    system("cls");

    printf("VInt\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo con basura
        printf("VInt[%d] = %d\n",i,VInt[i]);

    printf("\n\n");

    printf("VFloat\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo con basura
        printf("VFloat[%d] = %f\n",i,VFloat[i]);

    printf("\n\n");

    printf("VChar\n\n");
    for(i=0; i<10; i++)//Se muestra arreglo con basura
        printf("VChar[%d] = %c\n",i,VChar[i]);

    printf("\n\n");

    return 0;
}
