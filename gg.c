#include <stdio.h> 

int print_n(int n)
{
  int i;
  for (i = 1; i < 10; i++)
    printf("%d * %d = %d\n", n, i, n * i);
}

int main()
{
  int n;
  scanf("%d", &n);
  print_n(n);
  return 0;
}
