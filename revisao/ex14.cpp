#include"stdio.h"

double exponencial(double n, double m);

int main(void){
	double n, m;
	printf("Digite o numero: ");
	scanf("%lf", &n);
  	printf("Digite expoente: ");
	scanf("%lf", &m);
	
	printf("O resultado eh: %f", exponencial(n,m));		
	return 0;
}

double exponencial(double n, double m){
	double result = 1;
	if(m == 0){
		return 0;
	} 
	else if(m > 0){
		for (int i=1; i <= m; i++){
		result *= n;
		printf("%.1f *  %.1f\t", n, result);
		}
	}
	//Dada uma potência x E– y, com x e y reais, o seu resultado é igual ao inverso de x elevado a y.
	else if(m < 0){
		n = 1/n; //inverso de n
    	m = m - m -m; //invertendo expoente
    	printf("%f\n", n);
    	printf("%f\n", m);
    	
		for (int i=1; i <= m; i++){
		result *= n;
		printf("%f *  %f\t", n, result);
		}
	}
	
	return result;
}
