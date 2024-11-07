#include <stdio.h>
#include <stdlib.h>
int main(){

 int opcao = 0;

 while(opcao != 5){
    system("clear");
    printf("MENU PRINCIPAL\n");
    printf("1 - consultar saldo\n");
    printf("2 - fazer recarga\n");
    printf("3 - ver recados\n");
    printf("4 - ultimas ligacoes\n");
    printf("5 - sair\n");
    printf("entre com uma opcao => ");
    scanf("%i", &opcao);
    while(getchar() !='\n');

    switch(opcao){

        case 1: {
          
         system("clear");
         printf("CONSULTA DE SALDO\n\n");
         printf("seu saldo eh de R$ 10.00.\n");break; }

        case 2: printf("escolha um valor de recarga:\n");break;
        case 3: printf("voce nao tem recados.\n");break;
        case 4: printf("99999-00000\n9999-1111\n");break;
        case 5: printf("ate logo!\n");break;
        default: printf("opcao invalida. tente de novo!\n"); opcao = 0;
    }

    if(opcao != 5){

      printf("Pressione ENTER para continuar...");
      getchar();
    }

 }




    return 0;
}