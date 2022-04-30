#include <stdio.h>
#include <math.h>

int menu();
float soma(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);
float raiz_n(float x, float n);
float potencia_n(float exp, float pot);
float seno(float ang_graus);
float cosseno(float ang_graus);

int main (int argc, char *argv[]){
  int option=1;
  while (option!=0){
    option = menu();
    float a,b;
    switch(option){
      case 1:
        printf("Soma\nDigite dois valores (a+b): ");
        scanf("%f+%f",&a,&b);
        printf("%.2f + %.2f = %.2f",a,b,soma(a,b));
        break;
      case 2:
        printf("Subtração\nDigite dois valores (a-b): ");
        scanf("%f-%f",&a,&b);
        printf("%.2f - %.2f = %.2f",a,b,subtracao(a,b));
        break;
      case 3:
        printf("Multiplicação\nDigite dois valores (a*b): ");
        scanf("%f*%f",&a,&b);
        printf("%.2f * %.2f = %.2f",a,b,multiplicacao(a,b));
        break;
      case 4:
        printf("Divisão\nDigite dois valores (a/b): ");
        scanf("%f/%f",&a,&b);
        printf("%.2f / %.2f = %.2f",a,b,divisao(a,b));
        break;
      case 5:
        printf("Raiz enésima\nDigite dois valores (x r n): ");
        scanf("%fr%f",&a,&b);
        printf("%.2f r %.2f = %.2f",a,b,raiz_n(a,b));
        break;
      case 6:
        printf("X elevado a N\nDigite dois valores (exp ^ pot): ");
        scanf("%f^%f",&a,&b);
        printf("%.2f ^ %.2f = %.2f",a,b,potencia_n(a,b));
        break;
      case 7:
        printf("Seno\nDigite um valor: ");
        scanf("%f",&a);
        printf("seno(%.2f) = %.2f",a,seno(a));
        break;
      case 8:
        printf("Seno\nDigite um valor: ");
        scanf("%f",&a);
        printf("cosseno(%.2f) = %.2f",a,cosseno(a));
        break;
      case -1:
        option=0;
        printf("Saindo...");
        break;
      default:
        printf("Digite uma opção válida!");
    }
    return 0;
  }
  printf("\n");
}

int menu(){
  printf("** Calculadora V0.0 **\n\n");
  printf("Para utilizar a calculadora, digite uma das opções abaixo.\n");
  printf("\t 1 - Soma\n");
  printf("\t 2 - Subtração\n");
  printf("\t 3 - Multiplicação\n");
  printf("\t 4 - Divisão\n");
  printf("\t 5 - Raiz enésima\n");
  printf("\t 6 - X elevado a N\n");
  printf("\t 7 - Seno (graus)\n");
  printf("\t 8 - Cosseno (graus)\n");
  printf("\t-1 - Sair\n");
  printf("Digite uma opção: ");
  int opt;
  scanf("%i",&opt);
  return opt;
}

float soma (float a,float b){
  return a+b;
}

float subtracao(float a, float b){
  return a-b;
}

float multiplicacao(float a, float b){
  return a*b;
}

float divisao(float a, float b){
  return a/b;
}
float raiz_n(float x, float n){
  float temp = pow(x,1/n);
  return temp;
}
float potencia_n(float exp, float pot){
  return pow(exp,pot);
}
float seno(float ang_graus){
  ang_graus = ang_graus*M_PI/180;
  return sin(ang_graus);
}
float cosseno(float ang_graus){
  ang_graus = ang_graus*M_PI/180;
  return cos(ang_graus);
}