#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int V[50];
    int i,n;
    printf("Ingresa n ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
        V[i] = rand()%100;

    for(i=0; i<n; i++)
        printf("V[%d] = %d\n",i,V[i]);

    return 0;
}
