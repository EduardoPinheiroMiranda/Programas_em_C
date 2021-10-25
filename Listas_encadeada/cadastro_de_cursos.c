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

void imprimir(Lista *lista){
    No *inicio = lista->inicio;
			while(inicio!=NULL){
				printf("%d\n", inicio->cod);
                printf("%s",inicio->nome);
				printf("%s\n", inicio ->turno);
                inicio = inicio->proximo;
			}
    
    printf("\n\n");
   
}

int main (){
setlocale(LC_ALL, "portuguese");
    Lista lista;
    lista.inicio = NULL;

        int op,cod;
        char nome[30], turno[20];
        
            do{
            printf("\n1_Adissionar Curso\n2_Imprimir\n5_Sair\n\nO que você quer fazer?... ");
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
                }
                
            }while(op!=5);
    
}