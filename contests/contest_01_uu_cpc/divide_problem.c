#include <stdio.h>
int main()
{
  // code write here
  int a, b, d, r;
  double f;
  scanf("%d", &a);
  scanf("%d", &b);
  d = a / b;
  r = a % b;
  f = (double)a / b;
  printf("%d %d %.5f", d, r, f);
  return 0;
}
