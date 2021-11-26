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

int metodo_bolha_5000(int vet[]){
    int j, i, x, cont;
    char num_string[6], temp;// num_string[6] vai receber os valores inteiros convertidos para strings.
    //time_t ini, fim, start, end;


    for(x=0; x<aux; x++){
        sprintf(num_string, "%d", vet[x]);
        cont = strlen(num_string);
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
    return 0;

}

int metodo_bolha_500(int vet[]){
    int j, i, x, cont;
    char num_string[6], temp;// num_string[6] vai receber os valores inteiros convertidos para strings.
    //time_t ini, fim, start, end;

    for(x=0; x<500; x++){
        sprintf(num_string, "%d", vet[x]);
        cont = strlen(num_string);         
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

    return 0;
}

int metodo_selecao_5000(int vet[]){
    int j, i, x, cont;
    char num_string[6], temp;// num_string[6] vai receber os valores inteiros convertidos para strings.

    
    for(int k=0; k<aux; k++){
        sprintf(num_string, "%d", vet[k]);
        cont = strlen(num_string);
            for (i=0; i <cont-1; i++) {
                x = i;
                for (j=i+1; j<cont; j++) {
                    if (num_string [j] <num_string [x]) {
                        x = j;
                    }
                }
                temp = num_string[x];
                num_string [x] = num_string [i];
                num_string [i] = temp;
            }
    }
    return 0;
}

int metodo_selecao_500(int vet[]){
    int j, i, x, cont;
    char num_string[6], temp;// num_string[6] vai receber os valores inteiros convertidos para strings.
    
    for(int k=0; k<aux; k++){
        sprintf(num_string, "%d", vet[k]);
        cont = strlen(num_string);
            for (i=0; i <cont-1; i++) {
                x = i;
                for (j=i+1; j<cont; j++) {
                    if (num_string [j] <num_string [x]) {
                        x = j;
                    }
                }
                temp = num_string[x];
                num_string [x] = num_string [i];
                num_string [i] = temp;
            }
    }
    return 0;
}

int metodo_insercao_5000(int vet[]){
    int j, i, x, cont;
    char num_string[6], temp;// num_string[6] vai receber os valores inteiros convertidos para strings.
    
    for(int k=0; k<aux; k++){
        sprintf(num_string, "%d", vet[k]);
        cont = strlen(num_string);
            for(int k=0; k<5; k++){
                sprintf(num_string, "%d", vet[k]);
                cont = strlen(num_string);
        
                for(j=1; j<cont; j++) {
                    temp = num_string[j];
                    i = j-1;
            
                    while(i>=0 && num_string[i]>temp) {
                        num_string[i+1] = num_string[i];
                        i--;
                    }
                    num_string[i+1] = temp;
                }
            }
    }
    return 0;
}

int metodo_insercao_500(int vet[]){
    int j, i, x, cont;
    char num_string[6], temp;// num_string[6] vai receber os valores inteiros convertidos para strings.
    
    for(int k=0; k<500; k++){
        sprintf(num_string, "%d", vet[k]);
        cont = strlen(num_string);
            for(int k=0; k<5; k++){
                sprintf(num_string, "%d", vet[k]);
                cont = strlen(num_string);
        
                for(j=1; j<cont; j++) {
                    temp = num_string[j];
                    i = j-1;
            
                    while(i>=0 && num_string[i]>temp) {
                        num_string[i+1] = num_string[i];
                        i--;
                    }
                    num_string[i+1] = temp;
                }
            }
    }
    return 0;
}

int metodo_shellsort_5000(int vet[]){
    int j, i, h, cont;
    char num_string[6], temp;//vai receber os valores inteiros convertidos para strings.
    
    for(int k=0; k<aux; k++){
        sprintf(num_string, "%d", vet[k]);
        cont = strlen(num_string);
        
        do {
        h=(3*h) + 1;
        } while(h<cont);
    
        do {
            h/=3; //ou h = h/3
            for(i=h;i<cont;i++) {
                temp = num_string[i];
                j=i-h;
                
                while(j>=0 && temp<num_string[j]) {
                    num_string[j+h] = num_string[j];
                    j-=h;
                }
                num_string[j+h] = temp;
            }
        } while(h>1);
    
        for(i=0;i<cont;i++) {
            printf("%c ", num_string[i]);
        }
        printf("\n");
    }
    return 0;
}

int metodo_shellsort_500(int vet[]){
    int j, i, h, cont;
    char num_string[6], temp;//vai receber os valores inteiros convertidos para strings.
    
    for(int k=0; k<500; k++){
        sprintf(num_string, "%d", vet[k]);
        cont = strlen(num_string);
        
        do {
        h=(3*h) + 1;
        } while(h<cont);
    
        do {
            h/=3; //ou h = h/3
            for(i=h;i<cont;i++) {
                temp = num_string[i];
                j=i-h;
                
                while(j>=0 && temp<num_string[j]) {
                    num_string[j+h] = num_string[j];
                    j-=h;
                }
                num_string[j+h] = temp;
            }
        } while(h>1);
    
        for(i=0;i<cont;i++) {
            printf("%c ", num_string[i]);
        }
        printf("\n");
    }
    return 0;
}


int main(){
    int vet[aux];
    clock_t BOBO;
    vet[aux]=ler_arquivo(vet);
    
    BOBO = clock();
    metodo_bolha_5000(vet);
    BOBO = clock() - BOBO;

    metodo_bolha_500;
    metodo_selecao_5000;
    metodo_selecao_500;
    metodo_insercao_5000;
    metodo_insercao_500;
    metodo_shellsort_5000;
    metodo_shellsort_500;
    

    printf("%f", ((float)BOBO)/CLOCKS_PER_SEC);
    //printf("%f\n%f ", tempo_bobo[0], tempo_bobo[1]);

    






}