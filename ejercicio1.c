//Escriba un programa en C que dada una matriz de flotantes de M renglones x N columnas, calcule los promedios de los valores de cada columna de la matriz.

// -Capture los datos por renglón.
// -Imprima los promedios de cada columna. Ejemplo: Promedio Columna 1: 16.7

#include<stdio.h>
#define b 100

void captura(int x, int y, int z[b][b]);
void promedio(int x, int y, int z[b][b]);

int m, n;
int a[b][b];

int main()
{
    printf("¿Cuantos renglones hay en la matriz?: ");
    scanf("%d", &m);
    printf("¿Cuantas columnas hay en la matriz?: ");
    scanf("%d", &n);
    captura(m, n, a);
    promedio(m, n, a);
}

void captura(int x, int y, int z[b][b])
{
    int i, j;
       for(i = 0; i < x; i++)
        {
           for(j=0; j<y; j++)
                {
                  printf("¿Cual es el numero de [%d][%d]?: ", i, j);
                  scanf("%d", &z[i][j]);
                }
        }
}

void promedio(int x, int y, int z[b][b])
{
    int i,j,sum;
    float prom;
       for(i=0; i<y; i++)
       {
           sum=0;
           prom=0;
           for(j=0; j<x; j++)
           {
                  sum+=z[i][j];
           }
           prom=sum/x;
           printf("Promedio Columna %d: %f\n", i,prom);
       }

}
