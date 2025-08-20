#include <stdio.h>
int main()
{
  int n, sum = 0;
  printf("Enter 10 integer numbers-\n");
  for (int i = 1; i <= 10; i++)
  {
    scanf("%d \n", &n);
    sum += n;
  }
  float avg = sum / 10;
  printf("Sum: %d\n Average: %f\n", sum, avg);

  return 0;
}
