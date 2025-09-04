#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
int main()
{
  // code write here
  double r, area, circum;
  scanf("%lf", &r);
  area = M_PI * r * r;
  circum = 2 * M_PI * r;
  printf("%lf %lf", area, circum);
  return 0;
}
