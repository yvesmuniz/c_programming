#include"stdio.h"

int funcao(int n);

int main(void){
	int n;
	
	printf("Digite um numero maior que 0: \n");
	scanf("%i",&n);	
	
	
	printf("O resultado eh: %i", funcao(n));

	return 0;
}

int funcao(int n){
	int flag=1;
	int result=1;

	for(int i=2; i <= ((2*n)-1); i++){
		if(flag == 1){
			printf("%i - %i\t", result, i);
			result=result-i;
			printf("=%i\t\n", result);
		}
		else{
			printf("%i + %i\t", result, i);
			result=result+i;
			printf("= %i\n", result);
		}
		flag = !flag;
	}
	return result;
}
