#include <stdio.h>

int esPrimo(int x);

int main(void){
    int V[50];
    int i, j, n;
    printf("Ingresa n ");
    scanf("%d",&n);

    for(i=0, j=1; i<n; j++) //Se llenaran n posiciones con primos desde 1 (j)
        if(esPrimo(j)==1){
            V[i] = j;
            i++;
        }

    for(i=0; i<n; i++)
        printf("V[%d] = %d\n",i,V[i]);

    return 0;
}

int esPrimo(int x){
    int i;

    for(i=2; i<x; i++)
        if(x%i == 0)//Si algun numero divide a x, no es primo,
            return i;//deja de dividirse, y se retorna el numero que lo divide

    return 1;//Si ningun numero dividio a x, es primo y retorna 1
}
