#include"stdio.h"

void preencheVetor(int *v,int tam);
void inverteVetor(int *v, int tam);
void imprimeVetor(int *V, int tam);

int main(){
	int v[6];
	preencheVetor(v,6);
	inverteVetor(v,6);
	imprimeVetor(v,6);
	return 0;
}
void preencheVetor(int *v,int tam){
	for(int i=0;i<tam;i++){
		printf("Digite o %io vetor: \n",i+1);
		scanf("%i", &v[i]);
	}
}
void inverteVetor(int *v, int tam){
	int a;
	for(int i=0;i<tam/2;i++){
		a=v[i];
		v[i]= v[(tam-1)-i];
		v[(tam-1)-i]=a;
		
		
		
	}
	
}
void imprimeVetor(int *v, int tam){
	for(int i=0;i<tam;i++){
		printf("%i\t", v[i]);
	}
}
