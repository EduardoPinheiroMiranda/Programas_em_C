/*Façã um programa que leia duas matrizes 2 x 2 com valores reais. Ofereca ao usuario
um menu de opções:
    (a) somar as duas matrizes
    (b) subtrair a primeira matriz da segunda
    (c) adicionar uma constante as duas matrizes
    (d) imprimir as matrizes
Nas duas primeiras opções uma terceira matriz 3 x 3 deve ser criada. Na terceira opção
o valor da constante deve ser lido e o resultado da adição da constante deve ser arma-
zenado na propria matriz.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a[2][2],b[2][2],sub[2][2],soma[2][2];
    int i,j,x,con;

    printf("Preencha uma matriz 2x2\n");
    printf("Digite 4 numeros\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    printf("\nPreencha outra matriz 2x2\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%f",&b[i][j]);
        }
    }

    printf("\nO que voce quer fazer com essas matrizes ?\n");
    printf("1 somar as duas matrizes\n2 subtrair a primeira matriz da segunda\n3 adicionar uma constante as duas matrizes\n4 imprimir as matrizes\n");
    scanf("%d", &x);
    printf("\n");

    switch(x)
    {
    case 1:
            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    soma[i][j]=a[i][j]+b[i][j];
                    printf("%.0f  ", soma[i][j]);
                }
                printf("\n");
            }
            break;

    case 2:
           for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    sub[i][j]=b[i][j]-a[i][j];
                    printf("%.2f  ", sub[i][j]);
                }
                printf("\n");
            }
            break;
    case 3:
            printf("\nDigite um numero para a constante\n");
            scanf("%d", &con);

            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    a[i][j]=a[i][j]+con;
                    printf("%.0f  ", a[i][j]);
                }
                printf("\n");
            }

            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    b[i][j]=b[i][j]+con;
                    printf("%.0f  ", b[i][j]);
                }
                printf("\n");
            }

    case 4:
            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    printf("%.0f  ", b[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    printf("%.0f  ", a[i][j]);
                }
                printf("\n");
            }

    }
    return 0;
}