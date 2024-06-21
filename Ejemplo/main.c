#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rellenaCalificaciones(int m, int n, float X[50][50]);
void calculaPromedios(int m, int n, float X[50][50]);
void muestraCalificaciones(int m, int n, float X[50][50]);
float calificacionParcialMenor(int m, int n, float X[50][50]);
int alumnoCalificacionParcialMenor(int m, int n, float X[50][50]);
int examenCalificacionParcialMenor(int m, int n, float X[50][50]);
float calificacionParcialMayor(int m, int n, float X[50][50]);
int alumnoCalificacionParcialMayor(int m, int n, float X[50][50]);
int examenCalificacionParcialMayor(int m, int n, float X[50][50]);
int calificacionesParcialesReprobatorias(int m, int n, float X[50][50]);
int calificacionesParcialesAprobatorias(int m, int n, float X[50][50]);
float sumaDeCalificacionesParciales(int m, int n, float X[50][50]);
float promedioDeCalificacionesParciales(int m, int n, float X[50][50]);
float promedioDeCalificacionesFinales(int m, int n, float X[50][50]);
int reprobadosFinales(int m, int n, float X[50][50]);
int aprobadosFinales(int m, int n, float X[50][50]);

int main(void){
    srand(time(NULL));
    float Calificaciones[50][50];
    float menor, mayor, s, promedioParciales,promedioGrupal;
    int alumnoMayor, alumnoMenor;
    int parcialMayor, parcialMenor;
    int aprobadosParciales, reprobadosParciales;
    int aprobadosSemestre, reprobadosSemestre;
    int m,n;

    printf("Alumnos? ");scanf("%d",&m);
    printf("Parciales? ");scanf("%d",&n);

    rellenaCalificaciones(m,n,Calificaciones);
    calculaPromedios(m,n,Calificaciones);
    menor = calificacionParcialMenor(m,n,Calificaciones);
    alumnoMenor = alumnoCalificacionParcialMenor(m,n,Calificaciones);
    parcialMenor = examenCalificacionParcialMenor(m,n,Calificaciones);
    mayor = calificacionParcialMayor(m,n,Calificaciones);
    alumnoMayor = alumnoCalificacionParcialMayor(m,n,Calificaciones);
    parcialMayor = examenCalificacionParcialMayor(m,n,Calificaciones);
    reprobadosParciales=calificacionesParcialesReprobatorias(m,n,Calificaciones);
    aprobadosParciales=calificacionesParcialesAprobatorias(m,n,Calificaciones);
    s = sumaDeCalificacionesParciales(m,n,Calificaciones);
    promedioParciales = promedioDeCalificacionesParciales(m,n,Calificaciones);
    promedioGrupal = promedioDeCalificacionesFinales(m,n,Calificaciones);
    reprobadosSemestre = reprobadosFinales(m,n,Calificaciones);
    aprobadosSemestre = aprobadosFinales(m,n,Calificaciones);

    muestraCalificaciones(m,n,Calificaciones);
    printf("Menor de semestre es %f ",menor);
    printf("del alumno %d en el parcial %d\n",alumnoMenor+1,parcialMenor+1);
    printf("Mayor de semestre es %f",mayor);
    printf("del alumno %d en el parcial %d\n",alumnoMayor+1,parcialMayor+1);
    printf("Hay %d calificaciones parciales reprobatorias\n",reprobadosParciales);
    printf("Hay %d calificaciones parciales aprobatorias\n",aprobadosParciales);
    printf("La suma de calificaciones parciales es %f\n",s);
    printf("El promedio de calificaciones parciales es %f\n",promedioParciales);
    printf("Aprobaron %d alumnos\n",aprobadosSemestre);
    printf("Reprobaron %d alumnos\n",reprobadosSemestre);
    printf("Promedio final del grupo %f\n",promedioGrupal);

    return 0;
}

