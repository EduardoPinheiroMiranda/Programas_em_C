#include <stdio.h>
#include <stdlib.h>
                        // auxilia no programa para gerar numeros aleatorios
#include <time.h>    //usa a hora do PC para poder gerar uma nova semente para a variavel rad

int main()
{
        int i, j, pedra, papel, tesoura, val, maq;
    pedra = 1;
    papel = 2;
    tesoura = 3;

        printf("   ****************************************\n");
        printf("   ******** BEM VINDO AO JOQUEMPO *********\n");
        printf("   ****************************************\n\n\n");
        printf(" seja bem vindo ao nosso joguinho de pedra papel e tesoura\n vamos ver se voce e bom mesmo\n\n");
        printf(" vai funcionar assim: \n\n");
        printf(" 1 vai ser pedra \n 2 vai ser papel \n 3 vai ser tesoura\n\n");



        printf("digite um numero entre 1 e 3\n");
            scanf(" %d", &j);
                srand(time(NULL));
                    for(i=1; i<1; i++);
                    maq = rand() % 3;


            while(j > 3)
            {
                      printf(" Essa opcao nao existe! \n\n escolha outra que seja valida\n\n");
                      scanf("%d", &j);
            }

        switch(j) {

        case 1:
            printf("   voce escolheu pedra\n\n");
            j=1;
            break;
        case 2:
            printf("   voce escolheu papel\n\n");
            j=2;
            break;
        case 3:
            printf("   voce escolheu tesoura\n\n");
            j=3;
            break;
        }


        if(maq == 0){
            printf("  eh seu oponente escolheu pedra\n\n");
        }
        if(maq == 1){
            printf("  eh seu oponente escolheu pedra\n\n");
        }
        if(maq == 2){
            printf("  eh seu oponente escolheu papel\n\n");
        }
        if(maq == 3){
            printf("  eh seu oponente escolheu tesoura\n\n");
        }


        if(j == 1)
        {
           if(maq == 1)
           {
               printf("*************** INCRIVEL EMPATE **************\n");
               printf("****** VOCE VAI MESMO ACEITAR UM EMPATE ******\n\n\n\n\n\n\\n\n");
           }
        }
         if(j == 1)
        {
           if(maq == 0)
           {
               printf("*************** INCRIVEL EMPATE **************\n");
               printf("****** VOCE VAI MESMO ACEITAR UM EMPATE ******\n\n\n\n\n\n\\n\n");
           }
        }
        if(j == 2)
        {
           if(maq == 2)
           {
               printf("*************** INCRIVEL EMPATE **************\n");
               printf("****** VOCE VAI MESMO ACEITAR UM EMPATE ******\n\n\n\n\n\n\\n\n");
           }
        }
        if(j == 3)
        {
           if(maq == 3)
           {
               printf("*************** INCRIVEL EMPATE **************\n");
               printf("****** VOCE VAI MESMO ACEITAR UM EMPATE ******\n\n\n\n\n\n\\n\n");
           }
        }


         if(j == 1)
        {
           if(maq == 2)
           {
               printf("***************** VOCE PERDEU ****************\n");
               printf("*** VOCE VAI MESMO DEIXAR A MAQUINA GANHAR ***\n\n\n\n\n\n\\n\n");
           }
        }
         if(j == 1)
        {
           if(maq == 3)
           {
            printf("**************** PARABENS VOCE GANHOU ***************\n");
            printf("*** TENTE DE NOVO PARA VER SE ESTA COM SORTE MESMO***\n\n\n\n\n\n\\n\n");
           }
        }
         if(j == 2)
        {
           if(maq == 1)
           {
              printf("**************** PARABENS VOCE GANHOU ***************\n");
              printf("*** TENTE DE NOVO PARA VER SE ESTA COM SORTE MESMO***\n\n\n\n\n\n\\n\n");
           }
        }
         if(j == 2)
        {
           if(maq == 3)
           {
            printf("***************** VOCE PERDEU ****************\n");
            printf("*** VOCE VAI MESMO DEIXAR A MAQUINA GANHAR ***\n\n\n\n\n\n\n\n");
           }
        }
         if(j == 3)
        {
           if(maq == 1)
           {
            printf("***************** VOCE PERDEU ****************\n");
            printf("*** VOCE VAI MESMO DEIXAR A MAQUINA GANHAR ***\n\n\n\n\n\n\n\n");
           }
        }
         if(j == 3)
        {
           if(maq == 2)
           {
              printf("**************** PARABENS VOCE GANHOU ***************\n");
              printf("*** TENTE DE NOVO PARA VER SE ESTA COM SORTE MESMO***\n\n\n\n\n\n\n\n");
           }
        }

        return 0;
}
