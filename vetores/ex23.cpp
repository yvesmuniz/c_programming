#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leitura(char p1[], char p2[]);
void imprimir(char p1[], char p2[]);


int main(void) {
  char p1[11], p2[11];

  leitura(p1, p2);
  imprimir(p1, p2);

  return 0;
}

void leitura(char p1[], char p2[]){
  printf("Digite a primeira palavra: ");
  scanf("%s",p1);
  printf("Digite a segunda palavra: ");
  scanf("%s",p2);
}
void imprimir(char p1[], char p2[]){
  char cmp;
  cmp = strcmp(p1, p2);
  if (cmp == 0){
    printf("As palavras são iguais");
  } /* p1 igual a p2 */;
  if (cmp < 0){
    printf("%s\n",p1);
    printf("%s",p2);
  } /* p1 menor que p2 */;
  if(cmp > 0){
    printf("%s\n",p2);
    printf("%s",p1);
  } /* p1 maior que p2 */;
}
