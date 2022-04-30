/* 
 * Enunciado: 
 * Desenvolva um programa capaz de ler uma palavra digitada pelo usuário e,
 * a seguir, deve exibir uma string contendo os caracteres da palavra digitada
 * em ordem alfabética. Utilize o algoritmo de ordenação que preferir.
 * O programa deve desconsiderar a diferença entre letras maíusculas e 
 * letras minúsculas.
 *
 * Exemplos:
 *
 *   Digite uma palavra: ola
 *   alo
 *
 *   Digite uma palavra: alo
 *   alo
 *
 *   Digite uma palavra: RaceCar
 *   aaccerr
 *
 */

#include <stdio.h>
#include <string.h> 
#include <ctype.h> // Aqui existe a função tolower. Busque documentação.

#define MAX 100 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */

void troca_elementos(char vetor[MAX], int i, int j);


int main (int argc, char *argv[]){
  char str[MAX];
  int len;
  printf("Digite uma palavra: ");
  fgets(str,MAX,stdin);
  if(str[strlen(str)-1] == '\n'){
    str[strlen(str)-1] = '\0';
  }
  len = strlen(str);
  for(int i=0; i<len; i++){
    str[i]=tolower(str[i]);
  }
  for(int i=0; i<len; i++){
    for(int j=i+1; j<len; j++){
      if(str[i]>str[j]){
        troca_elementos(str,i,j);
      }
    }
  }
  printf("%s\n",str);
  return 0; // a => 97 , z => 122
}
void troca_elementos(char vetor[MAX], int i, int j){
  int t;
  t = vetor[i];
  vetor[i] = vetor[j];
  vetor[j] = t;
}