/* O programa faz a multiplicação de três números enviados pelo teclado do usuário */

#include <stdio.h>

int main () 
{
  int num1, num2, num3;
  printf("Entre com os 3 números:\n");
  scanf("%d %d %d", &num1, &num2, &num3);
  
  printf("O resultado da multiplicação é = %d", num1 * num2 * num3);
  return 0;
}
