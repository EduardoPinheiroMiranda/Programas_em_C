#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <math.h>
#define aux 5000

int ler_arquivo(int vet[]){
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
    return vet;
}
/*
void organizar(int separar){
    char numeros[7];
        sprintf(numeros, "%d", separar);
    return 

}*/

void metodo_bolha(int vet[]){
    int j, i, x, cont, tempo[2];
    char num_string[6], temp;//vai receber os valores inteiros convertidos para strings.
    time_t ini, fim, start, end;

    time(&ini);
    for(x=0; x<aux; x++){
        sprintf(num_string, "%d", vet[x]);
        cont = strlen(num_string);
        printf ("%d\n", cont);
         
            for(i=0; i<cont; i++){
                for(j=0;j<cont;j++){
                    if(num_string[j]>num_string[j+1]){
                        temp = num_string[j];
                        num_string[j] = num_string[j+1];
                        num_string[j+1]=temp;
                    }
                }
            } 
    }
    time(&fim);
    time(&start);
    for(x=0; x<aux; x++){
        sprintf(num_string, "%d", vet[x]);
        cont = strlen(num_string);
        printf ("%d\n", cont);
         
            for(i=0; i<cont; i++){
                for(j=0;j<cont;j++){
                    if(num_string[j]>num_string[j+1]){
                        temp = num_string[j];
                        num_string[j] = num_string[j+1];
                        num_string[j+1]=temp;
                    }
                }
            } 
    }
    time(&end);
    tempo[0]=fim-ini;
    tempo[1]=end-start;

    return tempo;

}

int main(){
    int vet[aux], tempo;
    vet[aux]=ler_arquivo(vet);
    metodo_bolha(vet);
    






}