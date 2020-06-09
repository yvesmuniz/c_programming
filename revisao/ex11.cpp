#include"stdio.h"

bool primo(int n);

int main(void){
	int n;
	while(n < 1){
		printf("Digite um numero maior que 1: \n");
		scanf("%i", &n);
	}
	
	if(primo(n)){
		printf("O numero %i eh primo!!\n",n);
	}
	else{
		printf("O numero %i nao eh primo!!\n",n);
	}
	
	return 0;
}

bool primo(int n){
	bool result = true;
	for(int i=2; i < n; i++){
		if(n%i == 0){	
			return 0;	
		}
		else{
			result = true;
		}
	}
	return result;
}
