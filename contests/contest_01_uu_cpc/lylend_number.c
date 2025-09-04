#include <stdio.h>
int main()
{
  // code write here
  int a, b, sum1 = 1, sum2 = 1, total;
  scanf("%d", &a);
  scanf("%d", &b);
  for (int i = 0; i < b; i++)
  {
    /* code */
    sum1 *= a;
  }
  for (int j = 0; j < a; j++)
  {
    /* code */
    sum2 *= b;
  }
  total = sum1 + sum2;
  printf("%d\n", total);

  return 0;
}
