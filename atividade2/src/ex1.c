#include <stdio.h>

#define MAX_ARR 1024 // Não modifique esse valor!!

/* 
 * Protótipos das funções - NÃO MODIFIQUE 
 *
 */

// le_vetor deve ler um vetor até receber o valor -100 ou chegar em MAX_ARR.
// O retorno da função deve ser o tamanho do vetor lido.
int le_vetor(int vetor[MAX_ARR]);

// selection_sort deve ordernar um vetor de tamanho MAX_ARR. 
// Recebe como parametros o vetor, seu tamanho e se a ordenação será crescente.
void selection_sort(int vetor[MAX_ARR], int tam_vetor, int crescente);

// bubble_sort deve ordernar um vetor de tamanho MAX_ARR. 
// Recebe como parametros o vetor, seu tamanho e se a ordenação será crescente.
void bubble_sort(int vetor[MAX_ARR], int tam_vetor, int crescente);

// troca_elementos deve receber um vetor e dois índices e trocar os troca 
// os elementos do vetor de lugar.
void troca_elementos(int vetor[MAX_ARR], int i, int j);

// Ganharam essa de brinde. =)
void exibe_vetor(int vetor[MAX_ARR], int tam_vetor);

int main (int argc, char *argv[])
{
  int n,k=0,vetor[MAX_ARR], metodo, order, tam;
  printf("Digite os valores do vetor: ");
  while(k < MAX_ARR){
    scanf(" %i",&n);
    vetor[k] = n;
    k++;
    if(n == -100){
      break;
    }
  }
  tam = le_vetor(vetor);
  printf("Tamanho = %i\n",tam);
  exibe_vetor(vetor,tam);
  printf("Selecione o método de ordenação (1 - Selection, 2 - Bubble): ");
  scanf("%i", &metodo);
  printf("Ordenação crescente (1) ou decrescente (0): ");
  scanf("%i",&order);
  if(metodo == 1){
    selection_sort(vetor, tam, order);
  }
  if(metodo == 2){
    bubble_sort(vetor, tam, order);
  }
  exibe_vetor(vetor,tam);
}

void troca_elementos(int vetor[MAX_ARR], int i, int j) {
  int t1,t2;
  t1 = vetor[i];
  t2 = vetor[j];
  vetor[i] = t2;
  vetor[j] = t1;
}

void selection_sort(int vetor[MAX_ARR], int tam_vetor, int crescente) {
    int m;
  if (crescente == 1){
    for(int i=0; i<tam_vetor-1; i++){
      m = i;
      for (int j = i; j < tam_vetor; j++){
	    	if (vetor[j] < vetor[m]){
          m=j;
        }
      }
      troca_elementos(vetor,i,m);
    }
    printf("\n");
  }

  else if(crescente == 0){
    for(int i=0; i<tam_vetor-1; i++){
      m = i;
      for (int j = i; j < tam_vetor; j++){
	    	if (vetor[j] > vetor[m]){
          m=j;
        }
      }
      troca_elementos(vetor,i,m);
    }
  }
}

void bubble_sort(int vetor[MAX_ARR], int tam_vetor, int crescente) {
  if (crescente == 1){
    for (int i=0 ; i<tam_vetor-1 ; i++){
      for (int j=0 ; j<tam_vetor-1-i ; j++){
        if (vetor[j]>vetor[j+1]){
          troca_elementos(vetor,j,j+1);
        }
      }
    }
  }
  else{
    for (int i=tam_vetor-1 ; i>0 ; i--){
      for (int j=tam_vetor-1 ; j>tam_vetor-1-i ; j--){
        if (vetor[j]>vetor[j-1]){
          troca_elementos(vetor,j,j-1);
        }
      }
    }
  }
}

int le_vetor(int vetor[MAX_ARR]) {
  for (int i = 0; i<MAX_ARR; i++){
    if(vetor[i]==-100){
      return i;
    }
  }
  return MAX_ARR;
}

void exibe_vetor(int vetor[MAX_ARR], int tam_vetor) {
  printf("[");
  for (int i = 0; i < tam_vetor; i++) {
    printf("%i", vetor[i]);
    if ( i < tam_vetor - 1 ) printf(", ");
  }
  printf("]\n");
}
