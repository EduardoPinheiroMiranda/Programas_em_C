#include <stdio.h>
#include <stdlib.h>

//Escreva um algoritmo em C que calcule a média simples (aritmética) de 3 valores quaisquer.
//Utilize as variáveis valor1, valor2 e valor3. Em seguida, determine de o mesmo está aprovado (média maior
//ou igual a 70) ou reprovado (média inferior a 70).

int main()
{
    float valor1, valor2, valor3, media;

        printf("Ola!! aqui vamos calcular sua media escolar\n");
        printf("informe sua treis notas:\n");
        scanf("%f %f %f", &valor1, &valor2, &valor3);

            media = (valor1 + valor2 + valor3)/3;

                    if(media<70)
                    {
                        printf("sua media foi: %.2f\n voce foi reprovado\nMelhor estudar mais da proxima vez :( \n\n\n\n", media);
                    }else{
                        printf("sua media foi: %.2f\n voce foi aprovado\nMeus parabens!! :D \n\n\n\n", media);
                    }

    return 0;
}