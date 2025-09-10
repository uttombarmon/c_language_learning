#include <stdio.h>
int main()
{
  // code write here
  int x, y;
  scanf("%d %d", &x, &y);
  if ((x < y && (y - x) <= 2) || (x > y && (x - y) <= 3))
  {
    printf("YES\n");
  }
  else
  {
    printf("No\n");
  }
  return 0;
}
