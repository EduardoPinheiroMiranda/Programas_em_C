#include <stdio.h>
#include <stdlib.h>

// Escreva um algoritmo em C
//que descubra se um valor é par ou ímpar.

int main()
{
    int a;
    printf("qual numero voce quer descubrir se eh par ou impar ?\n");
    scanf("%i", &a);

        if(a%2==0)
        {
          printf("o numero eh par\n\n\n");
        }
        else{
            printf("o numero eh impar\n\n\n");
        }
return 0;
}