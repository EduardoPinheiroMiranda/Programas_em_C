#include <stdio.h>
#include<stdlib.h>
#define tam 100

char mover_aviao(char mover_parte[], int x){
    char nova_parte[tam];
    int i;
    for(i=x;i<x+1;i++){
        if(i==0){
            nova_parte[i]=mover_parte[tam-1];
        }
        nova_parte[i+1]=mover_parte[i];
        printf("%c", nova_parte[i]);
        return nova_parte[i];
    }
}

char atualizando(char parte_aviao[]){
    int i;
        for(i=0;i<tam;i++){
            parte_aviao[i]=mover_aviao(parte_aviao, i);
        }
        printf("\n");
        return parte_aviao;

}

int main(){
    int i,a=1;
    char aux[tam];
    char elise[tam]={' ',' ',' ',' ','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_'};
    char motor[tam]={' ',' ',' ',' ',' ',' ',' ',' ','_','_','_','_','_','|','|','_','_','_','_',' ',' ',' ',' ',' '};
    char cima[tam] ={' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' '};
    char baixo[tam]={'-','-','=','=','=','=','=','=','|','_','_','_','_','_','_','_','_','_','|',' ',' ',' ',' ',' '};
    char pe[tam]   ={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','_','_','_','|','_','_','|','_','_','/',' ',' ',' ',' '};


        for(i=24;i<tam;i++){
            elise[i]=' ';
            motor[i]=' ';
            cima[i]=' ';
            baixo[i]=' ';
            pe[i]=' ';
        }

    while(a!=0){
        atualizando(elise);
        atualizando(motor);
        atualizando(cima);
        atualizando(baixo);
        atualizando(pe);
        system("cls");
    }

}



/*
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

}*/





