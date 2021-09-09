#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*9) Receber do teclado uma mensagem e imprimir quantas letras A, E,
I, O, U tem esta mensagem. Considerar minúscula e maiúscula. A
função em portugol que acessa letra por letra de uma palavra é
strlem(variavel,x). (x é a posição da letra na frase)-*/

int main()
{
    char texto[1000];
    int i,cont=0, a=0,e=0,y=0,o=0,u=0;

    printf("Digite uma mensagem ou frase\n");
    fgets(texto,1000,stdin);
    cont=strlen(texto)-1;

        for(i=0;i<cont;i++)
        {
            if(texto[i]=='a'||texto[i]=='A')
            {
                a=a+1;
            }
            if(texto[i]=='e'||texto[i]=='E')
            {
                e=e+1;
            }
            if(texto[i]=='i'||texto[i]=='I')
            {
                y=y+1;
            }
            if(texto[i]=='o'||texto[i]=='O')
            {
                o=o+1;
            }
            if(texto[i]=='u'||texto[i]=='U')
            {
                u=u+1;
            }
        }
        printf("A=%d\nE=%d\nI=%d\nO=%d\n    U=%d\n\n", a,e,y,o,u);

    return 0;
}