//Escribir un programa que lea una arreglo bidimensional de M x N, e imprima su transpuesta.

#include<stdio.h>
#define b 100

void captura(int x, int y, int z[b][b]);
void matriz(int x, int y, int z[b][b]);

int m, n, a[b][b];

int main()
{
    printf("¿Cuantos renglones hay en la matriz?: ");
    scanf("%d", &m);
    printf("¿Cuantas columnas hay en la matriz?: ");
    scanf("%d", &n);
    captura(m, n, a);
    matriz(m, n, a);
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

void matriz(int x, int y, int z[b][b])
{
     int i,j, c[b][b];
       for(i = 0; i < y; i++)
       {
          printf("\n");
          for(j = 0; j < x; j++)
            {
                  printf("%d ", z[i][j]);
            }
       }
}
