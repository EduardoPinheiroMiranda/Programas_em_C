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








