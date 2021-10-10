#include <stdio.h>
#include<stdlib.h>
#include<locale.h>    
#define tam 50
void main(){
setlocale(LC_ALL,"portuguese");
    char aviao[6][tam];
    int i,j;
        for(i=0;i<6;i++){
            for(j=0;j<tam;j++){
                
               if(i==0 &&j<17){
                   aviao[i][j]='_';
               }else{aviao[i][j]=' ';}
                
               if(i==1&&j>3&&j<8) { aviao[i][j]='_'; }
                
               if(i==1&&j>7&&j<10) { aviao[i][j]='|'; }

               if(i==1&&j>9&&j<14){  aviao[i][j]='_';}
               
               if(i==2&&j==5||j)  {aviao[i][j]='|'; }
            }
        }

        for(i=0;i<6;i++){
            for(j=0;j<tam;j++){
                printf("%c", aviao[i][j]);
            }
            printf("\n");
        }
}
/*
            __________________\n
                ____||____\n
                |        |\n
        --======|________|\n
                ____|__|__/\n
            */