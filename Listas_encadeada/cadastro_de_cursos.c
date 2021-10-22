#include <stdio.h>
#include <stdlib.h>
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

void inserir_valor(Lista *lista, int cod, char nome[],char turno[]){
	No *valor;	
	valor = (No*)malloc(sizeof(No));
	valor->cod = cod;
	valor->nome[30] = nome;
	valor->turno[20] = turno;
	valor->proximo = lista->inicio ;
	lista->inicio = valor;
}
void imprimir(Lista *lista){
    No *inicio = lista->inicio;
		int i;
			for(i=inicio;i!=NULL;i=inicio->proximo){
				printf("%d\n", inicio->cod);
				puts(inicio ->nome[30]);
				puts(inicio ->turno[20]);
			}
        		
        //inicio = inicio->proximo;
    
    printf("\n\n");
    return;
}

int main (){
setlocale(LC_ALL, "portuguese");
    Lista lista;
        lista.inicio = NULL;
        
        int op,cod;
        char nome[30], turno[20];
        
            
            do{
            printf("\n\n1_Adissionar Curso\n2_Imprimir\n5_Sair\n\nO que você quer fazer?... ");
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
                        
                        inserir_valor(&lista, cod, nome, turno);
                        break;
                    case 2:
                        imprimir(&lista);
                        break;
                }
                
            }while(op!=5);
    
}