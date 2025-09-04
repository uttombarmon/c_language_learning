#include <stdio.h>
int main()
{
  // code write here
  int l, w, area, perimeter;
  scanf("%d", &l);
  scanf("%d", &w);
  area = l * w;
  perimeter = 2 * (l + w);
  printf("%d %d\n", area, perimeter);
  return 0;
}
