#include"stdio.h"

void preencheVetor(int *v,int tam);
int verificaVetor(int *v,int tam);

int main(){
	int v[8];
	preencheVetor(v,8);
	
	
	if(verificaVetor(v,8)){
		printf("A sequencia eh crescente!");
	}
	else{
		printf("A sequencia eh decrescente!");
	}
	
	return 0;
}
void preencheVetor(int *v,int tam){
	for(int i=0;i<tam;i++){
		printf("Digite o %io vetor: \n",i+1);
		scanf("%i",&v[i]);
	}
}
int verificaVetor(int *v,int tam){
	int a=0, c;
	for(int i=0;i<tam;i++){
		if(v[i]>v[i+1]){
			return 0;
		}
		else{
			a=1;
		}
	}
	if(a==1){
		return 1;
	}
}
