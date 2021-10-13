#include <stdio.h>
#include<stdlib.h>
#include<locale.h>    
#define tam 100

int main(){
    int i,j;    
    char elise[tam]={' ',' ',' ',' ','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_'};
    char motor[tam]={' ',' ',' ',' ',' ',' ',' ',' ','_','_','_','_','_','|','|','_','_','_','_',' ',' ',' ',' ',' '};
    char cima[tam] ={' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' '};
    char baixo[tam]={'-','-','=','=','=','=','=','=','|','_','_','_','_','_','_','_','_','_','|',' ',' ',' ',' ',' '};
    char pe[tam]   ={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','_','_','_','|','_','_','|','_','_','/',' ',' ',' ',' '};
        //printf("%s\n%s\n%s\n%s\n%s\n\n",elise, motor, cima, baixo, pe); 

        for(i=24;i<tam;i++){
            elise[i]=' ';
            motor[i]=' ';
            cima[i]=' ';
            baixo[i]=' ';
            pe[i]=' ';
                if(i==tam-1){
                    elise[i]=';';
                    motor[i]=';';
                    cima[i]=';';
                    baixo[i]=';';
                    pe[i]=';';
                }

        }




        for(i=0;i<tam;i++){
            printf("%c",elise[i]);
        }printf("\n");
        for(i=0;i<tam;i++){
            printf("%c",motor[i]);
        }printf("\n");
        for(i=0;i<tam;i++){
            printf("%c",cima[i]);
        }printf("\n");
        for(i=0;i<tam;i++){
            printf("%c",baixo[i]);
        }printf("\n");
        for(i=0;i<tam;i++){
            printf("%c",pe[i]);
        }printf("\n");
        //system("cls");
        //printf("%s\n%s\n%s\n%s\n%s\n", elise,motor,cima,baixo,pe);





}




















