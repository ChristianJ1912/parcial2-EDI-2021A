//Escribir un programa en C que genere una matriz de N x N y la llene con 0 excepto la diagonal principal que deberá tener 1.

#include<stdio.h>
#define b 100

void llenauno(int x, int z[b][b]);
void llenacero(int x, int z[b][b]);
void matriz(int x, int z[b][b]);

int n;
int a[b][b];

int main()
{
    printf("Escoja un numero-este seran su numero de columna y renglones para su matriz: ");
    scanf("%d", &n);
    llenauno(n, a);
    llenacero(n, a);
    matriz(n, a);
}

void llenauno(int x, int z[b][b])
{
    int i;
       for(i = 0; i < x; i++)
        {
                  z[i][i]=1;
        }
}

void llenacero(int x, int z[b][b])
{
     int i,j;
       for(i = 0; i < x; i++)
          for(j = 0; j < x; j++)
            {
                if(i != j)
                  z[i][j]=0;
            }
}

void matriz(int x, int z[b][b])
{
     int i,j;
       for(i = 0; i < x; i++)
       {
          printf("\n");
          for(j = 0; j < x; j++)
            {
                  printf("%d ", z[i][j]);
            }
       }
}

