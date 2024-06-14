#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int A[50][50],B[50][50],C[50][50],D[50][50];
    int i,j,mA,nA,mB,nB,mC,nC,mD,nD;

    printf("Ingresa mA ");scanf("%d",&mA);
    printf("Ingresa nA ");scanf("%d",&nA);
    printf("Ingresa mB ");scanf("%d",&mB);
    printf("Ingresa nB ");scanf("%d",&nB);

    if(mA!=mB || nA!=nB)
        printf("Error!!! NO puede ni sumarse ni restarse...\n\n");
    else{
        for(i=0; i<mA; i++){
            for(j=0; j<nA; j++){
                A[i][j] = rand()%10;
            }
        }

        for(i=0; i<mB; i++){
            for(j=0; j<nB; j++){
                B[i][j] = rand()%10;
            }
        }

        mC=mA;
        nC=nB;
        for(i=0; i<mC; i++){
            for(j=0; j<nC; j++){
                C[i][j] = A[i][j]+B[i][j];
            }
        }
        mD=mA;
        nD=nB;
        for(i=0; i<mD; i++){
            for(j=0; j<nD; j++){
                D[i][j] = A[i][j]-B[i][j];
            }
        }

        printf("\nA\n");
        for(i=0; i<mA; i++){
            for(j=0; j<nA; j++){
                printf("%d\t",A[i][j]);
            }
            printf("\n");
        }
        printf("\nB\n");
        for(i=0; i<mB; i++){
            for(j=0; j<nB; j++){
                printf("%d\t",B[i][j]);
            }
            printf("\n");
        }
        printf("\nC = A+B\n");
        for(i=0; i<mC; i++){
            for(j=0; j<nC; j++){
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
        printf("\nD = A-B\n");
        for(i=0; i<mD; i++){
            for(j=0; j<nD; j++){
                printf("%d\t",D[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
