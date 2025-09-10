#include <stdio.h>
int main()
{
  // code write here
  int a, b, max;
  scanf("%d %d", &a, &b);
  if (a > b)
  {
    max = a + (a - 1);
  }
  else if (b > a)
  {
    max = b + (b - 1);
  }
  else
  {
    max = a + b;
  }
  printf("%d", max);
  return 0;
}
