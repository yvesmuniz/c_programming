#include"stdio.h"
#include"stdlib.h"
#include"locale.h"]

int maiorN(int a, int *maiorNumero);

int main (void){
	setlocale(LC_ALL,"Portuguese");
	
	int maiorNumero;
	
	maiorN(20,&maiorNumero); 

	printf("\nO maior número é: %i", maiorNumero);	
	return 0;
}

int maiorN(int a, int *maiorNumero=0){
	int numeros[a];
	for(int i=0; i < a; i++){
		printf("Digite o %iº numero: \n", i+1);
		scanf("%i",&numeros[i]);
		if (numeros[i]>*maiorNumero){
			*maiorNumero = numeros[i];
		}
	}
	return *maiorNumero;	
}

