#include <stdio.h>

/* Enunciado - Faça um programa que calcula a associação em paralelo 
 * de dois resistores R1 e R2 fornecidos pelo usuário via teclado. 
 * O programa deverá solicitar valores e calcula a resistência equivalente até 
 * que o usuário entre com um valor para alguma das resistências igual a 0
 *
 * Exemplos:
 *
 * Digite um valor para R1: 470
 * Digite um valor para R2: 2200
 * 
 *
 * Digite um valor para R1: 0
 * Digite um valor para R2: 100
 * Finalizando o programa!
 */

int main (int argc, char *argv[])
{
  while(1){
    int r1,r2;
    printf("Digite um valor para R1: ");
    scanf("%i",&r1);
    printf("Digite um valor para R2: ");
    scanf("%i",&r2);
    if(r1==0||r2==0);{
      printf("Finalizando o programa!");
      break;
    }
    
  }
  return 0;
}
