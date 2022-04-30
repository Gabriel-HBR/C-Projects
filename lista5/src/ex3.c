/* 
 * Enunciado: 
 * Desenvolva um programa capaz de ler uma string digitada pelo usuário e, 
 * a seguir, solicite ao usuário que digite um caractere a ser buscado na
 * string digitada. O programa deve informar ao usuário se o caractere foi
 * encontrado ou não. O programa deve desconsiderar a difereça entre maíusculas
 * e minúsculas. Utilize o algoritmo de busca que achar melhor.
 *
 * Exemplos:
 *
 *   Digite uma string: teste!
 *   Digite a chave: !
 *   Caractere ! encontrado na posição 5.
 *
 *   Digite uma string: Ola, Mundo!
 *   Digite a chave: M
 *   Caractere m encontrado na posição 5.
 *
 *   Digite uma string: Ola, Mundo!
 *   Digite a chave: m
 *   Caractere m encontrado na posição 5.
 *
 *   Digite uma string: Ola, Mundo!
 *   Digite a chave: b
 *   Caractere b não foi encontrado.
 *
 */

#include <stdio.h>
#include <string.h> 
#include <ctype.h> // Aqui existe a função tolower. Busque documentação.

#define MAX 100 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */

int main (int argc, char *argv[]){
  char str[MAX], chave;
  printf("Digite uma string: ");
  fgets(str,MAX,stdin);
  if(str[strlen(str)-1] == '\n'){
    str[strlen(str)-1] = '\0';
  }
  printf("Digite uma char: ");
  scanf("%c",&chave);

  for(int i = 0; i < strlen(str); i++){
    str[i] = tolower(str[i]);
    if(chave == str[i]){
      printf("Caractere %c encontrado na posição %i.\n",chave,i);
      return 0;
    }
  }
  printf("Caractere %c não foi encontrado.\n",chave);
  return 0;
}
