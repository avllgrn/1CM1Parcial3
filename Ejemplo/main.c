#include <stdio.h>
#include <stdlib.h>

int main(void){

    int VInt[10];
    float VFloat[10];
    char VChar[10];

    VChar[3] = '@';
    printf("Ingresa un caracter ");
    scanf("%c",&VChar[9]);
    printf("VChar[%d] = %c\nVChar[%d] = %c\n\n",3,VChar[3],9,VChar[9]);

    VInt[3] = 5;
    printf("Ingresa un entero ");
    scanf("%d",&VInt[9]);
    VInt[6] = VInt[3] + VInt[9];

    printf("%d + %d = %d\n\n",VInt[3], VInt[9], VInt[6]);


    VFloat[3] = 3.4;

    printf("Ingresa un float ");
    scanf("%f",&VFloat[9]);

    VFloat[6] = VFloat[3] + VFloat[9];

    printf("%f + %f = %f\n\n",VFloat[3], VFloat[9], VFloat[6]);


    return 0;
}
