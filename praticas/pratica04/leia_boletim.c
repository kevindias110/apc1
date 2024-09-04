#include <stdio.h>

int main() {
 
int matricula = 0;
  float a1 = 0;
  float a2 = 0;
  float media = 0;
  
   scanf("%i", &matricula);
   scanf("%f", &a1);
   scanf("%f", &a2);
   scanf("%f", &media);
  
  printf("A matricula do aluno é: %i\n", matricula);
  printf("A nota da A1 é: %.2f\n", a1);
  printf("A nota da A2 é: %.2f\n", a2);
  printf("A media do aluno é: %.2f\n", media);
  
  
  return 0;
}
