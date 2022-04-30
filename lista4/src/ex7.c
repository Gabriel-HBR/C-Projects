/* Enunciado:
 * Desenvolva um programa capaz de ler os valores inteiros de uma matriz 3x3 
 * e, a seguir, exiba a sua forma transposta
 *
 * Exemplos: 
 *
 *
 *    Digite a linha 0: 1 2 3
 *    Digite a linha 1: 4 5 6
 *    Digite a linha 2: 7 8 9
 *    [[1, 4, 7],
 *    [2, 5, 8],
 *    [3, 6, 9]]
 *    
 *    Digite a linha 0: 1 0 0
 *    Digite a linha 1: 0 1 0
 *    Digite a linha 2: 0 0 1
 *    [[1, 0, 0],
 *    [0, 1, 0],
 *    [0, 0, 1]]
 *    
 */

#include <stdio.h>

#define ARRAY_MAX 3 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */

int main (int argc, char *argv[]){
  int lista1[ARRAY_MAX][ARRAY_MAX],lista2[ARRAY_MAX][ARRAY_MAX];
  for(int i=0; i<ARRAY_MAX; i++){
    int n=0;
    printf("Digite a linha %i: ",i);
    for(int j=0; j<ARRAY_MAX; j++){
      scanf(" %i",&n);
      lista1[i][j] = n;
    }
  }
  
  for(int i=0; i<ARRAY_MAX; i++){
    int n=0;
    printf("Digite a linha %i: ",i);
    for(int j=0; j<ARRAY_MAX; j++){
      scanf(" %i",&n);
      lista2[i][j] = n;
    }
  }


  printf("[");
  for(int i=0; i<ARRAY_MAX; i++){
    printf("[");
    for(int j=0; j<ARRAY_MAX; j++){
      int n=0;
      for(int k=0; k<ARRAY_MAX;k++){
        n+=lista1[i][k]*lista2[k][j];
      }
      printf("%i",n);
      printf((j<ARRAY_MAX-1)?", ":"");
    }
    printf((i<ARRAY_MAX-1)?"],\n":"]]");
  }

  return 0;
}
