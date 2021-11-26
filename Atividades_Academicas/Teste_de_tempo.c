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
    return vet[aux];
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
    int j, i, cont;
    char num_string[6], temp;// num_string[6] vai receber os valores inteiros convertidos para strings.
    
    for(int x=0; x<aux; x++){
        sprintf(num_string, "%d", vet[x]);
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
    return 0;
}

int metodo_insercao_500(int vet[]){
    int j, i, cont;
    char num_string[6], temp;// num_string[6] vai receber os valores inteiros convertidos para strings.
    
    for(int k=0; k<500; k++){
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
    }
    return 0;
}

char heapSort(char num[], int n) {
   int i = n/2, pai, filho;
   char t;
   while(1) {
      if (i > 0) {
          i--;
          t = num[i];
      } else {
          n--;
          if (n == 0)
             return 0;
          t = num[n];
          num[n] = num[0];
      }
      pai = i;
      filho = i*2 + 1;
      while (filho < n) {
          if ((filho + 1 < n)  &&  (num[filho + 1] > num[filho]))
              filho++;
          if (num[filho] > t) {
             num[pai] = num[filho];
             pai = filho;
             filho = pai*2 + 1;
          }else
             break;
      }
      num[pai] = t;
   }
 
}

int metodo_heapsort_5000(int vet[]){
    int cont;
    char num_string[6];//vai receber os valores inteiros convertidos para strings.
    
    for(int k=0; k<aux; k++){
        sprintf(num_string, "%d", vet[k]);
        cont = strlen(num_string);
            heapSort(num_string, cont);
            
    }
        
    return 0;
}

int metodo_heapsort_500(int vet[]){
    int  cont;
    char num_string[6];//vai receber os valores inteiros convertidos para strings.
    
    for(int k=0; k<500; k++){
        sprintf(num_string, "%d", vet[k]);
        cont = strlen(num_string);
            heapSort(num_string, cont);
    }
    return 0;
}

int compara (void *x,void *y){
	if((char *)x>(char *)y)
		return 1;
	if((char *)y>(char *)x)
		return -1;
	return 0;
}

int metodo_quicksort_5000(int vet[]){
    int cont;
    char num_string[6];//vai receber os valores inteiros convertidos para strings.
    
    for(int k=0; k<aux; k++){
        sprintf(num_string, "%d", vet[k]);
        cont = strlen(num_string);
            qsort(num_string,(size_t)cont,sizeof(char),compara);
    }
    return 0;
}

int metodo_quicksort_500(int vet[]){
    int cont;
    char num_string[6];//vai receber os valores inteiros convertidos para strings.
    
    for(int k=0; k<500; k++){
        sprintf(num_string, "%d", vet[k]);
        cont = strlen(num_string);
            qsort(num_string,(size_t)cont,sizeof(char),compara);
    }
    return 0;
}


int main(){
    int vet[aux];
    clock_t bobo, bobo1, selec, selec1, inser, inser1, shel, shel1, quick, quick1, heap, heap1;
    vet[aux]=ler_arquivo(vet);
    
    printf("|-------------------------------------------------------------------------------------------------------------|\n");
    printf("|arqui/tempo|---boblosort---|---selectsort---|---insertionort---|---shelsort---|---quicksort---|---heapsort---|\n");
    printf("|----5000---|----");
    
    bobo = clock();
    metodo_bolha_5000(vet);
    bobo = clock() - bobo;
    printf("%f", ((float)bobo)/CLOCKS_PER_SEC);

    printf("---|----");
    selec = clock();
    metodo_selecao_5000(vet);
    selec = clock() - selec;
    printf("%f", ((float)selec)/CLOCKS_PER_SEC);

    printf("----|-----");
    inser = clock();
    metodo_insercao_5000(vet);
    inser = clock() - inser;
    printf("%f", ((float)inser)/CLOCKS_PER_SEC);

    printf("-----|---");
    shel = clock();
    metodo_shellsort_5000(vet);
    shel = clock() - shel;
    printf("%f", ((float)shel)/CLOCKS_PER_SEC);

    printf("---|----");
    quick = clock();
    metodo_quicksort_5000(vet);
    quick = clock() - quick;
    printf("%f", ((float)quick)/CLOCKS_PER_SEC); 

    printf("---|---");
    heap = clock();
    metodo_heapsort_5000(vet);
    heap = clock() - heap;
    printf("%f", ((float)heap)/CLOCKS_PER_SEC); 
//////////////////ordenação de 500 arquivos//////////////////////////////
    printf("---|\n");
    printf("|----500----|---");
    bobo1 = clock();
    metodo_bolha_500(vet);
    bobo1 = clock() - bobo1;
    printf("%f", ((float)bobo1)/CLOCKS_PER_SEC);

    printf("----|----");
    selec1 = clock();
    metodo_selecao_500(vet);
    selec1 = clock() - selec1;
    printf("%f", ((float)selec1)/CLOCKS_PER_SEC); 

    printf("----|-----");
    inser1 = clock();
    metodo_insercao_500(vet);
    inser1 = clock() - inser1;
    printf("%f", ((float)inser1)/CLOCKS_PER_SEC); 

    printf("-----|---");
    shel1 = clock();
    metodo_shellsort_500(vet);
    shel1 = clock() - shel1;
    printf("%f", ((float)shel1)/CLOCKS_PER_SEC); 

    printf("---|----"); 
    quick1 = clock();
    metodo_quicksort_500(vet);
    quick1 = clock() - quick1;
    printf("%f", ((float)quick1)/CLOCKS_PER_SEC);

    printf("---|---");
    heap1 = clock();
    metodo_heapsort_500(vet);
    heap1 = clock() - heap1;
    printf("%f", ((float)heap1)/CLOCKS_PER_SEC);
    printf("---|\n");

}