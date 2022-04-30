/* 
 * Enunciado: 
 * Implemente um programa que leia o nome, a idade e o endereço de uma pessoa 
 * e armazene esses dados em uma estrutura. Em seguida, imprima na tela os 
 * dados da estrutura lida. Para armazenar os dados, escolha os tipos de dados 
 * mais adequados para cada informação. Utilize, obrigatoriamente, uma função 
 * para realizar a leitura da estrutura e outra função para realizar sua 
 * exibição. Outras funções auxiliares podem ser utilizadas.
 *
 * Exemplos:
 *
 *  Nome: Rodrigo Nicola
 *  Endereço: Praça Mauá, 1
 *  Idade: 31
 *  Pessoa{'Rodrigo Nicola',31,'Praça Mauá, 1'}
 *
 */

#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
} Pessoa;

void ler_string(char s[MAX]);
Pessoa ler_pessoa();
void exibe_pessoa(Pessoa p);

int main (int argc, char *argv[]){
  printf("Lmmao");
  return 0;
}
