/*
1. Elabore UM programa que permita o cadastro e a
impressão das seguintes estruturas:
Estrutura Professor
    cpf:até 11 caracteres (sem formatação)
    Nome: até 30 caracteres
    Titulação: até 40 caracteres

Estrutura Cliente
    Código: tipo inteiro
    Nome: até 30 caracteres
    Telefone: até 12 caracteres
    e-mail: até 40 caracteres
2. Cada estrutura poderá armazenar até 10 cadastros;
3. Crie um MENU que permita acessar e cadastrar tais informações:
1)Cadastro de Professor
2)Cadastro de Cliente
3)Sair
4. Somente quando o usuário escolher a opção SAIR a execução do programa
deverá ser finalizada.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define aux 1

struct professor{
    int cpf[11];
    char nome[30];
    char titulacao[40];
}prof[aux];

struct cliente{
    int codigo;
    char nome[30];
    int telefone[12];
    char email[40];
}clie[aux];

int main(){
    setlocale(LC_ALL, "portuguese");

        int op;
            printf("\n\nQuem você deseja cadastrar primeiro ?\n\n");
            printf("1_Professor \t2_Cliente\t3_Sair\n");
            scanf("%d", &op);
                while (op!=3)
                {
                    if(op==1){
                        printf("\nDigite os dados do professor\n\n");
                            for( int i=0;i<aux;i++){
                                printf("Qual o CPF do %d° professor\n", i+1);
                                scanf("%d", &prof[i].cpf);
                                printf("Qual o nome do %d° professor\n", i+1);
                                fflush(stdin);
                                fgets(prof[i].nome,30,stdin);
                                printf("Qual a titulação do %d° professor\n", i+1);
                                fflush(stdin);
                                fgets(prof[i].titulacao,40,stdin);
                            }
                            printf("\nCadastro concluido com sucesso\n");
                            printf("--------------Ficha de Professores--------------\n");
                            for( int i=0;i<aux;i++){
                                printf("%d° professor..........%s",i+1, prof[i].nome);
                                printf("CPF: %d\n", prof[i].cpf);
                                printf("Titulação: %s", prof[i].titulacao);
                            }
                            printf("\nQuem você quer cadastrar ágora?\n1_Professor\t2_Cliente\t3_Sair\n");
                            scanf("%d", &op);
                    }
                    if(op==2){
                        printf("digite os dados do Cliente\n");
                            for(int i=0;i<aux;i++){
                                printf("Qual o código do %d° cliente ?\n", i+1);
                                scanf("%d", &clie[i].codigo);
                                printf("Qual o nome do %d° cliente\n", i+1);
                                fflush(stdin);
                                fgets(clie[i].nome,30,stdin);
                                printf("Qual o telefone do %d° cliente?\n", i+1);
                                scanf("%d", &clie[i].telefone);
                                printf("Qual o e-mail do cliente ?\n");
                                fflush(stdin);
                                fgets(clie[i].email,40,stdin);
                            }
                            printf("\nCadastro concluido\n");
                            printf("--------------Ficha de Clientes--------------\n");
                            for( int i=0;i<aux;i++){
                                printf("%d° Cliente..........%s",i+1,clie[i].nome);
                                printf("Código: %d\n",clie[i].codigo);
                                printf("Telefone: %d\n", clie[i].telefone);
                                printf("E-mail: %s",clie[i].email);
                            }
                            printf("\nQuem você quer cadastrar ágora?\n1_Professor\t2_Cliente\t3_Sair\n");
                            scanf("%d", &op);
                    }
                }
                printf("Fim de cadastros\n\n\n");
                

}