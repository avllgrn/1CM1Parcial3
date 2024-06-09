#include <stdio.h>

void serieFibonacci(int n);

int main(void){
    int V[50];
    int n;
    printf("Ingresa n ");
    scanf("%d",&n);

    serieFibonacci(n);

    return 0;
}

void serieFibonacci(int n){
    int a, b, c, i;
    a=0;
    b=1;
    if(n==0)
        printf("%d ",a);
    else{
        printf("%d %d ",a,b);
        for(i=2; i<=n; i++){
            c=a+b;
            a=b;
            b=c;
            printf("%d ",c);
        }
    }
}
