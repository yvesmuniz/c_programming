#include"stdio.h"

int fatorial(int n);

int main(void){
	int n;
	printf("Digite um numero maior ou igual a zero: ");
	scanf("%i",&n);
	
	printf("O fatorial de !%i eh:  %i", n, fatorial(n));	

	return 0;
}

int fatorial(int n){
	int result = 1, i, j;
	if(n == 0){
		return 1;
	}
	for(i=1 ;i <= n; i++){
		result = result * i;	
	}
	return result;
}
