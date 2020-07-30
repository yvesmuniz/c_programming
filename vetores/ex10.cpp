#include <stdio.h>

void preencheVetores(int *a, int tam, int *b);
void preencheVetorC(int *a, int tam, int *b,int *c);
void imprimeVetorC(int *c, int tam);

int main(){
  int a[5], b[5], c[5];
  preencheVetores(a,5,b);
  preencheVetorC(a,5,b,c);
  imprimeVetorC(c,5);
return 0;
}

void preencheVetores(int *a, int tam, int *b){
  for(int i=0;i<tam;i++){
    printf("a[%i]",i);
    scanf("%i",&a[i]);
  }
  for(int i=0;i<tam;i++){
    printf("b[%i]",i);
    scanf("%i",&b[i]);
  }
}
void preencheVetorC(int *a, int tam, int *b, int *c){
  for(int i=0;i<tam;i++){
    c[i]= 2*(a[i]+b[i]);
  }
}
void imprimeVetorC(int *c, int tam){
  for(int i=0;i<tam;i++){
    printf("\n%i\t",c[i]);
  }
}
