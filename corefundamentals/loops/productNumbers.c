#include <stdio.h>
int main()
{
  int i = 1, j = 1;
  while (i <= 5)
  {
    j *= i;
    printf("Number: %d, Product: %d \n", i, j);
    i++;
  }
  return 0;
}
