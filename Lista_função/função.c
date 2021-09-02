#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int opc1(){
float x, desc, mili, cent ;
    printf("Digite um valor em metros\n");
    scanf("%f", &x);
        desc = x*10;
        cent = desc*10;
        mili = cent*10;
        printf("O valor que você Digitou é %.0f metros\nEsse valor em:", x);
        printf("\ndecimetros é: %.0f\nCentimetros é %.0f\nMilimetros é %.0f\n\n", desc, cent, mili); 
    
}
int opc2(){
    float num, res;
    int i;
        printf("Digite um número\n");
        scanf("%f", &num);
            for(i=0;i<=10;i++){
                res = i*num;
                printf("%.2f * %d = %.2f\n", num,i,res);
            }
}

int opc3(){
    float x, res;
        printf("Digite um preço qualquer\n");
        scanf("%f", &x);
            if(x<100){
                res = x + (x*0.10);
                printf("\nEsse produto tem um aumento de 10%%, seu valor atual é: %.2f\n", res);
            }else{
                res = x + (x*0.20);
                printf("\nEsse produto tem um aumento de 10%%, seu valor atualé: %.2f\n", res);
            }
}

int opc4(){
    double temp, res;
        printf("Digite uma temperatura em Fahrenheit\n");
        scanf("%lf", &temp);
            res = (temp-32)*5/9;
            printf("Convertendo a temperatura inserida temos %.2f°C\n", res);
}

int main(){
    setlocale(LC_ALL, "portuguese");

    int alternativa, res;

        printf("------------------------------------------------------------");
        printf("\n\nOlá sejá bem vindo!!\nEscolha qual probloma executar\n\n");
            while (alternativa !=0)
            {
               
                printf("1) Exercicio_1\n2) Exercicio_2\n3) Exercicio_3\n4) Exercicio_4\n0) Fechar Programa\n\n");
                printf("------------------------------------------------------------\n");
                    scanf("%d", &alternativa);
                        if(alternativa>0){
                            while (alternativa >5){
                                printf("\nO valor que você digitou é invalido\nTente outro valor\n");
                                scanf("%d", &alternativa);
                            }
                            
                            if(alternativa==1){ res = opc1(); }
                            if(alternativa==2){ res = opc2(); } 
                            if(alternativa==3){ res = opc3(); }
                            if(alternativa==4){ res = opc4(); }
                                printf("------------------------------------------------------------\n");
                                printf("Quer escolher outro valor?\n");
                        }
            }
        
        



}
