#include <stdio.h>
#include<stdlib.h>
#include<locale.h>    

int main(){
        char vet[50];
        int i,j,k;

        for(i=0;i<50;i++){ vet[i]=' '; }
        
        for(i=0;i<50;i++){
            if(i<4){ 
                vet[i]='-'; 
            }
            if(i>3){ 
                vet[i]='-'; 
                vet[i-4]=' '; 
            }
            for(j=0;j<50;j++){ 
                printf("%c", vet[j]);
                if(i==j){
                    printf("__________________\n");
                }
            }
            for(int j=0;j<50;j++){ 
                printf("%c", vet[j]);
                if(i==j){
                    printf("\n    ____||____\n");
                }
            }
            
                
                
            
            system("cls");
        
            /*if(i==49){
                i=0;
                for(k=0;k<50;k++){ vet[k]=' '; }
            }*/
        }
}
/*
            __________________\n
                ____||____\n
                |        |\n
        --======|________|\n
                ____|__|__/\n
            */