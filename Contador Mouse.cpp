#include <stdio.h>

int main(){
	//Declarar Variaveis
	int contador_total = 0, contador_sit1 = 0, contador_sit2 = 0, contador_sit3 = 0, contador_sit4 = 0, identificacao , defeito;
	//Entradas pelo Usuario
	printf("Informe a identificacao:\n");
	scanf("%d", &identificacao);
	//Comando de repeticao
	while(identificacao != 0 ){
		
		printf("1 - Necessita de esfera.\n");
		printf("2 - Necessita de limpeza.\n");
		printf("3 - Necessita de troca do cabo ou conector.\n");
		printf("4 - Quebrado ou Inutilizado.\n");
		printf("Informe o tipo do defeito:\n");
		scanf("%d", &defeito);
		//Processamentos
		if(defeito == 1){
			contador_sit1 = contador_sit1 + 1;
		}
		if(defeito == 2){
			contador_sit2 = contador_sit2 + 1;
		}
		if(defeito == 3){
			contador_sit3 = contador_sit3 + 1;
		}
		if(defeito == 4){
			contador_sit4 = contador_sit4 + 1;
		}
		contador_total = contador_total + 1;
		//Entradas pelo Usuario
		printf("Informe a identificacao:\n");
		scanf("%d", &identificacao);	
	}
	float p1, p2, p3, p4; //(float) cast
	p1 = ((float)contador_sit1 / (float)contador_total *100 );
	p2 = ((float)contador_sit2 / (float)contador_total *100 );
	p3 = ((float)contador_sit3 / (float)contador_total *100 );
	p4 = ((float)contador_sit4 / (float)contador_total * 100.00 );
	//Saidas
	printf("Quantidade de Mouses %d\t\n", contador_total);
	printf("Situacao \t\t\t Quantidade \t Percentual \t\n\n");
	printf("Necessita de esfera\t\t\t %d\t %.2f%% \n", contador_sit1, p1);
	printf("Necessita de limpeza\t\t\t %d\t %.2f%% \n", contador_sit2, p2);
	printf("Necessita de troca do cabo ou conector\t %d\t %.2f%% \n", contador_sit3, p3);
	printf("Quebrado ou Inutilizado\t\t\t %d\t %.2f%% \n", contador_sit4, p4);
	
	
	
}
