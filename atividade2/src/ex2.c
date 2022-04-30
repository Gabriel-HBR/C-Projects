#include <stdio.h>

#define ARR_SIZE 10

void exibe_vetor(int vetor[ARR_SIZE]);
int busca_binaria(int vetor[ARR_SIZE], int chave);
void bubble_sort(int vetor[ARR_SIZE], int tam_vetor, int crescente);
int le_vetor(int vetor[ARR_SIZE]);
void troca_elementos(int vetor[ARR_SIZE], int i, int j);

int main (int argc, char *argv[]){
  int vetor[ARR_SIZE],chave,tam_vetor,k=0,n,b;

  printf("Digite os valores do vetor: ");
  while(k < ARR_SIZE){
    scanf(" %i",&n);
    vetor[k] = n;
    k++;
  }

  tam_vetor = le_vetor(vetor);
  
  printf("Digite uma chave a ser buscada: ");
  scanf("%i", &chave);
  
  le_vetor(vetor);
  b = busca_binaria(vetor,chave);
  bubble_sort(vetor,tam_vetor,1);
  exibe_vetor(vetor);
  if(b!= -1){
  printf("Valor %i encontrado no índice %i.",chave, b);
  }
  else{
    printf("Valor %i não foi encontrado!", chave);
  }
  return 0;
}

void exibe_vetor(int vetor[ARR_SIZE]) {
  printf("[");
  for (int i = 0; i < ARR_SIZE; i++) {
    printf("%i", vetor[i]);
    if ( i < ARR_SIZE - 1 ) printf(", ");
  }
  printf("]\n");
}

int busca_binaria(int vetor[ARR_SIZE], int chave){
  int valorMenor = 0,valorMaior = ARR_SIZE, valorMeio, dif;
  while(valorMaior-valorMenor>1){
    dif = valorMaior-valorMenor;
    //printf("valor menor: %i\nvalor meio: %i\nvalor maior: %i\n",valorMenor,valorMeio,valorMaior);
    if (dif%2 != 0){
      valorMeio = valorMenor + (dif-1)/2;
    }else{
      valorMeio = valorMenor + dif/2;
    }
    if(chave<vetor[valorMeio]){
      valorMaior = valorMeio; //ERREI AQUI! Antes estava 'valorMaior = valorMaior', isso ñ faz sentido;
    }
    else if(chave>vetor[valorMeio]){
      valorMenor = valorMeio;
    }
    else if(chave == vetor[valorMeio]){
      return valorMeio;
    }
  }
  return -1;
}

void troca_elementos(int vetor[ARR_SIZE], int i, int j){
  int t1,t2;
  t1 = vetor[i];
  t2 = vetor[j];
  vetor[i] = t2;
  vetor[j] = t1;
}

void bubble_sort(int vetor[ARR_SIZE], int tam_vetor, int crescente) {
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

int le_vetor(int vetor[ARR_SIZE]) {
  for (int i = 0; i<ARR_SIZE; i++){
    if(vetor[i]==-100){
      return i;
    }
  }
  return ARR_SIZE;
}