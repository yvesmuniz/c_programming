#include"stdio.h"

float fatorial(float result);
float ope(int n);

int main(void){
	int n;
	float result;
	scanf("%i",&n);
	printf("O resultado eh: %.2f\n", ope(n));
	
	return 0;
}

float fatorial(float result){
	float result2 = 1;
	for(int i=1; i <= result; i++){
		if(result == 0){
			return 1;
		}
		else{
			result2 = result2 * i;	
		}	
	}
	return result2;
}

float ope(int n){
	float result = 0, result3 = 0;
	
	for(int i=1; i <= n; i++){
		result = i - 1;
		result3 += i / fatorial(result);
	}
	return result3;
}


