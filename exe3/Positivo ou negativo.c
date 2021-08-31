#include <stdio.h>
#include <stdlib.h>

//Escreva um algoritmo em C que descubra se um valor
//é positivo ou negativo (considere o valor zero como positivo).
int main()
{
    int a;
        printf("digite um numero e vamos saber\nse ele eh positivo ou negativo\n" );
        scanf("%i", &a);


            if(a>=0)
            {
                printf("o numero eh positivo \n\n\n");
            }else{
                printf("o numero eh negativo\n\n\n\n");
            }

    return 0;
}