void rellenaCalificaciones(int m, int n, float X[50][50]){
    int i,j;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            X[i][j] = rand()%1000 / 100.0;
}
void calculaPromedios(int m, int n, float X[50][50]){
    int i,j;
    for(i=0; i<m; i++){
        X[i][n] = 0.0;
        for(j=0; j<n; j++){
            X[i][n] += X[i][j];
        }
        X[i][n] /= n;
    }
}
void muestraCalificaciones(int m, int n, float X[50][50]){
    int i,j;
    printf("\n\n");
    printf("Alumno\t");
    for(j=0; j<n; j++)
        printf("P%d\t\t",j+1);
    printf("Promedio\n");
    for(i=0; i<m; i++){
        printf("%d\t",i+1);
        for(j=0; j<=n; j++){
            printf("%f\t",X[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
float calificacionParcialMenor(int m, int n, float X[50][50]){
    int i,j,alumnoMenor,parcialMenor;
    float menor;
    menor = X[0][0];
    alumnoMenor = 0;
    parcialMenor = 0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(X[i][j]<menor){
                menor = X[i][j];
                alumnoMenor = i;
                parcialMenor = j;
            }
    return menor;
}
int alumnoCalificacionParcialMenor(int m, int n, float X[50][50]){
    int i,j,alumnoMenor,parcialMenor;
    float menor;
    menor = X[0][0];
    alumnoMenor = 0;
    parcialMenor = 0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(X[i][j]<menor){
                menor = X[i][j];
                alumnoMenor = i;
                parcialMenor = j;
            }
    return alumnoMenor;
}
int examenCalificacionParcialMenor(int m, int n, float X[50][50]){
    int i,j,alumnoMenor,parcialMenor;
    float menor;
    menor = X[0][0];
    alumnoMenor = 0;
    parcialMenor = 0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(X[i][j]<menor){
                menor = X[i][j];
                alumnoMenor = i;
                parcialMenor = j;
            }
    return parcialMenor;
}
float calificacionParcialMayor(int m, int n, float X[50][50]){
    int i,j,alumnoMayor,parcialMayor;
    float mayor;
    mayor = X[0][0];
    alumnoMayor = 0;
    parcialMayor = 0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(X[i][j]>mayor){
                mayor = X[i][j];
                alumnoMayor = i;
                parcialMayor = j;
            }
    return mayor;
}
int alumnoCalificacionParcialMayor(int m, int n, float X[50][50]){
    int i,j,alumnoMayor,parcialMayor;
    float mayor;
    mayor = X[0][0];
    alumnoMayor = 0;
    parcialMayor = 0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(X[i][j]>mayor){
                mayor = X[i][j];
                alumnoMayor = i;
                parcialMayor = j;
            }
    return alumnoMayor;
}
int examenCalificacionParcialMayor(int m, int n, float X[50][50]){
    int i,j,alumnoMayor,parcialMayor;
    float mayor;
    mayor = X[0][0];
    alumnoMayor = 0;
    parcialMayor = 0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(X[i][j]>mayor){
                mayor = X[i][j];
                alumnoMayor = i;
                parcialMayor = j;
            }
    return parcialMayor;
}
int calificacionesParcialesReprobatorias(int m, int n, float X[50][50]){
    int i,j,reprobados=0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(X[i][j]<6)
                reprobados++;
    return reprobados;
}
int calificacionesParcialesAprobatorias(int m, int n, float X[50][50]){
    int i,j,aprobados=0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(X[i][j]>=6)
                aprobados++;
    return aprobados;
}
float sumaDeCalificacionesParciales(int m, int n, float X[50][50]){
    int i,j;
    float suma=0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            suma += X[i][j];
    return suma;
}
float promedioDeCalificacionesParciales(int m, int n, float X[50][50]){
    int i,j;
    float promedio=0;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            promedio += X[i][j];
    return promedio/(m*n);
}
float promedioDeCalificacionesFinales(int m, int n, float X[50][50]){
    int i,j;
    float promedio=0;
    for(i=0; i<m; i++)
        promedio += X[i][n];
    return promedio/m;
}
int reprobadosFinales(int m, int n, float X[50][50]){
    int i,j,reprobados=0;
    for(i=0; i<m; i++)
        if(X[i][n]<6)
            reprobados++;
    return reprobados;
}
int aprobadosFinales(int m, int n, float X[50][50]){
    int i,j,aprobados=0;
    for(i=0; i<m; i++)
        if(X[i][n]>=6)
            aprobados++;
    return aprobados;
}
