#include"stdio.h"

float ope(int n);

int main(void){
	int n;
	scanf("%i",&n);
	printf("Resultado = %.3f", ope(n));
	return 0;
}

float ope(int n){
	float result = 0, a = 1, b = 0;
	for(int i=1; i <= n; i++){
		if (i==1){
			a=1;
			b=n;
			result += -(a / b);
      printf("\ni == 1\n");
		}
		else if(i%2 == 0){
			a = i;
			b = n - i + 1;
			result += (a / b);
      printf("\ni == par\n");
		}
		else{
			a = i;
			b= n - i + 1;
			
			result += - (a / b);
      printf("\ni == impar\n");
		}
		printf("a = %.1f\nb = %i - %i =>> b= %.1f\n", a,n,i,b);	
	}
	return result;
}
