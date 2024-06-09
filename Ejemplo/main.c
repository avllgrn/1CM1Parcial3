#include <stdio.h>

int fibonacci(int n);

int main(void){
    int i,n;
    printf("Ingresa n ");
    scanf("%d",&n);

    printf("\n\nx\t| fibonacci(x)\n\n");
    for(i=0; i<=n; i++)
        printf("%d\t| %d\n",i,fibonacci(i));

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
