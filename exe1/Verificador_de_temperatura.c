#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese"); 

	int clima[121],i;
	int menor=9999, maior=0, media=0, dias=0;

	printf("\n\n");
	srand(time(NULL));
    
		for(i=0;i<121;i++){
			clima[i] = 15+(rand() % 26);
			media = media + clima[i];
			printf("%d ", clima[i]);
		}
		media = media/121;//media da temperatura no periodo de 121 dias
        for(i=0;i<121;i++){
			if(clima[i] < menor){//menor temperatura
				menor = clima[i];
			}	
			if(clima[i] > maior ){//maior temperatura
				maior = clima[i];
			}
			if(clima[i]<media){
				dias = dias + 1;
			}
		}
		printf("\n\nA maior temperatura é: %d°c\nA menor temperatura é: %d°c\nA mediadas temperaturas é %d°c", maior, menor, media );
		printf("\nNo periodo de %d dias a temperatura ficou abaixo da media\n\n\n",dias);
}
