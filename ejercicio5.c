//Escribir un programa que lea una matriz de N x N, e indique si la matriz es simétrica o no. Una matriz es simétrica si matriz[i][j] es igual a matriz[j][i], para todo i, j < N.

#include<stdio.h>
#define b 100

void captura(int x, int y, int z[b][b]);
int simetrica(int x, int y);
int simetricaa(int x, int y, int z[b][b], int ss);

int m, n, a[b][b],s;

int main()
{
    printf("¿Cuantos renglones hay en la matriz?: ");
    scanf("%d", &m);
    printf("¿Cuantas columnas hay en la matriz?: ");
    scanf("%d", &n);
    captura(m, n, a);
    s=simetrica(m,n);
    simetricaa(m, n, a, s);
}

void captura(int x, int y, int z[b][b])
{
    int i, j;
       for(i = 0; i < x; i++)
        {
           for(j = 0; j < y; j++)
                {
                  printf("¿Cual es el numero de [%d][%d]?: ", i, j);
                  scanf("%d", &z[j][i]);
                }
        }
}

int simetrica(int x, int y)
{
    int sim;
    if(x=y)
        sim=1;
    else
        sim=0;

    return(sim);
}

int simetricaa(int x, int y, int z[b][b], int ss)
{
    int i, j, v;
    if(ss=1)
    {
       for(i = 0; i < x; i++)
        {
           for(j = 0; j < y; j++)
                {
                  if(z[i][j]!=z[j][i])
                  {
                    printf("La matriz no es simetrica");
                    return(0);
                  }
                }
        }
        printf("La matriz es simetrica");
    }
    else
        printf("La matriz no es simetrica");
}
