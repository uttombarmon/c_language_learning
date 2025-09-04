#include <stdio.h>
int main()
{
  // code write here
  int n, a, b, c, abc, bca, cab, sum;
  scanf("%d", &n);
  a = n / 100;
  b = (n / 10) % 10;
  c = n % 10;
  abc = ((100 * a) + (10 * b) + c);
  bca = ((100 * b) + (10 * c) + a);
  cab = ((100 * c) + (10 * a) + b);
  sum = abc + bca + cab;
  printf("%d\n", sum);
  return 0;
}
