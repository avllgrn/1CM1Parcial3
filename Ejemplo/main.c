#include <stdio.h>

int main(void){
    float M[50][50];

    M[1][2] = 1.2;

    printf("Ingresa un valor para M[3][4] ");
    scanf("%f",&M[3][4]);

    M[5][6] = M[1][2] * M[3][4];

    printf("\nM[1][2] = %f\n",M[1][2]);
    printf("\nM[3][4] = %f\n",M[3][4]);
    printf("\nM[5][6] = M[1][2] * M[3][4] = %f\n",M[5][6]);

    return 0;
}
