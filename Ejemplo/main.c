#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    float Califs[50];
    int i,n;
    printf("Ingresa n ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
        Califs[i] = (rand()%101)/10.0;

    for(i=0; i<n; i++)
        printf("Califs[%d] = %f\n",i,Califs[i]);

    return 0;
}
