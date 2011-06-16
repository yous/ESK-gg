#include <stdio.h> 

int print_1_n(int n)
{
  printf("1 * %d = %d\n", n, 1 * n);
}

int main()
{
  int n;
  scanf("%d", &n);
  print_1_n(n);
  return 0;
}
