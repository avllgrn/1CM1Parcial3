#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int M[50][50],MT[50][50];
    int i,j,m,n,mT,nT;

    printf("Ingresa m ");scanf("%d",&m);
    printf("Ingresa n ");scanf("%d",&n);
    mT = n;
    nT = m;

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            M[i][j] = rand()%100;
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            MT[j][i] = M[i][j];
        }
    }

    printf("\nM\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
    printf("\nMT\n");
    for(i=0; i<mT; i++){
        for(j=0; j<nT; j++){
            printf("%d\t",MT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
