#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct No{
	int cod;
	char nome[30];
	char turno[20];
	struct No *proximo;
}No;

typedef struct{
    No *inicio;
}Lista;

void inserir_valor(Lista *lista, int cod, char nome[], char turno[]){	
    No *no ,*valor = (No*)malloc(sizeof(No));
    valor->cod = cod;
	strcpy(valor->nome, nome);
	strcpy(valor->turno, turno);

        if(lista->inicio==NULL){
            lista->inicio=valor;
        }else{
                no = lista->inicio;
                while(no->proximo != NULL)
                    no = no->proximo;
                no->proximo = valor;
        }       
}


void excluir_valor(Lista *lista, int cod){
    No *inicio = lista->inicio;
    No *excluir = NULL;
    if(inicio != NULL && lista->inicio->cod == cod){
        excluir = lista->inicio;
        lista->inicio = excluir->proximo;
    }else{
        while(inicio != NULL && inicio->proximo != NULL && inicio->proximo->cod != cod){
            inicio = inicio->proximo;
        }
        if(inicio != NULL && inicio->proximo != NULL){
            excluir = inicio->proximo;
            inicio->proximo = excluir->proximo; 
        }
    }
    if(excluir != NULL){
        free(excluir);
    }
}






void imprimir(Lista *lista){
    No *inicio = lista->inicio;
                printf("------------------------------------------------------\n");
                printf("                       cursos                         \n");
                printf("------------------------------------------------------\n");
			while(inicio!=NULL){
				printf("%d\t", inicio->cod);
                printf("%s\t",inicio->nome);
				printf("%s\n", inicio ->turno);
                inicio = inicio->proximo;
			}
                printf("------------------------------------------------------\n");
    
    printf("\n\n");
   
}

int main (){
setlocale(LC_ALL, "portuguese");
    Lista lista;
    lista.inicio = NULL;

        int op,cod;
        char nome[30], turno[20];
        
            do{
            //1
            printf("------------------------------\n");
            printf("\t1_Adissionar Curso\n\t2_Imprimir\n\t3_Excluir curso\n\t5_Sair\n");
            printf("------------------------------\nO que você quer fazer?... ");
            scanf("%d", &op);
            
                switch(op){
                    case 1:
						printf("--------------------------");
                        printf("\n\nCódigo do curso... ");
                        scanf("%d",&cod);
                        printf("Nome do curso... ");
                        fflush(stdin);
                        fgets(nome,30,stdin);
                        printf("Turno do curso... ");
                        fflush(stdin);
                        fgets(turno,20,stdin);
						printf("\n--------------------------");
                        inserir_valor(&lista,cod,nome,turno);
                        break;
                    case 2:
                        imprimir(&lista);
                        break;
                    case 3:
                        printf("Qual o código do curso que você quer excluir?\n");
                        scanf("%d", &cod);
                        excluir_valor(&lista, cod);
                }
                
            }while(op!=5);
    
}