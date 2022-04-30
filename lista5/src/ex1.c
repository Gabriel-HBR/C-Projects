/* 
 * Enunciado: 
 *  Desenvolva um programa capaz de ler uma string digitada pelo usuário e,
 *  a seguir, exiba essa string invertida.
 *
 *  Exemplo:
 *    Digite uma string: ola
 *    alo
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX 100 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */

int main (int argc, char *argv[]){
  char str1[MAX],str2[MAX];
  printf("Digite uma string: ");
  setbuf(stdin,0);
  fgets(str1,50,stdin);

  if(str1[strlen(str1)-1] == '\n'){
    str1[strlen(str1)-1] = '\0';
  }
  for(int i = 0; i < strlen(str1); i++){
    str2[i] = str1[strlen(str1)-1-i];
  }
  //str2[strlen(str1)]='\0';
  printf("%s\n",str2);
  return 0;
}
