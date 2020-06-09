#include"stdio.h"

float multiplicador(int n, int m);

int main(void){
	
	int n, m;
	
	printf("Digite o primeiro e segundo numero: \n");
	scanf("%i %i",&n,&m);
	
	printf("O resultado eh: %.2f", multiplicador(n,m));
	
	return 0;
}

float multiplicador(int n, int m){
	float somaResultado=0;
	float resultado ;
  int tam, n1 = 1, n2 = 1;
  if(n > m){
    tam = n;
  } else{
    tam = m;
  }
	for(int i=1; i <= tam; i++){
    printf("%i * %i \t", n1, n2);
    resultado = n1 * n2;
    somaResultado += resultado;
    if(n1 < n){
      n1++;
    }
    if(n2 < m){
      n2++;
    }
    
	}
	return somaResultado;
}
