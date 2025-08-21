#include <stdio.h>
int area();
int main()
{
  int l, w, areavalue;
  printf("Enter the length value: ");
  scanf("%d", &l);
  printf("Enter the width value: ");
  scanf("%d", &w);
  areavalue = area(l, w);
  printf("Your Area is : %d", areavalue);
  return 0;
}
int area(int length, int width)
{
  int result = length * width;
  return result;
}
