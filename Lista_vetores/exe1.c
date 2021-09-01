#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
int main(){
  int i, vetA[6];

  printf("\nDigite seis numero inteiros\n");
  for(i=0;i<6;i++){
    scanf("%d", &vetA[i]);
  }
  printf("Os numeros que voce digitou foi:\n");

    for(i=0;i<6;i++){
    printf("%d\t", vetA[i]);
    }
}