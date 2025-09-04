#include <stdio.h>
int main()
{
  // code write here
  int a, b, sum = 1;
  scanf("%d", &a);
  scanf("%d", &b);
  for (int i = 0; i < b; i++)
  {
    /* code */
    sum *= a;
  }
  printf("%d", sum);
  return 0;
}
