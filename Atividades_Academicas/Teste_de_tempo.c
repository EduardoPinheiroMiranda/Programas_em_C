#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define aux 5000

void ler_arquivo(int vet[]){
    FILE *arq;
    int x, i;
        arq = fopen("numeros.txt", "r");

            if(arq != NULL){
                while(!feof(arq)){
                    fscanf(arq, "%d", &x);
                    vet[i] = x;
                    i++;
                }
                fclose(arq);
            }else{
                printf("Erro com o arquivo");
            }
}

int main(){
    int vet[aux];
        ler_arquivo(vet);

    for(int i=0; i<aux; i++){
        printf("%d\n", vet[i]);
    }
}