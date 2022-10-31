#include <stdio.h>

int main(void)
{
  int cod, cont, qtd, pagamento;
  float conta, valor;
  valor = 0;
  qtd = 0;

    printf("           ________________________________\n\n");
    printf("            Especificação     codigo  preço\n");
    printf("           ________________________________\n\n");
    printf("           Hamburguer -------  |100|  R$3,50\n");
    printf("           Hamburger c/ refrigerante ---- |101|  R$5,00\n");
    printf("           Milk-shake ------ |102|  R$2,80\n");
    printf("           Batata-frita  ------- |103|  R$5,00\n");
    printf("           Cheeseburguer ---- |104|  R$4,50\n");
    printf("           Refrigerente ----- |105|  R$1,50\n");
    printf("           ________________________________\n\n");
  
    do{
      printf("\nDigite o codigo do Lanche:");
      scanf("%d", &cod);
      qtd = qtd + 1;
  
      printf("\nDeseja algo mais?\n\nDigite [1] para Sim e [2] para Nao:");
      scanf("%d", &cont);
      }
      while(cont == 1);
        switch ( cod )
      {
        case 100:
        printf("", valor = 3.50);
        break;
     
        case 101:
        printf("", valor = 5.00);
        break;
     
        case 102:
        printf("", valor = 2.80);
        break;
     
        case 103:
        printf("", valor = 5.00);
        break;
     
        case 104:
        printf("", valor = 4.50);
        break;
     
        case 105:
        printf("", valor = 1.50);
        break;
     
      }

    conta = valor*qtd;
    printf("\n\n\nFim da compra.\n\n", 2);
    printf("O valor a pagar ficou em R$%.2f\n", conta);
  
}
