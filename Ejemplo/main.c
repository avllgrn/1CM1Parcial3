#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int M[50][50];
    int i,j,n;

    printf("Ingresa n ");scanf("%d",&n);

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j)
                M[i][j] = 1;
            else
                M[i][j] = 0;
        }
    }

    printf("\nM\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
