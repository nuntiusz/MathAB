#include <stdio.h>

int main()
{
  int n1, n2, som, mul, div, sub;

  printf("Entre com n1: ");
  scanf("%d", &n1);
  printf("Entre com n2: ");
  scanf("%d", &n2);

  printf("\n");

  //soma
  som = (n1 + n2);
  printf("Soma\n");
  printf("%d + %d = %d\n", n1,n2, som);

  printf("\n");

  //multiplicação
  mul = (n1 * n2);
  printf("Multiplicação\n");
  printf("%d * %d = %d\n", n1,n2, mul);

  printf("\n");

  //divisão
  div = (n1 / n2);
  printf("Divisão\n");
  printf("%d / %d = %d\n", n1,n2, div);

  printf("\n");

  //subtração
  sub = (n1 - n2);
  printf("Subtração\n");
  printf("%d - %d = %d\n", n1,n2, sub);
}
