#include"stdio.h"
#include"locale.h"

int somador(int *n, int *total);

int main (void){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	int n, total=0;
	
	printf("Digite um n�mero: \n");
	scanf("%i", &n);
	
	printf("A soma dos n�meros pares at� 1 �: %i", somador(&n, &total));
		
	return 0;
}

int somador(int *n, int *total=0){
	for(int i=0; i <= *n; i++){
		if(i % 2 == 0){
			*total += i;
		}
	}
	return *total;
}
