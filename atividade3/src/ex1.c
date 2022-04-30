#include <stdio.h>

#define MAX_ARR 1024 // Não modifique esse valor!!

/* 
 * Protótipos das funções - NÃO MODIFIQUE 
 *
 */

// le_vetor deve ler um vetor até receber o valor -100 ou chegar em MAX_ARR.
// O retorno da função deve ser o tamanho do vetor lido.
int le_vetor(int vetor[MAX_ARR]);

// troca_elementos deve receber um vetor e dois índices e trocar os troca 
// os elementos do vetor de lugar.
void troca_elementos(int vetor[MAX_ARR], int i, int j);

// particiona deve receber um vetor, o começo e o fim do intervalo a ser
// considerado. A seguir, deve reposicionar um pivô (valor médio do intervalo)
// de forma que à sua esquerda estejam apenas valores menores que ele e, à sua
// direita, apenas valores maiores que ele. Retorna a posição final do pivô.
int particiona(int vetor[MAX_ARR], int comeco, int fim);

// quicksort deve receber como parâmetros um vetor, seu tamanho, o começo e 
// o fim do intervalo a ser considerado no vetor. O procedimento deve
// implementar o algoritmo quicksort recursivo e exibir os resultados de cada
// uma de suas chamadas.
void quicksort(int vetor[MAX_ARR], int tam_vetor, int comeco, int fim);

// Ganharam essa de brinde. =)
void exibe_vetor(int vetor[MAX_ARR], int tam_vetor);

int main (int argc, char *argv[]){
  int n,k=0,vetor[MAX_ARR], tam;
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
  printf(">> Quicksort(começo = 0, fim = %i). Vetor = ", tam-1);
  exibe_vetor(vetor,tam);

  quicksort(vetor,tam,0,tam-1);

  printf("** Quicksort(começo = 0, fim = %i). Vetor = ", tam-1);
  exibe_vetor(vetor,tam);
  return 0;
}

void quicksort(int vetor[MAX_ARR], int tam_vetor, int comeco, int fim) {
  if(comeco<fim){

  int pivo = particiona(vetor,comeco,fim);
  //printf("comeco = %i\nfim = %i\npivo = %i\n\n",comeco,fim,pivo);
  
  printf(">> Quicksort(começo = %i, fim = %i). Vetor = ", comeco, pivo-1);
  exibe_vetor(vetor,tam_vetor);
  quicksort(vetor,tam_vetor,comeco,pivo-1);

  printf(">> Quicksort(começo = %i, fim = %i). Vetor = ", pivo+1, fim);
  exibe_vetor(vetor,tam_vetor);
  quicksort(vetor,tam_vetor,pivo+1,fim);
  }
  else{
    printf("** Quicksort(começo = %i, fim = %i). Vetor = ", comeco, fim);
  exibe_vetor(vetor,tam_vetor);
  }
}

int particiona(int vetor[MAX_ARR], int comeco, int fim) {
  int pivo_pos, pivo_val, j, dif;
  j = comeco;

  dif = fim-comeco;
  if (dif%2 != 0){
    pivo_pos = comeco + (dif-1)/2;
  }else{
    pivo_pos = comeco + dif/2;
  }

  pivo_val = vetor[pivo_pos];

  troca_elementos(vetor, pivo_pos, fim);
  
  for(int i=0;i<fim;i++){
    if(vetor[i]<pivo_val){
      troca_elementos(vetor,i,j);
      j++;
    }
  }
  troca_elementos(vetor,fim,j);

  return j;
}

void troca_elementos(int vetor[MAX_ARR], int i, int j) {
  int t1,t2;
  t1 = vetor[i];
  t2 = vetor[j];
  vetor[i] = t2;
  vetor[j] = t1;
}

void exibe_vetor(int vetor[MAX_ARR], int tam_vetor) {
  printf("[");
  for (int i = 0; i < tam_vetor; i++) {
    printf("%i", vetor[i]);
    if ( i < tam_vetor - 1 ) printf(", ");
  }
  printf("]\n");
}

int le_vetor(int vetor[MAX_ARR]) {
  for (int i = 0; i<MAX_ARR; i++){
    if(vetor[i]==-100){
      return i;//Devolve a pos do -100
    }
  }
  return MAX_ARR;
}
