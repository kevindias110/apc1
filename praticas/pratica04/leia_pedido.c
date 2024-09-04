#include <stdio.h>

int main() {
 
  char produto[21];
  int quantidade = 0;
  float valor = 0.0f;

  scanf("%s","%i","%f", &produto, &quantidade, &valor);
  printf("==============================\n  PEDIDO\n==============================\nProduto        QTD\t\tValor unit\n%s\t\t%i\t\t%f", produto, quantidade, valor);
 
  
  return 0;
}
