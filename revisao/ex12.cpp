#include"stdio.h"

float funcao();

int main(void){
	printf("O resultado eh: %.2f",funcao());
	return 0;
}

float funcao(){
	float a = 1, b = 1;
	float result = 1;
	for(int i=1; i < 51; i++){
		b=i;
		if(i != 1){
			a = a + 2;
		}
		
		result = (a/b) + result;
		printf("%.1f / %.1f\t",a,b);
	}
	return result;
}
