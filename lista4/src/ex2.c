/* 
 * Enunciado: 
 * Desenvolva um programa capaz de ler n valores inteiros e os insira em um 
 * array. A leitura deve ser feita de acordo com o programa feito no ex1. 
 * Após a leitura, desenvolva a função calcula_media e calcula_dvp 
 * para calcular a média e o desvio padrão dos valores informados. 
 * O programa principal deve receber os valores lidos pelo array e retornar a 
 * média e o desvio padrão no seguinte formato: MÉDIA +- DVP
 *
 * Exemplos:
 *    Digite os valores para o array: 1 2 3 4 5 6 7 -100
 *    4.00 +- 1.7
 *
 *    Digite os valores para o array: 1 1 1 1 1 1 1 1 1 1 1 -100
 *    1.00 +- 0.0
 *
 *    Digite os valores para o array: 10 20 1 40 50 90 100 -100
 *    44.43 +- 29.8
 *
 */

#include <stdio.h>
#include <math.h> // A biblioteca math tem pow e sqrt

#define ARRAY_MAX 100 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */
float calcula_media(int array[], int tam_array);
float calcula_dvp(int array[], int tam_array);

int main (int argc, char *argv[]){
  int i=0 ,n ,lista[ARRAY_MAX];
  float media, dvp;

  printf("Digite os valores para o array: ");
  while(i<ARRAY_MAX && n != -100){
    scanf(" %i",&n);
    lista[i]=n;
    if(n!=-100){
      i++;
    }
  }

  media  = calcula_media(lista,i);
  dvp = calcula_dvp(lista,i);

  printf("%.2f +- %.1f", media, dvp);
  return 0;
}

float calcula_media(int array[], int tam_array) {
  float m=0;
  for(int i=0; i<tam_array; i++){
    m += array[i];
  }
  return m/tam_array;
}

float calcula_dvp(int array[], int tam_array) {
  int i=0;
  float m, dp=0;
  m = calcula_media(array,tam_array);

  while(i<tam_array){
    dp += pow(array[i]-m,2);
    i++;
  }
  dp = sqrt(dp/tam_array);
  return dp;
}
