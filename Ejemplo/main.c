#include <stdio.h>

void muestraMatriz(int m, int n, int X[50][50]);
void inicializaMatriz(int m, int n, int X[50][50]);
void diagonalPrincipalUnos(int n, int X[50][50]);
void diagonalSecundariaUnos(int n, int X[50][50]);

int main(void){
    int M[50][50],n;

    printf("Ingresa n ");scanf("%d",&n);

    inicializaMatriz(n,n,M);
    muestraMatriz(n,n,M);

    diagonalPrincipalUnos(n,M);
    muestraMatriz(n,n,M);

    inicializaMatriz(n,n,M);
    muestraMatriz(n,n,M);

    diagonalSecundariaUnos(n,M);
    muestraMatriz(n,n,M);

    return 0;
}

//Siempre se muestra, De izquierda a Derecha, De arriba hacia abajo
void muestraMatriz(int m, int n, int X[50][50]){
    int i,j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t",X[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
void inicializaMatriz(int m, int n, int X[50][50]){
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            X[i][j] = 0;
}
void diagonalPrincipalUnos(int n, int X[50][50]){
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(i == j)
                X[i][j] = 1;
}
void diagonalSecundariaUnos(int n, int X[50][50]){
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(i == n-j-1)
                X[i][j] = 1;
}
