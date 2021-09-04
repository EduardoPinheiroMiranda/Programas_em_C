/*Faça um programa para determinar a proxima jogada em um Jogo da Velha. Assumir que 
o tabuleiro e representado por uma matriz de 3 x 3, onde cada posição representa uma 
das casas do tabuleiro. A matriz pode conter os seguintes valores -1, 0, 1 representando
respectivamente uma casa contendo uma peça minha (-1), uma casa vazia do tabuleiro
(0), e uma casa contendo uma peça do meu oponente (1).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int playr1(int x,int y[3][3],char n[15],char n2[15]){
    int setor,i,j,aux,cont;
    scanf("%d",&setor);

    if(x==2){aux=-1;}
    if(x==3){ aux=1;}

        switch(setor){
            case 1:
                if(y[0][0]!=0){
                    while(setor==1){
                        printf("\nAqui não pode mais, escolha outro lugar\n");
                        setor=playr1(x,y,n,n2);
                    }
                }else{y[0][0]=aux;

                    for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                }
                break;
            case 2:
                if(y[0][1]!=0){
                    while(setor==2){
                        printf("\nAqui não pode mais, escolha outro lugar\n");
                        setor=playr1(x,y,n,n2);
                    }
                }else{y[0][1]=aux;

                    for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                }
                break;
            case 3:
                if(y[0][2]!=0){
                    while(setor==3){
                        printf("\nAqui não pode mais, escolha outro lugar\n");
                        setor=playr1(x,y,n,n2);
                    }
                }else{y[0][2]=aux;

                    for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                }
                break;
            case 4:
                if(y[1][0]!=0){
                    while(setor==4){
                        printf("\nAqui não pode mais, escolha outro lugar\n");
                        setor=playr1(x,y,n,n2);
                    }
                }else{y[1][0]=aux;

                    for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                }
                break;
            case 5:
                if(y[1][1]!=0){
                    while(setor==5){
                        printf("\nAqui não pode mais, escolha outro lugar\n");
                        setor=playr1(x,y,n,n2);
                    }
                }else{y[1][1]=aux;

                    for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                }
                break;
            case 6:
                if(y[1][2]!=0){
                    while(setor==6){
                        printf("\nAqui não pode mais, escolha outro lugar\n");
                        setor=playr1(x,y,n,n2);
                    }
                }else{y[1][2]=aux;

                    for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                }
                break;
            case 7:
                if(y[2][0]!=0){
                    while(setor==7){
                        printf("\nAqui não pode mais, escolha outro lugar\n");
                        setor=playr1(x,y,n,n2);
                    }
                }else{y[2][0]=aux;

                    for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                }
                break;
            case 8:
                if(y[2][1]!=0){
                    while(setor==8){
                        printf("\nAqui não pode mais, escolha outro lugar\n");
                        setor=playr1(x,y,n,n2);
                    }
                }else{y[2][1]=aux;

                    for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                }
                break;
            case 9:
                if(y[2][2]!=0){
                    while(setor==9){
                        printf("\nAqui não pode mais, escolha outro lugar\n");
                        setor=playr1(x,y,n,n2);
                    }
                }else{y[2][2]=aux;

                    for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                }

                break;
            default:
                printf("\nVocê só pode digitar números de 1 a 9\n");
                while(setor>9){setor=playr1(x,y,n,n2);}
        }
        for(i=0;i<3;i++){
                if(y[i][0]==-1 && y[i][1]==-1 && y[i][2]==-1){
                    printf("%sVOCÊ GANHOU, PARABÉNS :D\n\n",n);
                    x=0;i=3;
                }
                if(y[0][i]==-1 && y[1][i]==-1 && y[2][i]==-1){
                    printf("%sVOCÊ GANHOU, PARABÉNS :D\n\n",n);
                    x=0;i=3;
                }
                if(y[0][0]==-1 && y[1][1]==-1 && y[2][2]==-1){
                    printf("%sVOCÊ GANHOU, PARABÉNS :D\n\n",n);
                    x=0;i=3;
                }
                if(y[0][2]==-1 && y[1][1]==-1 && y[2][0]==-1){
                    printf("%sVOCÊ GANHOU, PARABÉNS :D\n\n",n);
                    x=0;i=3;
                }
                if(y[i][0]==1 && y[i][1]==1 && y[i][2]==1){
                    printf("%sVOCÊ GANHOU, PARABÉNS :D\n\n",n2);
                    x=0;i=3;
                }
                if(y[0][i]==1 && y[1][i]==1 && y[2][i]==1){
                   printf("%sVOCÊ GANHOU, PARABÉNS :D\n\n",n2);
                    x=0;i=3;
                }
                if(y[0][0]==1 && y[1][1]==1 && y[2][2]==1){
                    printf("%sVOCÊ GANHOU, PARABÉNS :D\n\n",n2);
                    x=0;i=3;
                }
                if(y[0][2]==1 && y[1][1]==1 && y[2][0]==1){
                    printf("%sVOCÊ GANHOU, PARABÉNS :D\n\n",n2);
                    x=0;i=3;
                }
                    cont=0;
                    for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                            if(y[i][j]==1 || y[i][j]==-1){
                                cont=cont+1;
                                if(cont==9){printf("\n\t/////DEU VELHA/////\n\n");x=0;}
                            }
                        }
                    }
            }



    return x;
}

int main()
{
setlocale(LC_ALL, "portuguese");

    int partida=1,i,j,jogo[3][3]={0,0,0,0,0,0,0,0,0};
    int j1=2,j2=3;
    char jogador1[15],jogador2[15];

        printf("\n\n\n/////////////////////////////////////////////////////\n");
        printf("\tSeja bem vindo ao nosso jogo da velha\n");
        printf("/////////////////////////////////////////////////////\n");
        printf("Qual o nome do primeiro a jogar\n");
        fgets(jogador1,15,stdin);
        printf("Qual o nome do segundo a jogar ?\n");
        fgets(jogador2,15,stdin);
        printf("\n///////////////////////////////////////////////////\n");
        printf("\n\t////Muito bem/////\n%svocê sera o primeiro, e usara ' -1 ' no lugar de bolinha\n\n%sSeu adversario usara '1' no lugar de X\n",jogador1,jogador2);

        printf("\nVoce pode escolher onde voce marcara diacordo os numeros no exemplo:\n");
        printf("|| 1 || 2 || 3  ||\n\n|| 4 || 5 || 6  ||\n\n|| 7 || 8 || 9  ||\n\n");

            while(partida!=0){
                printf("%sSua vez, escolha o lugar que quiser marcar com base no exemplo\n",jogador1);
                partida=playr1(j1,jogo,jogador1,jogador2);
                if(partida!=0){
                printf("%sSua vez, escolha o lugar que quiser marcar com base no exemplo\n",jogador2);
                partida=playr1(j2,jogo,jogador1,jogador2);}
            }


    return 0;
}