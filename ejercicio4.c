//Escribir un programa que lea una arreglo bidimensional de M x N en una función y en otra función encuentre el elemento mayor de la matriz indicando en que posición (renglon - columna) lo encontró.

#include<stdio.h>
#define b 100

void captura(int x, int y, int z[b][b]);
void mayor(int x, int y, int z[b][b]);

int m, n, a[b][b];

int main()
{
    printf("¿Cuantos renglones hay en la matriz?: ");
    scanf("%d", &m);
    printf("¿Cuantas columnas hay en la matriz?: ");
    scanf("%d", &n);
    captura(m, n, a);
    mayor(m, n, a);
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

void mayor(int x, int y, int z[b][b])
{
    int i, j, max=0, c, d;
       for(i = 0; i < x; i++)
        {
           for(j = 0; j < y; j++)
                {
                  if(z[i][j]>max)
                    {
                      max = z[i][j];
                      c=i;
                      d=j;
                    }
                }
        }
        printf("El numero mayor es %d y se encuentra en la posicion [%d][%d]", max,c,d);
}
