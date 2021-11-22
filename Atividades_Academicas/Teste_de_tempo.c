#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <math.h>
#define aux 5000

void organizar(int separar){//vai receber um valor do vetor que estara guardando os valores do arquivo e desmembrar o valor
    int num, numer[20], controle=2, j=0, x=1;
    char valor_ordenar[20];

        sprintf(valor_ordenar,"%d", separar);//converte valores inteiros em strings
        num = strlen(valor_ordenar)-1;
        int pot=pow(10,num);

            while(x){
                if(separar-pot<pow(10,num)){
                    numer[j]=separar/pow(10,num);
                    separar = separar-pot;
                    num = num-1;
                    pot = pow(10,num);
                    controle=2;
                    j++;
                }else{
                    pot = pow(10,num);
                    pot = pot*controle;
                    controle++;
                }
                if(j==strlen(valor_ordenar)){x=0;}
            }

}
/*

int metodo_bolha(int vet[]){
    int temp,i, j, auxiliar;
    int veterinario;
    for(i=0;i<aux;i++){
        auxiliar = vet[i];

    }
}


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
}*/

int main(){
    int vet[aux];
        ler_arquivo(vet);

        int teste = 654321;
        organizar(teste);

}