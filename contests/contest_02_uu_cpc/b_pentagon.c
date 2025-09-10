#include <stdio.h>
int check_diff(int n1, int n2)
{
  if (n1 > n2)
  {
    int temp = n1;
    n1 = n2;
    n2 = temp;
  }
  int diff = n2 - n1;
  if (diff > 0)
  {
    return diff;
  }
  else
  {
    return diff;
  }
}
int main()
{
  // code write here
  char s1, s2, t1, t2;
  scanf("%c%c %c%c", &s1, &s2, &t1, &t2);
  // scanf("%c%c", &t1, &t2);
  // printf("This is test:%c\n", s1);
  // printf("This is test:%c\n", s2);
  // printf("This is test:%c\n", t1);
  // printf("This is test:%c\n", t2);
  if (s1 == t1 || s1 == t2 || s2 == t1 || s2 == t2)
  {
    // printf("DFDFD");
    int side1 = check_diff(s1, s2);
    int side2 = check_diff(t1, t2);
    if (side1 == side2)
    {
      printf("Yes\n");
    }
    else
    {
      printf("No\n");
    }
  }
  else
  {
    printf("No\n");
  }

  return 0;
}
