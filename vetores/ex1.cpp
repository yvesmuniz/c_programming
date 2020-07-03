#include"stdio.h"

void preencheVetor(int *v, int tam);
int verificaVetor(int *v, int tam,int n);

int main(){
	int v[5];
	int n;
	preencheVetor(v,5);
	printf("Digite um numero: \n");
	scanf("%i",&n);
	if(verificaVetor(v,5,n)){
		printf("Ha um vetor igual a %i !",verificaVetor(v,5,n));
	}
	else{
		printf("Nao ha um vetor igual a %i",n);
	}
	
	return 0;
}
void preencheVetor(int *v, int tam){
	for(int i=0;i<tam;i++){
		printf("Digite o %io vetor: \n",i+1);
		scanf("%i", &v[i]);
	}
}
int verificaVetor(int *v, int tam,int n){
	for(int i=0;i<tam;i++){
		if(n==v[i]){
			return 1;
		}
		
	}
	return 0;
}
