/*
2.Faça um programa que realize o cadastro de contas bancárias com as seguintes informações:
a.Código do cliente;
b.Nome do cliente;
c.Número da conta;
d.Saldo bancário.

O banco permitira o cadastramento de apenas DEZ
contas e não podera haver mais que uma conta com
o mesmo número.
Menu de opções:
I.Cadastro de conta;
II.Exibir na tela a conta cadastrada de acordo com NDICE DO VETOR;
III.Exibir na tela a conta cadastrada de acordo com o
CÓDIGO DO CLIENTE informado;
IV.Exibir na tela a conta cadastrada de acordo com o NMERO DA CONTA do cliente informado;
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
        printf("\t3_Exibir conta com código do cliente\n\t4_Exibir conta com número da conta do cliente\n\t5_Sair\n\n");
        scanf("%d", &op);
            while(op!=5){
                while(op>5||op<1){
                    printf("\n\n[ERRO] Você digitou um valor invalido, tente outro\n\n");
                    printf("\t1_Cadastra conta\n\t2_Exibir contas cadastradas\n");
                    printf("\t3_Exibir conta com código do cliente\n\t4_Exibir conta com número da conta do cliente\n\t5_Sair\n");
                    scanf("%d", &op);
                }
                if(op==1){
                    if(cad_bank[0].codigo==0){
                        for(int i=0; i<aux; i++){
                            printf("\nQual o código do cliente ?\n");
                            scanf("%d", &cad_bank[i].codigo);
                                for(int j=0;j<i;j++){
                                    while(cad_bank[j].codigo==cad_bank[i].codigo){
                                        printf("\nEsse código já está em uso, digite um novo código\n");
                                        scanf("%d", &cad_bank[i].codigo);
                                    }
                                }
                            printf("Qual o nome do cliente ?\n");
                            fflush(stdin);
                            fgets(cad_bank[i].nome,40,stdin);
                            printf("Qual o número da conta do cliente ?\n");
                            scanf("%d",&cad_bank[i].conta);
                                for(int j=0;j<i;j++){
                                    while(cad_bank[j].conta==cad_bank[i].conta){
                                        printf("\nEssa conta já existe, digite uma conta nova valida\n");
                                        scanf("%d", &cad_bank[i].conta);
                                    }
                                }
                            printf("Qual o saldo bancario do cliente ?\n");
                            scanf("%d", &cad_bank[i].saldo);
                        }
                        printf("Cadastro concluido\n");
                    }else{
                        printf("Você ja possui o limite de cadastros.\nVocê quer cadastrar uma nova lista de clientes?");
                        printf("\n\t1_sim\t2_Não\n\n");
                        scanf("%d", &op);
                        if(op==1){
                            for(int i=0; i<aux; i++){
                                printf("Qual o código do cliente ?\n");
                                scanf("%d", &cad_bank[i].codigo);
                                printf("Qual o nome do cliente ?\n");
                                fflush(stdin);
                                fgets(cad_bank[i].nome,40,stdin);
                                printf("Qual o número da conta do cliente ?\n");
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
                    }else{printf("Ainda não foram cadastradas contas bancarias.\nCadastre alguma para ser exibida.\n\n");}
                    
                }
                if(op==3){
                    int cont;
                        if(cad_bank[0].codigo!=0){
                            printf("Qual o código do cliente?\n");
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
                            if(cont==aux){printf("\nEssa conta não existe, verifique o código se está correto.\n\n");}
                    }else{printf("Ainda não foram cadastradas contas bancarias.\nCadastre alguma para ser exibida.\n\n");}
                    

                }
                if(op==4){
                    int cont;
                    if(cad_bank[0].codigo!=0){
                        printf("Qual o número da conta do cliente?\n");
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
                        if(cont==aux){printf("\nEssa conta não existe, verifique se o número da conta está correto.\n\n");}   
                    }else{printf("Ainda não foram cadastradas contas bancarias.\nCadastre alguma para ser exibida.\n\n");}
                }
                printf("\n\t1_Cadastra conta\n\t2_Exibir contas cadastradas\n");
                printf("\t3_Exibir conta com código do cliente\n\t4_Exibir conta com número da conta do cliente\n\t5_Sair\n\n");
                scanf("%d", &op);
            }    
}

