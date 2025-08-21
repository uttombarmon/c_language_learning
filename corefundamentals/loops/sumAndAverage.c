#include <stdio.h>
int main()
{
  int n, sum = 0;
  printf("Enter 10 integer numbers-\n");
  for (int i = 1; i <= 10; i++)
  {
    printf("%d Number: ", i);
    scanf("%d", &n);
    sum = sum + n;
  }
  float avg = (float)sum / 10;
  printf("Sum: %d\n Average: %.1f\n", sum, avg);
  return 0;
}
