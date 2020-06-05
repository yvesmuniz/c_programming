#include"stdio.h"
#include"locale.h"

float resultado(int *n1, int *n2);

int main(void){
	
	int n1;
	int n2;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o primeiro número: \n");
	scanf("%i",&n1);	
	printf("Digite o segundo número: \n");
	scanf("%i",&n2);
	
	
	printf("O resultado da operação é: %.3f", resultado(&n1,&n2));
		
	
	return 0;
}

float resultado(int *n1, int *n2){
	int maiorNumero, menorNumero; //verficando qual é o maior numero digitado
	float resultado = 1.00;
	if(n1<n2){
		maiorNumero=*n1;
		menorNumero=*n2;
	}
	else{
		maiorNumero=*n2;
		menorNumero=*n1;
	}
	for (int i=1;i<=maiorNumero;i++){ //aplicando a operacao
		
		if(i%2==0){
			resultado=(i-menorNumero)*resultado;
		}
		else{
			resultado=(i+menorNumero)*resultado;
		}
	}
	return resultado;
}


