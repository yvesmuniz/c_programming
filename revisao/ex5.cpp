#include"stdio.h"
#include"locale.h"

float imprimir(float *numero);

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	float numero;
	float resultado=0;
	float contador =0;
	
	printf("Digite um número: \n");
	scanf("%f",&numero);

	printf("Último resultado: %.2f", imprimir(&numero));
	
	return 0;
}

float imprimir(float *numero){
	float resultado = *numero / 2;
	while (resultado > 1){
		resultado = resultado / 2;	
	}
return resultado;
}
