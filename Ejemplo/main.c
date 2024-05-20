#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    int i;
    int ini,fin,paso;

    printf("Ingresa ini ");scanf("%d",&ini);
    printf("Ingresa fin ");scanf("%d",&fin);
    printf("Ingresa paso ");scanf("%d",&paso);
    paso = abs(paso);

    if(ini <= fin){

        i=ini;
        while(i <= fin){
            printf("%d ",i);
            i = i+paso;
        }

    }
    else{

        i=ini;
        while(i >= fin){
            printf("%d ",i);
            i = i-paso;
        }

    }

    return 0;
}
