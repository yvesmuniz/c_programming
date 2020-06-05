#include"stdio.h"
#include"locale.h"

int parOuImpar(int *numero);

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int numero, contador;
	int totalPares=0;
	int totalImpares=0;
	int somaPar=0;
	int somaImpar=0;
	
	do{
		printf("\nDigite o %iº numero: \n", contador + 1);
		scanf("%i", &numero);
		parOuImpar(&numero);
		if (numero <= 0){
			continue;
		}
		if(numero % 2 == 0){
			totalPares += 1;
			somaPar += numero;
		}
		else{
			totalImpares+=1;
			somaImpar += numero;
		}
		contador+=1;
	
	} while (numero >= 1);
	
	printf("A quantidade de pares é: %i\n A soma dos numeros pares é: %i\n\n", totalPares, somaPar);
	printf("A quantidade de impares é: %i\n A soma dos numeros impares é: %i\n\n", totalImpares, somaImpar);
	return 0;
}

int parOuImpar(int *numero){
	if (*numero %2 == 0){
		return 1;
	}
	return 0;
}
