#include"stdio.h"

int fibonacci(int n);

int main(void){
	int n;
	scanf("%i",&n);
	printf("\nO termo %i da Sequencia Fibonacci eh: %i",n,fibonacci(n));
	return 0;
	
}
int fibonacci(int n){
	int a, b=1,c=0;
	
	for(int i=0 ;i < n; i++){
		if(i==0||i==1){
			b=1;
			c=1;
		}
		else{
			a = b + c;
			c = b;
			b = a;
		}
		printf("%i\t",b);
	}
	return a; 
}
