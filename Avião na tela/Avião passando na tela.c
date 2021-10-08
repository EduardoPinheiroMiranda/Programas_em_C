#include <stdio.h>
#include<stdlib.h>
#include<locale.h>    

int mov(char b[30]){
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
                    printf("%s",b);
                }
            }  
            system("cls");
        
            if(i==49){
                i=0;
                for(k=0;k<50;k++){ vet[k]=' '; }
            }
        }
}

int main(){
    char a[30]= {'_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_'};
    mov(a);
}
/*
            __________________\n
                ____||____\n
                |        |\n
        --======|________|\n
                ____|__|__/\n
            */