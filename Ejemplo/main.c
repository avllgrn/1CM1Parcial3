#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void contadorAscendente(int ini, int fin, int paso);
void contadorDescendente(int ini, int fin, int paso);

int main(void){

    int ini,fin,paso;

    printf("Ingresa ini ");scanf("%d",&ini);
    printf("Ingresa fin ");scanf("%d",&fin);
    printf("Ingresa paso ");scanf("%d",&paso);
    paso = abs(paso);

    if(ini <= fin){
        contadorAscendente(ini,fin,paso);
    }
    else{
        contadorDescendente(ini,fin,paso);
    }

    return 0;
}

void contadorAscendente(int ini, int fin, int paso){
    int i;
    paso = abs(paso);
    if(ini <= fin && paso>0){

        i=ini;
        while(i <= fin){
            printf("%d ",i);
            i = i+paso;
        }

    }
}
void contadorDescendente(int ini, int fin, int paso){
    int i;
    paso = abs(paso);
    if(ini >= fin && paso>0){

        i=ini;
        while(i >= fin){
            printf("%d ",i);
            i = i-paso;
        }

    }
}
