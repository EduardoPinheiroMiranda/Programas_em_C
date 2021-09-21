/*
1.Fa�a um programa que realize o cadastro de contas banc�rias com as seguintes informa��es:
a.C�digo do cliente;
b.Nome do cliente;
c.N�mero da conta;
d.Saldo banc�rio.

O banco permitir� o cadastramento de apenas DEZ
contas e n�o poder� haver mais que uma conta com
o mesmo n�mero.
Menu de op��es:
I.Cadastro de conta;
II.Exibir na tela a conta cadastrada de acordo com �NDICE DO VETOR;
III.Exibir na tela a conta cadastrada de acordo com o
C�DIGO DO CLIENTE informado;
IV.Exibir na tela a conta cadastrada de acordo com o N�MERO DA CONTA do cliente informado;
V.Sair.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define aux 2

struct cont_bancaria{
    int codigo;
    char nome[40];
    int conta;
    int saldo;
    
}cad_bank[aux];

int main(){
setlocale(LC_ALL, "portuguese");
    int op=1;
        
        printf("\n\nCadastro de conta bancaria:\n\n");
        printf("\t1_Cadastra conta\n\t2_Exibir contas cadastradas\n");
        printf("\t3_Exibir conta com c�digo do cliente\n\t4_Exibir conta com n�mero da conta do cliente\n\t5_Sair\n\n");
        scanf("%d", &op);
            while(op!=5){
                while(op>5||op<1){
                    printf("\n\n[ERRO] Voc� digitou um valor invalido, tente outro\n\n");
                    printf("\t1_Cadastra conta\n\t2_Exibir contas cadastradas\n");
                    printf("\t3_Exibir conta com c�digo do cliente\n\t4_Exibir conta com n�mero da conta do cliente\n\t5_Sair\n");
                    scanf("%d", &op);
                }
                if(op==1){
                    if(cad_bank[0].codigo==0){
                        for(int i=0; i<aux; i++){
                            printf("\nQual o c�digo do cliente ?\n");
                            scanf("%d", &cad_bank[i].codigo);
                                for(int j=0;j<i;j++){
                                    while(cad_bank[j].codigo==cad_bank[i].codigo){
                                        printf("\nEsse c�digo j� est� em uso, digite um novo c�digo\n");
                                        scanf("%d", &cad_bank[i].codigo);
                                    }
                                }
                            printf("Qual o nome do cliente ?\n");
                            fflush(stdin);
                            fgets(cad_bank[i].nome,40,stdin);
                            printf("Qual o n�mero da conta do cliente ?\n");
                            scanf("%d",&cad_bank[i].conta);
                                for(int j=0;j<i;j++){
                                    while(cad_bank[j].conta==cad_bank[i].conta){
                                        printf("\nEssa conta j� existe, digite uma conta nova valida\n");
                                        scanf("%d", &cad_bank[i].conta);
                                    }
                                }
                            printf("Qual o saldo bancario do cliente ?\n");
                            scanf("%d", &cad_bank[i].saldo);
                        }
                        printf("Cadastro concluido\n");
                    }else{
                        printf("Voc� ja possui o limite de cadastros.\nVoc� quer cadastrar uma nova lista de clientes?");
                        printf("\n\t1_sim\t2_N�o\n\n");
                        scanf("%d", &op);
                        if(op==1){
                            for(int i=0; i<aux; i++){
                                printf("Qual o c�digo do cliente ?\n");
                                scanf("%d", &cad_bank[i].codigo);
                                printf("Qual o nome do cliente ?\n");
                                fflush(stdin);
                                fgets(cad_bank[i].nome,40,stdin);
                                printf("Qual o n�mero da conta do cliente ?\n");
                                scanf("%d",&cad_bank[i].conta);
                                printf("Qual o saldo bancario do cliente ?\n");
                                scanf("%d", &cad_bank[i].saldo);
                            }
                            printf("Cadastro concluido\n");
                        }
                    }
                    
                }
                if(op==2){
                    if(cad_bank[0].codigo!=0){
                        for(int i=0; i<aux;i++){
                            printf("%s", cad_bank[i].nome);
                            printf("%d\n", cad_bank[i].codigo);
                            printf("%d\n", cad_bank[i].conta);
                            printf("%d\n", cad_bank[i].saldo);
                            printf("\n");
                        }    
                    }else{printf("Ainda n�o foram cadastradas contas bancarias.\nCadastre alguma para ser exibida.\n\n");}
                    
                }
                if(op==3){
                    int cont;
                        if(cad_bank[0].codigo!=0){
                            printf("Qual o c�digo do cliente?\n");
                            scanf("%d", &op);
                            for(int i=0;i<aux;i++){
                                if(cad_bank[i].codigo==op){
                                    printf("%s", cad_bank[i].nome);
                                    printf("%d\n", cad_bank[i].codigo);
                                    printf("%d\n", cad_bank[i].conta);
                                    printf("%d\n", cad_bank[i].saldo);
                                }
                                if(cad_bank[i].codigo!=op){cont++;}
                            }
                            if(cont==aux){printf("\nEssa conta n�o existe, verifique o c�digo se est� correto.\n\n");}
                    }else{printf("Ainda n�o foram cadastradas contas bancarias.\nCadastre alguma para ser exibida.\n\n");}
                    

                }
                if(op==4){
                    int cont;
                    if(cad_bank[0].codigo!=0){
                        printf("Qual o n�mero da conta do cliente?\n");
                        scanf("%d", &op);
                        for(int i=0;i<aux;i++){
                            if(cad_bank[i].conta==op){
                                printf("%s", cad_bank[i].nome);
                                printf("%d\n", cad_bank[i].codigo);
                                printf("%d\n", cad_bank[i].conta);
                                printf("%d\n", cad_bank[i].saldo);
                            }
                            if(cad_bank[i].conta!=op){cont++;}
                        }
                        if(cont==aux){printf("\nEssa conta n�o existe, verifique se o n�mero da conta est� correto.\n\n");}   
                    }else{printf("Ainda n�o foram cadastradas contas bancarias.\nCadastre alguma para ser exibida.\n\n");}
                }
                printf("\n\t1_Cadastra conta\n\t2_Exibir contas cadastradas\n");
                printf("\t3_Exibir conta com c�digo do cliente\n\t4_Exibir conta com n�mero da conta do cliente\n\t5_Sair\n\n");
                scanf("%d", &op);
            }    
}