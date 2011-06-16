#include <stdio.h> 

int print_n_1(int n)
{
  printf("%d * 1 = %d\n", n, n * 1);
}

int main()
{
  int n;
  scanf("%d", &n);
  print_n_1(n);
  return 0;
}
