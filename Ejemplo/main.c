#include <stdio.h>

int fibonacci(int n);

int main(void){
    int V[50];
    int n;
    printf("Ingresa n ");
    scanf("%d",&n);

    printf("fibonacci(%d) = %d",n,fibonacci(n));

    return 0;
}

int fibonacci(int n){
    int a, b, c, i;
    if(n==0||n==1)
        return n;
    else{
        a=0;
        b=1;
        for(i=2; i<=n; i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}
