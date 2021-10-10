#include <stdio.h>
#include<stdlib.h>
#include<locale.h>    
#define tam 50


void main(){
setlocale(LC_ALL,"portuguese");
    char aviao[6][tam];
    int i,j,k,a=0;

    while(a==0){
            for(i=0;i<6;i++){
                for(j=0;j<tam;j++){
                    
                    if(i==0 &&j>3&&j<21){
                        aviao[i][j]='_';
                    }else{aviao[i][j]=' ';}
                    if(i==1&&j>7&&j<12) {  aviao[i][j]='_'; }
                    if(i==1&&j>11&&j<14){  aviao[i][j]='|'; }
                    if(i==1&&j>13&&j<18){  aviao[i][j]='_'; }
                    if(i==2&&j==7)      {  aviao[i][j]='|'; }
                    if(i==2&&j==18)     {  aviao[i][j]='|'; }
                    if(i==3&&j<2)       {  aviao[i][j]='--';}
                    if(i==3&&j>1&&j<8)  {  aviao[i][j]='='; }
                    if(i==3&&j==7)      {  aviao[i][j]='|'; }
                    if(i==3&&j>7&&j<18) {  aviao[i][j]='_'; }
                    if(i==3&&j==18)     {  aviao[i][j]='|'; }
                    if(i==4&&j>7&&j<12) {  aviao[i][j]='_'; }
                    if(i==4&&j==11)     {  aviao[i][j]='|'; }
                    if(i==4&&j>11&&j<14){  aviao[i][j]='_'; }
                    if(i==4&&j==14)     {  aviao[i][j]='|'; }
                    if(i==4&&j>14&&j<19){  aviao[i][j]='__';}
                    if(i==4&&j==19)     {  aviao[i][j]='/'; }
                }
            }

            for(k=0;k<10;k++){
                for(i=0;i<6;i++){
                    for(j=0;j<tam;j++){
                        if(i==0&&aviao[i][j]=='_'){
                            aviao[i][j]=' ';
                            aviao[0][j+18]='_';

                        }                                    
                        printf("%c", aviao[i][j]);
                    }
                    printf("\n");
                }
                system("cls");
            }
            







    }
             
}

        
    
/*
            __________________\n
                ____||____\n
                |        |\n
        --======|________|\n
                ____|__|__/\n
            */