#include <stdio.h>

int main(void){
    float M[50][50];
    int i,j,m,n;

    printf("Ingresa m ");scanf("%d",&m);
    printf("Ingresa n ");scanf("%d",&n);

    printf("M\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%f\t",M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
