#include"stdio.h"
#include"locale.h"


void soma(int *n);

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int n = 0;
	
	printf("Digite quantos n�meros deseja armazenar: \n");
	scanf("%i",&n);
	
	soma(&n);
	
	return 0;
}

void soma(int *n){
	int soma, subtracao, numero, maior=0, menor=0;
		
	for(int i=0; i< *n; i++){
		printf("Digite o %i� n�mero: ",i+1);
		scanf("%i",&numero);
		if(numero >= maior){
			maior = numero;
		}
		else{
			menor = numero;
		}
	}
	soma = maior + menor;
	subtracao = maior - menor;
	
	printf("A soma �: %i\n", soma);
	printf("A subtra��o �: %i", subtracao);
}
