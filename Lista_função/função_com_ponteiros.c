#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(float *nu, float *nu2){
    printf("%.1f + %.1f = %.1f", *nu, *nu2,*nu + *nu2);
}
float subtracao(float *nu, float *nu2){
    printf("%.1f - %.1f = %.1f", *nu, *nu2,*nu-*nu2);
}
void divisao(float *nu, float*nu2){
    printf("%.1f / %.1f = %.1f", *nu, *nu2,*nu / *nu2);
}
void multiplicacao(float *nu, float *nu2){
    printf("%.1f * %.1f = %.1f", *nu, *nu2,*nu * *nu2);
}
int main(){
    setlocale(LC_ALL, "Portuguese");
        int op;
        float num, num2;
        float *n1= &num;
        float *n2= &num2;

            printf("Digite um número\n");
            scanf("%f", &num);
            printf("Digite outro número\n");
            scanf("%f", &num2);
            printf("O que você quer fazer com esses valores ?\n");
            printf("1_adição\n2_subtração\n3_Divisão\n4_Multiplicação\n0_Sair do código\n");
            scanf("%d", &op);
                while (op<0 || op>4){
                    printf("Você não escolheu uma opção valida, tente novamente\n");
                    printf("\n1_adição\n2_subtração\n3_Divisão\n4_Multiplicação\n0_Sair do código\n");
                    scanf("%d", &op);
                }
                    while (op!=0){
                        if(op==1){soma(n1,n2);}
                        if(op==2){subtracao(n1,n2);}
                        if(op==3){divisao(n1,n2);}
                        if(op==4){multiplicacao(n1,n2);}
                        printf("\n\n1_adição\n2_subtração\n3_Divisão\n4_Multiplicação\n0_Sair do código\n");
                        scanf("%d", &op);
                    }
                    
                    


}



