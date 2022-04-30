/* 
 * Enunciado: 
 * Desenvolva um programa capaz de ler uma string digitada pelo usuário e, 
 * a seguir, implemente a estratégia de criptografia ZENIT - POLAR.
 * A estratégia em questão consiste em substituir os caracteres da string 
 * da seguinte maneira:
 *
 *            Z <-> P 
 *            E <-> O
 *            N <-> L
 *            I <-> A
 *            T <-> R
 *
 * O programa deve desconsiderar a diferença entre letras maíusculas e
 * letras minúsculas.
 *
 * Exemplos:
 *
 *   Digite uma string: polar
 *   zenit
 *
 *   Digite uma string: zenit
 *   polar
 *
 *   Digite uma string: ZeNit
 *   polar
 *   
 *   Digite uma string: seu ou, e ratataci!
 *   sou eu, o tiririca!
 */

#include <stdio.h>
#include <string.h> 
#include <ctype.h> // Aqui existe a função tolower. Busque documentação.

#define MAX 100 // Valor máximo para o tamanho do array. Não modifique.

/* Protótipos */


int main (int argc, char *argv[]){
  char str[MAX],
  str1[]="zenitpolar",
  str2[]="polarzenit";

  printf("Digite uma string: ");
  fgets(str,MAX,stdin);
  if(str[strlen(str)-1] == '\n'){
    str[strlen(str)-1] = '\0';
  }
  for(int i=0; i<strlen(str); i++){
    str[i] = tolower(str[i]);
    for(int j=0; j<strlen(str1);j++){
      if(str[i]==str1[j]){
        str[i]=str2[j];
        break;
      }
    }
  }
  printf("%s\n",str);
  return 0;
}
