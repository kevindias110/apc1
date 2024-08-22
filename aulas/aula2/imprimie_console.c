#include<stdio.h>//biblioteca de entreada e saida  na console

int main() { 
//exibi uma mensagem na tela
printf("exibir uma imagem entre aspas duplas\n");


  //imprimie um numero inteiro
  printf("%i\n",10);
  printf("%i %i\n", 50, 100);
  printf("%5i\n",1);
  printf("%05i\n",21);

  //imprimie um numero decimal
  printf("%f\n",5.8);
  printf("%.3f\n",5.8158);
  printf("%8.2f\n", 110.5);
  printf("%8.2f\n",2556.86);

  //imprimie um caracter
  printf("%c\n",'a');
  printf("%c\n",68);
  printf("%s\n", "boa noite");
  printf("%30s!\n", "boa noite");
  printf("%-30s!\n", "quero cafe  ");
 
  return 0;
}