/* Enunciado:
 *  Desenvolva um programa capaz de ler dois vetores com três elementos
 *  inteiros cada. A leitura deve ser feita em uma única linha para cada vetor,
 *  com os elementos separados por espaços. Após a leitura, o programa
 *  deve exibir o produto escalar entre os vetores digitados no formato
 *  exemplificado abaixo. O cálculo do produto escalar deve obrigatoriamente
 *  ser feito pela função produto_escalar, que recebe como referência os
 *  dois arrays e retorna um valor inteiro referente ao resultado do produto
 *  escalar.
 *
 *  Exemplos:
 *      Digite o primeiro array: 1 2 3
 *      Digite o segundo array: 3 2 1
 *      [1, 2, 3] . [3, 2, 1] = 10
 *      
 *      Digite o primeiro array: 10 20 30
 *      Digite o segundo array: -10 2 5
 *      [10, 20, 30] . [-10, 2, 5] = 90
 *
 */

#include <stdio.h>
#include <math.h>

#define ARRAY_MAX 3 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */
int produto_escalar(int array[], int array2[]);

int main (int argc, char *argv[]){
int i = 0, lista1[ARRAY_MAX], lista2[ARRAY_MAX], n;

  printf("Digite o primeiro array: ");
  while(i<ARRAY_MAX){
    scanf(" %i",&n);
    lista1[i]=n;
    i++;
  }
  printf("Digite o segundo array: ");
  i = 0;
  while(i<ARRAY_MAX){
    scanf(" %i",&n);
    lista2[i]=n;
    i++;
  }

  i = 0;
  printf("[");
  while (i<ARRAY_MAX){
    printf("%i",lista1[i]);
    if(i<ARRAY_MAX-1){
      printf(", ");
    }
    i++;
  }
  printf("] . ");
  
  i = 0;
  printf("[");
  while (i<ARRAY_MAX){
    printf("%i",lista2[i]);
    if(i<ARRAY_MAX-1){
      printf(", ");
    }
    i++;
  }
  printf("] = %i",produto_escalar(lista1,lista2));
  return 0;
}

int produto_escalar(int array[], int array2[]) {
  int i = 0, m= 0;
  while(i < ARRAY_MAX){
    m += array[i] * array2[i];
    i++;
  }
  return m;
}
