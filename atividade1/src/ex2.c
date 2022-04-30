#include <stdio.h>

#define TAM_L 3 // NÃO MODIFIQUE
#define TAM_C 6 // NÃO MODIFIQUE

/* 
 * Protótipos das funções - NÃO MODIFIQUE 
 *
 */

// le_matriz deve ler uma matriz de tamanho [TAM_L, TAM_C] linha por linha.
void le_matriz(int matriz[TAM_L][TAM_C]);

// busca_linear deve implementar o algoritmo de busca linear para vetores
// do tamanho [TAM_C]. Recebe como parâmetros o vetor e a chave a ser buscada.
// Retorna -1 se não encontrar nada e o índice da chave se ela for encontrada.
int busca_linear(int vetor[TAM_C], int chave);

// busca_binaria deve implementar o algoritmo de busca binária para vetores
// do tamanho [TAM_C]. Recebe como parâmetros o vetor e a chave a ser buscada.
// Retorna -1 se não encontrar nada e o índice da chave se ela for encontrada.
int busca_binaria(int vetor[TAM_C], int chave);

// verifica_ordenacao deve verificar se um vetor de tamanho [TAM_C] 
// está ordenado em ordem crescente. Se estiver, a função retorna 1.
// Se não estiver, a função retorna 0. Recebe como parâmetro o vetor.
int verifica_ordenacao(int vetor[TAM_C]);

// Outro brinde =)
void exibe_matriz(int matriz[TAM_L][TAM_C]);

int main (int argc, char *argv[]){
  int lista[TAM_L][TAM_C], chave;
  le_matriz(lista);
  printf("Valor a ser buscado: ");
  scanf("%i",&chave);
  exibe_matriz(lista);
  for(int i = 0; i<TAM_L; i++){
    int index;
    if(verifica_ordenacao(lista[i])==1){
      printf("Linha %i ordenada. Verificando por busca binária.\n",i);
      index = busca_binaria(lista[i],chave);
      if(index != -1){
        printf("Chave %i encontrada em [%i, %i].\n",chave,i,index);
        return 0;
      }
    }
    else{
      printf("Linha %i desordenada. Verificando por busca linear.\n",i);
      index = busca_linear(lista[i],chave);
      if(index != -1){
        printf("Chave %i encontrada em [%i, %i].\n",chave,i,index);
        //^Errei^                          ^ Esqueci de colocar esta barra de espaço
        return 0;
      }
    }
  }
  printf("Chave %i não foi encontrada.\n",chave);
  return 0;
}

int busca_binaria(int vetor[TAM_C], int chave) {
  int valorMenor = 0,valorMaior = TAM_C, valorMeio, dif;
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

  // if(TAM_C/2 == 3){
  //   if(chave == vetor[3]){
  //     return 3;
  //   }
  //   if(chave > vetor[3]){
  //     if(chave == vetor[4]){
  //     return 4;
  //     }
  //     if(chave > vetor[4]){
  //       if(chave == vetor[5]){
  //         return 5;
  //       }
  //     } else{
  //       return -1;
  //       }
  //   }
  //   if(chave < vetor[3]){
  //     if(chave == vetor[2]){
  //     return 2;
  //     }
  //     if(chave < vetor[2]){
  //       if(chave == vetor[1]){
  //         return 1;
  //       }
  //       if(chave == vetor[0]){
  //         return 0;
  //       }
  //       else{
  //         return -1;
  //       }
  //     }
  //   }
  // } 
  // return -1;
}

int verifica_ordenacao(int vetor[TAM_C]) {
  for(int i = 1; i < TAM_C ; i++){
    if (vetor[i-1]>vetor[i]){
      return 0;
    }
  }
  return 1;
}

int busca_linear(int vetor[TAM_C], int chave) {
  for (int i = 0; i < TAM_C; i++){
    if (vetor[i] == chave){
      return i;
    } else if (vetor[i] == -100){
      return -1;
    }
  }
  return -1;
}

void le_matriz(int matriz[TAM_L][TAM_C]) {
  int n;
  for(int i = 0; i<TAM_L; i++){
    printf("Digite a linha %i: ",i);
    for(int j = 0; j<TAM_C; j++){
      scanf(" %i",&n);
      matriz[i][j] = n;
    }
  }
}

void exibe_matriz(int matriz[TAM_L][TAM_C]) {
  printf("[");
  for (int i = 0; i < TAM_L; ++i) { 
    printf("[");
    for (int j = 0; j < TAM_C; ++j) {
      printf("%i", matriz[i][j]);
      if( j < TAM_C - 1) printf(", ");
    }
    printf("]");
    if( i < TAM_L - 1 ) printf(",\n");
  }
  printf("]\n");
}
