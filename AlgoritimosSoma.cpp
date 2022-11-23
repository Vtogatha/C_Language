#include <stdio.h>

int main(){
	
	int num1, num2, soma, mult;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero:\n");
	scanf("%d", &num2);
	
	
	soma = num1 + num2;
	mult = soma * num1;
	
	printf("O resultado da multiplicacao e %d", mult);
}
