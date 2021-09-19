/*
1.Faça um programa que realize o cadastro de contas bancárias com as seguintes informações:
a.Código do cliente;
b.Nome do cliente;
c.Número da conta;
d.Saldo bancário.

O banco permitirá o cadastramento de apenas DEZ
contas e não poderá haver mais que uma conta com
o mesmo número.
Menu de opções:
I.Cadastro de conta;
II.Exibir na tela a conta cadastrada de acordo com ÍNDICE DO VETOR;
III.Exibir na tela a conta cadastrada de acordo com o
CÓDIGO DO CLIENTE informado;
IV.Exibir na tela a conta cadastrada de acordo com o NÚMERO DA CONTA do cliente informado;
V.Sair.
*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

struct dados_bancarios{
    int codigo;
    char nome[50];
    int conta;
    int saldo;
}cod_banc;

int main(){
    int x;
        printf("----------Cadastro bancarios----------\n");
        printf("1_Cadastro de conta\n2_Exibir na tela a conta cadastradade ");

}