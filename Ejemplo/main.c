#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int esPar(int x);
int factorial(int x);
float gradosARadianes(float grados);
void sumaAcumulada1(void);
void sumaAcumulada2(void);
void sumaAcumulada3(void);
void sumaAcumulada4(void);
void sumaAcumulada5(void);
void sumaAcumulada6(void);
void sumaAcumulada7(void);
void sumaAcumulada8(void);
void sumaAcumulada9(void);

int main(void){

    sumaAcumulada1();
    sumaAcumulada2();
    sumaAcumulada3();
    sumaAcumulada4();
    sumaAcumulada5();
    sumaAcumulada6();
    sumaAcumulada7();
    sumaAcumulada8();
    sumaAcumulada9();

    return 0;
}

int esPar(int x){
    return x%2 == 0;
}
int factorial(int x){
    int i,f;
    for(i=1,f=1; i<=x; i++)
        f *= i;
    return f;
}
float gradosARadianes(float grados){
    return grados*M_PI/180;
}
void sumaAcumulada1(void){
    int i,n;
    float s;
    system("cls");
    printf("Calculo de 0+1+2+3+4+...+n\n\n");
    printf("Ingresa n ");
    scanf("%d",&n);
    printf("\n\n");

    for(i=0, s=0; i<=n; i++){
        printf("i=%d\t| s=%f\n",i,s);
        s += i;
    }
    printf("\n\ns = %f\n\n",s);
    system("pause");
    system("cls");
}
void sumaAcumulada2(void){
    int i,n;
    float s;
    system("cls");
    printf("Calculo de 0+2+4+6+8+...+n\n\n");
    printf("Ingresa n ");
    scanf("%d",&n);
    printf("\n\n");

    for(i=0, s=0; i<=n; i+=2){
        printf("i=%d\t| s=%f\n",i,s);
        s += i;
    }
    printf("\n\ns = %f\n\n",s);
    system("pause");
    system("cls");
}
void sumaAcumulada3(void){
    int i,n;
    float s;
    system("cls");
    printf("Calculo de 0-1+2-3+4-...+n\n\n");
    printf("Ingresa n ");
    scanf("%d",&n);
    printf("\n\n");

    for(i=0, s=0; i<=n; i++){
        printf("i=%d\t| s=%f\n",i,s);
        if(esPar(i))
            s += i;
        else
            s -= i;
    }
    printf("\n\ns = %f\n\n",s);
    system("pause");
    system("cls");
}
void sumaAcumulada4(void){
    int i,n;
    float s;
    system("cls");
    printf("Calculo de 0+1-2+3-4+...-n\n\n");
    printf("Ingresa n ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0, s=0; i<=n; i++){
        printf("i=%d\t| s=%f\n",i,s);
        if(!esPar(i))
            s += i;
        else
            s -= i;
    }
    printf("\n\ns = %f\n\n",s);
    system("pause");
    system("cls");
}
void sumaAcumulada5(void){
    int i,n;
    float s,x;
    system("cls");
    printf("Calculo de x^0 + x^1 + x^2 +...+ x^n\n\n");
    printf("Ingresa x ");
    scanf("%f",&x);
    printf("Ingresa n ");
    scanf("%d",&n);
    printf("\n\n");

    for(i=0, s=0; i<n; i++){
        printf("i=%d\t| s=%f\n",i,s);
        s += pow(x,i);
    }
    printf("\n\ns = %f\n\n",s);
    system("pause");
    system("cls");
}
void sumaAcumulada6(void){
    int i,n;
    float s,x;
    system("cls");
    printf("Calculo de (x^1)/1 + (x^2)/2 + (x^3)/3 +...+ (x^n)/n\n\n");
    printf("Ingresa x ");
    scanf("%f",&x);
    printf("Ingresa n ");
    scanf("%d",&n);
    printf("\n\n");

    for(i=1, s=0; i<n; i++){
        printf("i=%d\t| s=%f\n",i,s);
        s += pow(x,i)/i;
    }
    printf("\n\ns = %f\n\n",s);
    system("pause");
    system("cls");
}
void sumaAcumulada7(void){
    int i,n;
    float s,x;
    system("cls");
    printf("Calculo de e^x\n\n");
    printf("Ingresa x ");
    scanf("%f",&x);
    printf("Ingresa n ");
    scanf("%d",&n);
    printf("\n\n");

    for(i=0, s=0; i<n; i++){
        printf("i=%d\t| s=%f\n",i,s);
        s += pow(x,i)/factorial(i);
    }
    printf("\n\ne^%f = %f\n\n",x,s);
    system("pause");
    system("cls");
}
void sumaAcumulada8(void){
    int i,j,n;
    float s,x,xRad;
    system("cls");
    printf("Calculo de cos(x)\n\n");
    printf("Ingresa x ");
    scanf("%f",&x);
    printf("Ingresa n ");
    scanf("%d",&n);
    xRad = gradosARadianes(x);
    printf("\n\n");

    for(i=0, j=0, s=0; i<=n; i++, j+=2){
        printf("i=%d\tj=%d\t| s=%f\n",i,j,s);
        if(esPar(i))
            s += pow(xRad,j)/factorial(j);
        else
            s -= pow(xRad,j)/factorial(j);
    }
    printf("\n\ncos(%f) = %f\n\n",x,s);
    system("pause");
    system("cls");
}
void sumaAcumulada9(void){
    int i,j,n;
    float s,x,xRad;
    system("cls");
    printf("Calculo de sen(x)\n\n");
    printf("Ingresa x ");
    scanf("%f",&x);
    printf("Ingresa n ");
    scanf("%d",&n);
    xRad = gradosARadianes(x);
    printf("\n\n");

    for(i=0, j=1, s=0; i<=n; i++, j+=2){
        printf("i=%d\tj=%d\t| s=%f\n",i,j,s);
        if(esPar(i))
            s += pow(xRad,j)/factorial(j);
        else
            s -= pow(xRad,j)/factorial(j);
    }
    printf("\n\nsen(%f) = %f\n\n",x,s);
    system("pause");
    system("cls");
}
