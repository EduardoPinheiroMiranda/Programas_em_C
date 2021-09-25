#include <stdio.h>
#include <stdlib.h>

int playr1(int x,int y[3][3],char n[15],char n2[15]){
    int setor,i,j,aux,cont=0;
    scanf("%d",&setor);

    if(x==2){aux=-1;}
    if(x==3){ aux=1;}

        switch(setor){
            case 1:
                
                if(y[0][0]!=0){
                    while(setor==1){
                    printf("\nAqui nao pode mais, escolha outro lugar\n");
                    scanf("%d",&setor);
                    }
                }y[0][0]=aux;
                
                    for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }

                break;
            case 2:
                y[0][1]=aux;
                for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                break;
            case 3:
                y[0][2]=aux;
                for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                break;
            case 4:
                y[1][0]=aux;
                for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n");
                    }
                break;
            case 5:
                y[1][1]=aux;
                for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                break;
            case 6:
                y[1][2]=aux;
                for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                break;
            case 7:
                y[2][0]=aux;
                for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                break;
            case 8:
                y[2][1]=aux;
                for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                break;
            case 9:
                y[2][2]=aux;
                for(i=0;i<3;i++){printf("|| ");
                        for(j=0;j<3;j++){
                            printf("%d || ",y[i][j]);
                        }printf("\n\n");
                    }
                break;
            default:
                
                while(setor>9){
                    printf("So vale numeros de 1 a 9, tente outro\n");
                    scanf("%d",&setor);
                }
                
        }
        for(i=0;i<3;i++){
                if(y[i][0]==-1 && y[i][1]==-1 && y[i][2]==-1){
                    printf("%svoce ganhou, PARABENS :D\n\n",n);
                    x=1;i=3;
                }
                if(y[0][i]==-1 && y[1][i]==-1 && y[2][i]==-1){
                    printf("%svoce ganhou, PARABENS :D\n\n",n);
                    x=1;i=3;
                }
                if(y[0][0]==-1 && y[1][1]==-1 && y[2][2]==-1){
                    printf("%svoce ganhou, PARABENS :D\n\n",n);
                    x=1;i=3;
                }
                if(y[0][2]==-1 && y[1][1]==-1 && y[2][0]==-1){
                    printf("%svoce ganhou, PARABENS :D\n\n",n);
                    x=1;i=3;
                }
                if(y[i][0]==1 && y[i][1]==1 && y[i][2]==1){
                    printf("%svoce ganhou, PARABENS :D\n\n",n2);
                    x=1;i=3;
                }
                if(y[0][i]==1 && y[1][i]==1 && y[2][i]==1){
                    printf("%svoce ganhou, PARABENS :D\n\n",n2);
                    x=1;i=3;
                }
                if(y[0][0]==1 && y[1][1]==1 && y[2][2]==1){
                    printf("%svoce ganhou, PARABENS :D\n\n",n2);
                    x=1;i=3;
                }
                if(y[0][2]==1 && y[1][1]==1 && y[2][0]==1){
                    printf("%svoce ganhou, PARABENS :D\n\n",n2);
                    x=1;i=3;
                }
                if(i==2 && j==2){
                    if(x==0){printf("/////EMPATE/////");}
                }
            }
    return x;
}
int main()
{
    int partida=0,i,j,jogo[3][3]={0,0,0,0,0,0,0,0,0};
    int j1=2,j2=3;
    char jogador1[15],jogador2[15];
        
        printf("/////////////////////////////////////////////////////\n");
        printf("\tSeja bem vindo ao nosso jogo da velha\n");
        printf("/////////////////////////////////////////////////////\n");
        printf("Qual o nome do primeiro a jogar\n");
        fgets(jogador1,15,stdin);
        printf("Qual o nome do segundo a jogar ?\n");
        fgets(jogador2,15,stdin);
        printf("\n/////////////////////////////////////////////////////\n");
        printf("\n\t////Muito bem/////\n%svoce sera o primeiro e usara ' -1 ' no lugar de bolinha\n\n%susara '1' no lugar de X\n",jogador1,jogador2);

        printf("\nVoce pode escolher onde voce marcara diacordo os numeros no exemplo:\n");
        printf("|| 1 || 2 || 3  ||\n\n|| 4 || 5 || 6  ||\n\n|| 7 || 8 || 9  ||\n\n");

            while(partida!=1){
                printf("%sSua vez, escolha o lugar que quiser marcar com base no exemplo\n",jogador1);
                partida=playr1(j1,jogo,jogador1,jogador2);
                if(partida!=1){
                printf("%sSua vez, escolha o lugar que quiser marcar com base no exemplo\n",jogador2);
                partida=playr1(j2,jogo,jogador1,jogador2);}
            }

    return 0;
}