#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*6) Ler nome, sexo e idade. Se sexo for feminino e idade menor que
25. Imprimir o nome da pessoa e a palavra ACEITA. Caso contrario
imprimir NAO ACEITA*/

int main()
{
    char nome[20], sexo;
    int idade;

    printf("Qual seu nome?\n");
    fgets(nome,20,stdin);
    printf("Qual seu sexo?\nF(feminino) ou M(masculino)\n");
    scanf("%c", &sexo);
    printf("Quantos anos voce tem ?\n");
    scanf("%d",&idade);

        if(sexo=='f' && idade<25)
        {
            printf("%saceita\n\n\n",nome);
        }
        else{
            printf("Nao aceito(a)");
        }

    return 0;
}