#include"stdio.h"
#include"locale.h"

void imposto(float *salario);

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	float salario;
	
	printf("Digite seu salário: \n");
	scanf("%f",&salario);
	
	imposto(&salario);	
	
	return 0;
}

void imposto(float *salario){
	if(*salario<2246.75){
		printf("Isento de imposto");	
	}
	else if((*salario>=2246,76) && (*salario<=2995,70)){
		printf("Você irá pagar R$ %.2f de impostos", *salario * (7.5/100));
	}
	else if((*salario>=2995,71) && (*salario<=3743,19)){
		printf("Você irá pagar R$ %.2f de impostos", *salario * (15.5/100));
    }
    else{
    	printf("Você irá pagar R$ %.2f de impostos", *salario * (22.5/100));
	}
}
