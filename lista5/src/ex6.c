/* 
 * Enunciado: 
 * Desenvolva um programa capaz de ler duas palavras digitadas pelo usuário e,
 * a seguir, deve informá-lo se as palavras formam um anagrama. O programa deve
 * desconsiderar a diferença entre letras maíusculas e letras minúsculas.
 *
 * Exemplos:
 *
 * Digite uma palavra: bored
 * Digite uma palavra: robed
 * bored é anagrama de robed
 *
 * Digite uma palavra: bored
 * Digite uma palavra: robbed
 * bored não é anagrama de robbed
 *
 * Digite uma palavra: ooi
 * Digite uma palavra: oii
 * ooi não é anagrama de oii
 *
 * Digite uma palavra: ooi
 * Digite uma palavra: ioo
 * ooi é anagrama de ioo
 */

#include <stdio.h>
#include <string.h> 
#include <ctype.h> // Aqui existe a função tolower. Busque documentação.

#define MAX 100 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */

void troca_elementos(char vetor[MAX], int i, int j);

int main (int argc, char *argv[]){
  char str[2][MAX],strcopy[2][MAX];
  int len[2],valor;
  for(int i=0; i<2; i++){
    setbuf(stdin, 0);
    printf("Digite uma palavra: ");
    fgets(str[i],MAX,stdin);
    if(str[i][strlen(str[i])-1] == '\n'){
      str[i][strlen(str[i])-1] = '\0';
    }
    strcpy(strcopy[i],str[i]);
    len[i] = strlen(str[i]);
    for(int j=0; j<len[i]; j++){
      str[i][j]=tolower(str[i][j]);
    }
    for(int j=0; j<len[i]; j++){
      for(int k=j+1; k<len[i]; k++){
        if(str[i][j]>str[i][k]){
          troca_elementos(str[i],j,k);
        }
      }
    }
  }
  valor = strcmp(str[0],str[1]);
  printf(((valor==0)?"%s é anagrama de %s\n":"%s não é anagrama de %s\n"),strcopy[0],strcopy[1]);

  return 0;
}
void troca_elementos(char vetor[MAX], int i, int j){
  int t;
  t = vetor[i];
  vetor[i] = vetor[j];
  vetor[j] = t;
}