/* 
 * Enunciado: 
 * Desenvolva um programa capaz de ler uma string digitada pelo usuário e, 
 * a seguir, informe-o se o valor digitado se trata de um palíndromo ou não.
 * O programa deve descosiderar diferença entre maíusculas e minúsculas.
 *
 * Exemplos:
 *
 *  Digite uma string: racecar
 *  É palíndromo
 *
 *  Digite uma string: oi
 *  Não é palíndromo
 *
 *  Digite uma string: RaceCar
 *  É palíndromo
 *
 */

#include <stdio.h>
#include <string.h> 
#include <ctype.h> // Aqui existe a função tolower. Busque documentação.

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
  for(int i = strlen(str1)-1; i >= 0; i--){
    str1[i] = tolower(str1[i]);
    str2[strlen(str1)-1-i] = str1[i];
  }
  int valor = strcmp(str1,str2);
  if (valor == 0){
    printf("É palíndromo\n");
  }else{
    printf("Não é palíndromo\n");
  }
  
  return 0;
}
