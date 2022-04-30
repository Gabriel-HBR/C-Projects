#include <stdio.h>

#define MAX_ARR 1024 // Não modifique esse valor!!

/* 
 * Protótipos das funções - NÃO MODIFIQUE 
 *
 */

// le_vetor deve ler um vetor até receber o valor -100 ou chegar em MAX_ARR.
// O retorno da função deve ser o tamanho do vetor lido.
int le_vetor(int vetor[MAX_ARR]);

// busca_linear deve receber um vetor, seu tamanho e uma chave a ser buscada.
// A função deve implementar o algoritmo de busca linear.
// Seu retorno deve ser o índice onde a chave for encontrada ou,
// caso não tenha encontrado nada, -1.
int busca_linear(int vetor[MAX_ARR], int tam_vetor, int chave);

// Ganharam essa de brinde. =)
void exibe_vetor(int vetor[MAX_ARR], int tam_vetor);

int main (int argc, char *argv[])
{
  int j = 0,n ,lista[MAX_ARR], chave, tamanho, busca;
  printf("Digite o vetor: ");
  while(j < MAX_ARR){
    scanf(" %i", &n);
    lista[j] = n;
    j++;
    if(n == -100){
      break;
    }
  }
  printf("Chave a ser buscada: ");
  scanf("%i",&chave);
  tamanho = le_vetor(lista);
  exibe_vetor(lista,tamanho);
  busca = busca_linear(lista,tamanho,chave); 
  if (busca ==-1){
    printf("Chave %i não foi encontrada.", chave);
  }else{
    printf("Chave %i encontrada na posição %i.",chave,busca);
    //                                       ^ Esqueci deste ponto ;-;
  }

  return 0;
}

int busca_linear(int vetor[MAX_ARR], int tam_vetor, int chave) {
  for (int i = 0; i < tam_vetor; i++){
    if (vetor[i] == chave){
      return i;
    } else if (vetor[i] == -100){
      return -1;
    }
  }
  return -1;
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
