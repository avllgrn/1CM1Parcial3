#include <stdio.h>

int main(void){
    int i,j,m,n;

    printf("Ingresa m ");scanf("%d",&m);
    printf("Ingresa n ");scanf("%d",&n);

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("i=%d\tj=%d\n",i,j);
        }
    }

    return 0;
}
