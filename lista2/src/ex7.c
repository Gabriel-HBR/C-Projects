#include <stdio.h>

/* Enunciado - Em matemática, o número harmônico designado por H(n) define-se
 * como sendo a soma da série harmônica:
 * 
 *                         H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
 *
 * Faça um programa que leia um valor n inteiro e positivo e 
 * apresente o valor de H(n) com duas casas decimais
 *
 * Exemplos:
 *
 * Digite um valor para n: 10
 * 2.93
 *
 * Digite um valor para n: -1
 * Erro, n menor que 0!
 */

int main (int argc, char *argv[])
{
  printf("Digite um valor para n: ");
  int n;
  scanf("%i",&n);
  if(n<0){
    printf("Erro, n menor que 0!");
  }
  else{
    float H=0;
    for(float i=1 ; i<=n ; i++){
      H = H+(1/i);
    }
    printf("%.2f",H);
  }
  return 0;
}
