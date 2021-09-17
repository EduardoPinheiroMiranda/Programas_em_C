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
#define aux 10

struct professor{
    int cpf[11];
    char nome[30];
    char titulação[40];
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
            printf("Quem você deseja cadastrar primeiro ?\n");
            printf("1_Professor \t2_Cliente\t3_Sair\n");
            scanf("%d", &op);
                while (op!=3)
                {
                    
                }
                

}