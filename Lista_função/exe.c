#include <stdlib.h>
#include <stdio.h>

/*Escreva	 uma	 função	 que	 receba 3	 notas	 de	 um	 aluno	 e	 uma	 letra.	 Se	 a
letra	for	A	a	função	retorna a	média	aritmética	das	notas	do	aluno,	se	for
P,	 a	 sua	 média	 ponderada	 (pesos:	 5,	 3	 e	 2)	 e	 se	 for	 H,	 a	 sua	 média
harmônica.*/

float media(float x,float y,float z)
{
    float total;
        total=(x+y+z)/3;
    return total;
}

float ponderada(float x,float y,float z)
{
    float total1;
        total1=(x*5+y*3+z*2)/(5+3+2);
    return total1;
}

float harmonica(float x,float y,float z)
{
    int total,i,j,mmc[3],aux=0,con=3,cont=3;

    mmc[0]=x; mmc[1]=y; mmc[2]=z;

    for(i=aux;i<100;i++){
        for(j=0;j<3;j++){
            if(mmc[j]%2==0){
                mmc[j]=mmc[j]/2;
            }
            if(mmc[0]%2!=0&&mmc[1]%2!=0&&mmc[2]%2!=0){i=100;}
        }aux=aux+1;
    }
    aux=pow(2,aux);//função "POW" serve para potencias e prescisa da biblioteca "math.h"
    for(i=0;i<100;i++){
        for(j=0;j<3;j++){
            if(mmc[j]%con==0){
                mmc[j]=mmc[j]/con;
                cont=cont-1;
            }
            if(mmc[0]==1&&mmc[1]==1&&mmc[2]==1){i=100;}
        }
        if(cont<3){aux=aux*con;}
        con=con+2;
    }
    x=(aux/x)+(aux/y)+(aux/z); //agora usa a formula "numero de termos/ x/aux"
    x=(3*aux)/x;//inverta X e AUX depois multiplique o numero de termos por AUX e divida por x

    return x;
}
float main()
{
    float a,b,c;
    char letra;

        printf("Digite tres valores inteiros\n");
        scanf("%f %f %f",&a,&b,&c);
        printf("Escolha uma letra\nA\nP\nH\n");
        scanf("%s",&letra);

            switch(letra)
            {
            case 'a':
                printf("\n%.2f ",media(a,b,c));
                break;
            case 'p':
                printf("\n%.2f",ponderada(a,b,c));
                break;
            case 'h':
                printf("\n%.2f",harmonica(a,b,c));
                break;
            }

    return 0;
}
