#include <stdio.h>

int main(){
	
	int quant_minima, quant_maxima;
	float estoque_medio;
	
	printf("Digite a quantidade minima:\n");
	scanf("%d", &quant_minima);
	
	printf("Digite a quantidade maxima:\n");
	scanf("%d", &quant_maxima);
	
	estoque_medio = (quant_minima + quant_maxima) / 2;
	
	printf("O valor do estoque medio foi:%.2f", estoque_medio);
	
	
	
	
	
	
	
	
	
	
}
