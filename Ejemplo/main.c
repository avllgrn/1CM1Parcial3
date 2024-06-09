#include <stdio.h>

int esPrimo(int x);

int main(void){
    int n, divisor;
    printf("Ingresa n ");
    scanf("%d",&n);
    divisor = esPrimo(n);
    if(divisor == 1)
        printf("\n\n%d ES primo.\n\n",n);
    else
        printf("\n\n%d NO es primo... Es divisible entre %d.\n\n",n,divisor);
    return 0;
}

int esPrimo(int x){
    int i;

    for(i=2; i<x; i++)
        if(x%i == 0)//Si algun numero divide a x, no es primo,
            return i;//deja de dividirse, y se retorna el numero que lo divide

    return 1;//Si ningun numero dividio a x, es primo y retorna 1
}
