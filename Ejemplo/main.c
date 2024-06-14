#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int M[50][50];
    int i,j,m,n;

    printf("Ingresa m ");scanf("%d",&m);
    printf("Ingresa n ");scanf("%d",&n);

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            M[i][j] = rand()%100;
        }
    }

    printf("\nM\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
