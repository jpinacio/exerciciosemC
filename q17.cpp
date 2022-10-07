/*17) O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares 
consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 4
2=1+3+5+7, etc. Dado um número n, 
calcule seu quadrado usando a soma de ímpares ao invés de produto.*/

#include <stdio.h>

int main()
{
  int n,
      c,
      s = 1,
      q = 0;

  printf("Digite um valor: ");
  scanf("%d",&n);  

  for (c = 0; c < n; c++) {
    q += s;
    s += 2;
  }

  printf("O quadrado de %d vale: %d.\n", n, q);    
  return 0;
}
