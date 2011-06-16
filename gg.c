#include <stdio.h>

int print_n_m(int m)
{
  printf("n * %d = %d\n", m, 7 * m);
}

int main()
{
  int m;
  scanf("%d", &m);
  print_n_m(m);
  return 0;
}
