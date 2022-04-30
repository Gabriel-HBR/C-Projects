#include <stdio.h>

/* Enunciado - Faça um programa que leia duas notas de um aluno em uma
 * única linha, separando cada valor com uma vírgula. Verifique se as notas
 * são válidas e, caso sejam exiba a média do aluno na tela. Para que a nota 
 * seja válida, ela deve estar entre 0.0 e 10.0. Caso alguma das notas não seja
 * válida, o programa deve informar o usuário e encerrar sua operação.
 *
 * Exemplos:
 *
 * Notas: 5.0, 10.0
 * 7.5
 *
 * Notas: 5, 5.0
 * 5.0
 *
 * Notas: -1.0, 5.0
 * Nota invalida. Deve ser entre 0.0 e 10.0
 */

int main (int argc, char *argv[]){
  printf("Notas: ");
  float n1,n2;
  scanf("%f, %f",&n1,&n2);
  if(n1<0 || n1>10 || n2<0 || n2>10){
    printf("Nota invalida. Deve ser entre 0.0 e 10.0");
  }
  else{
    printf("%.1f",(n1+n2)/2);
  }
  return 0;
}

