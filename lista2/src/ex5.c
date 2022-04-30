#include <stdio.h>

/* Enunciado - Faça um programa que leia uma data no seguinte formato:
 * D/M/A. O programa deve determinar se a data digitada válida ou não.
 * Lembre-se que Fevereiro tem 29 dias em anos bissextos e 28 dias em anos não
 * bissextos.
 *
 * Exemplos:
 *
 * Data: 22/02/2022
 * Data valida!
 *
 * Data: 29/02/2020
 * Data valida!
 *
 * Data: 29/02/2022
 * Data invalida!
 *
 * Data: 31/06/2022
 * Data invalida!
 *
 * Data: 31/13/2022
 * Data invalida!
 */

int main (int argc, char *argv[]){
  printf("Data: ");
  int dia,mes,ano;
  scanf("%i/%i/%i",&dia,&mes,&ano);
  if(mes<=12){
    if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
      if(dia<=31){
        printf("Data valida!");
      }
      else{
        printf("Data invalida!");
      }
    }
    else if(mes==4||mes==6||mes==9||mes==11){
      if(dia<=30){
        printf("Data valida!");
      }
      else{
        printf("Data invalida!");
      }
    }
    else{
      if(ano%4==0){//ano bissexto!
        if (dia<=29){
          printf("Data valida!");
        }
        else{
          printf("Data invalida!");
        }
      }
      else{
        if (dia<=28){
          printf("Data valida!");
        }
        else{
          printf("Data invalida!");
        }
      }
    }
  }else{
    printf("Data invalida!");
  }
  return 0;
}

