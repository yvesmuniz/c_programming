#include"stdio.h"
#include"time.h"


void preencheVetor(int *v,int tam);
void verificaVetor(int *v,int tam, int n);

int main(){
	int v[40],n;
	
	srand(time(NULL));
	
	preencheVetor(v,40);
	
	printf("Digite o numero: \n");
	scanf("%i",&n);
	
	verificaVetor(v,40,n);
	return 0;
}

void preencheVetor(int *v,int tam){
	
	for(int i=0;i<tam;i++){
		v[i]= rand()%100+1;
		printf("%i\n", v[i]);
	}
}
void verificaVetor(int *v,int tam, int n){
	int result=0;
	for(int i=0;i<tam;i++){
		if(n==v[i]){
			printf("O numero pertence a posicao %i do vetor\n",i);
			result=1;
		}
	}
	if (result==0){
		printf("Numero nao aparece no vetor\n");
	}
}
