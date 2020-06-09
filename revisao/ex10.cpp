#include"stdio.h"

void funcao(int n);

int main(void){
	
	int n;
	while(n < 1){
		printf("Digite um numero inteiro maior ou igual a 1: ");
		scanf("%i",&n);
	}
	
	funcao(n);	
		
	return 0;
}

void funcao(int n){
	for (int i=2; i <= n; i++){
		if(i%2 == 0){
			printf("\n%i + 1\n", i); 
		}
		else{
			printf("%i - 1", i);
		}
	}
}
