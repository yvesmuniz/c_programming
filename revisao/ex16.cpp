#include"stdio.h"
int fatorial(int n);
int hiperfatorial(int n);

int main(void){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	printf("O fatorial de !%d eh:  %d\n E o hiperfatorial eh: %d", n, fatorial(n), hiperfatorial(n));	

	return 0;
}

int fatorial(int n){
	int result=1,result2=1, i=2, j;
	if(n==0){
		return 1;
	}
	while (i<=n){
		result=result*i;
		i++;
	}
	return result;
}

int hiperfatorial(int n){
	int result = 1, result2 = 1, i = 2, j;
	if(n == 0){
		return 1;
	}
	while (i <= n){
		result = result * i;
		i++;
	}
	for (int j=1; j <= n; j++){
		result2 = (result * result2);
		printf("%d *  %d\n", result, result2);//test
	}
	return result2;
}
