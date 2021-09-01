#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*1. Faca um programa que possua um vetor denominado A, que armazene 6 numeros intei-
ros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posiçao 4, atribuindo a esta posição o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/

int main(void)
{
  int i, soma=0, aux, A[6]={1,0,5,-2,-5,7};

    for(i=0;i<6;i++){
        if(i==4){
            A[i]=100;
            printf("\nO valor da posicao 4 eh:%d\n\n", A[i]);
        }
        if(i==0 || i==1 || i==5){
            soma=soma+A[i];
        }

    }
        printf("A soam das posicoes 0, 1 e 5 eh: %d\n\n",soma );

        printf("O vetor possui os seguintes valores:\n");
    for(i=0;i<6;i++)
    {
      printf("%d\n", A[i]);
    }

  return 0;
}