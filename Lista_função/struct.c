#include <stdio.h>
#include <stdlib.h>
#define aux 2
struct idade{
    int dia_nascimento;
    int mes_nascimento;
    int ano_nascimento;
};
struct endereso{
    int numero;
    char rua[20];
    char bairro[20];
    char cidade[20];
    
};
struct empresa_funcionario{
        char nome[20];
        int cpf;
        int tel;
        char sexo;
     
     struct idade data_idade;
     struct endereso end;
}cadastro_funcionario[2];
    
int main()
{
    int i;
    
    for(i=0; i<aux;i++){
        
        printf("------------FICHA DE CADASTRAMENTO------------\n");
        printf("nome do funcionario........................:  ");
        fgets(cadastro_funcionario[i].nome,20,stdin);
        printf("Qual o CPF do funcionario..................:  ");
        scanf("%d", &cadastro_funcionario[i].cpf);
        printf("Qual o numero de contato do funcionario....:  ");
        scanf("%d", &cadastro_funcionario[i].tel);
        printf("Qual o sexo do funcionario.................:  ");
        scanf("%s", &cadastro_funcionario[i].sexo);
        printf("qual o dia do nascimento do funcionario....:  ");
        scanf("%d", &cadastro_funcionario[i].data_idade.dia_nascimento);
        printf("Qual o mês de nascimento...................:  ");
        scanf("%d", &cadastro_funcionario[i].data_idade.mes_nascimento);
        printf("Qual o ano de nascimento...................:  ");
        scanf("%d", &cadastro_funcionario[i].data_idade.ano_nascimento);
        printf("Qual o numero da casa do funcionario.......:  ");
        scanf("%d", &cadastro_funcionario[i].end.numero);
        printf("Qual a rua do funcionario..................:  ");
        fflush(stdin);
        gets(cadastro_funcionario[i].end.rua);
        printf("Qual o bairro do funcionario...............:  ");
        fgets(cadastro_funcionario[i].end.bairro,20,stdin);
        printf("Qual a cidade do funcionario...............:  ");
        fgets(cadastro_funcionario[i].end.cidade,20,stdin);
        printf("\n------------cadastro concluido----------------\n");
        
    }
    for(i=0;i<aux;i++){
        printf("----------------------ficha--------------------\n");
        printf("nome........: %s", cadastro_funcionario[i].nome);
        printf("CPF.........: %i\n", cadastro_funcionario[i].cpf);
        printf("telefone....: %i\n", cadastro_funcionario[i].tel);
        printf("sexo........: %c\n", cadastro_funcionario[i].sexo);
        printf("dia_nas.....: %i\n", cadastro_funcionario[i].data_idade.dia_nascimento);
        printf("mes_nas.....: %i\n", cadastro_funcionario[i].data_idade.mes_nascimento);
        printf("ano_nas.....: %i\n", cadastro_funcionario[i].data_idade.ano_nascimento);
        printf("numero_end..: %i\n", cadastro_funcionario[i].end.numero);
        printf("rua_end.....: %s\n", cadastro_funcionario[i].end.rua);
        printf("bairro......: %s", cadastro_funcionario[i].end.bairro);
        printf("cidade......:%s\n", cadastro_funcionario[i].end.cidade);


    }
    
    return 0;
}