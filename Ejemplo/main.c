#include <stdio.h>

void muestraIzquierdaDerechaArribaAbajo(int m, int n, int X[50][50]);
void rellenaIzquierdaDerechaArribaAbajo(int m, int n, int X[50][50]);
void rellenaArribaAbajoIzquierdaDerecha(int m, int n, int X[50][50]);
void rellenaDerechaIzquierdaArribaAbajo(int m, int n, int X[50][50]);
void rellenaArribaAbajoDerechaIzquierda(int m, int n, int X[50][50]);
void rellenaIzquierdaDerechaAbajoArriba(int m, int n, int X[50][50]);
void rellenaAbajoArribaIzquierdaDerecha(int m, int n, int X[50][50]);
void rellenaDerechaIzquierdaAbajoArriba(int m, int n, int X[50][50]);
void rellenaAbajoArribaDerechaIzquierda(int m, int n, int X[50][50]);

int main(void){
    int M[50][50],m,n;
    printf("Ingresa m ");scanf("%d",&m);
    printf("Ingresa n ");scanf("%d",&n);

    rellenaIzquierdaDerechaArribaAbajo(m,n,M);
    muestraIzquierdaDerechaArribaAbajo(m,n,M);

    rellenaArribaAbajoIzquierdaDerecha(m,n,M);
    muestraIzquierdaDerechaArribaAbajo(m,n,M);

    rellenaDerechaIzquierdaArribaAbajo(m,n,M);
    muestraIzquierdaDerechaArribaAbajo(m,n,M);

    rellenaArribaAbajoDerechaIzquierda(m,n,M);
    muestraIzquierdaDerechaArribaAbajo(m,n,M);

    rellenaIzquierdaDerechaAbajoArriba(m,n,M);
    muestraIzquierdaDerechaArribaAbajo(m,n,M);

    rellenaAbajoArribaIzquierdaDerecha(m,n,M);
    muestraIzquierdaDerechaArribaAbajo(m,n,M);

    rellenaDerechaIzquierdaAbajoArriba(m,n,M);
    muestraIzquierdaDerechaArribaAbajo(m,n,M);

    rellenaAbajoArribaDerechaIzquierda(m,n,M);
    muestraIzquierdaDerechaArribaAbajo(m,n,M);

    return 0;
}

void muestraIzquierdaDerechaArribaAbajo(int m, int n, int X[50][50]){//Siempre se muestra, De izquierda a Derecha, De arriba hacia abajo
    int i,j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t",X[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
void rellenaIzquierdaDerechaArribaAbajo(int m, int n, int X[50][50]){
    int i,j,cont=1;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            X[i][j] = cont++;

}
void rellenaArribaAbajoIzquierdaDerecha(int m, int n, int X[50][50]){
    int i,j,cont=1;
    for(j=0; j<n; j++)
        for(i=0; i<m; i++)
            X[i][j] = cont++;
}
void rellenaDerechaIzquierdaArribaAbajo(int m, int n, int X[50][50]){
    int i,j,cont=1;
    for(i=0; i<m; i++)
        for(j=n-1; j>=0; j--)
            X[i][j] = cont++;
}
void rellenaArribaAbajoDerechaIzquierda(int m, int n, int X[50][50]){
    int i,j,cont=1;
    for(j=n-1; j>=0; j--)
        for(i=0; i<m; i++)
            X[i][j] = cont++;
}
void rellenaIzquierdaDerechaAbajoArriba(int m, int n, int X[50][50]){
    int i,j,cont=1;
    for(i=m-1; i>=0; i--)
        for(j=0; j<n; j++)
            X[i][j] = cont++;
}
void rellenaAbajoArribaIzquierdaDerecha(int m, int n, int X[50][50]){
    int i,j,cont=1;
    for(j=0; j<n; j++)
        for(i=m-1; i>=0; i--)
            X[i][j] = cont++;
}
void rellenaDerechaIzquierdaAbajoArriba(int m, int n, int X[50][50]){
    int i,j,cont=1;
    for(i=m-1; i>=0; i--)
        for(j=n-1; j>=0; j--)
            X[i][j] = cont++;
}
void rellenaAbajoArribaDerechaIzquierda(int m, int n, int X[50][50]){
    int i,j,cont=1;
    for(j=n-1; j>=0; j--)
        for(i=m-1; i>=0; i--)
            X[i][j] = cont++;
}
