#include <stdio.h>
#include <string.h>
struct example_struct
{
  /* data */
  int num1;
  float num2;
  char fav_char[2];
};
void revalue(void);
int main(int argc, char const *argv[])
{
  /* code */
  struct example_struct test;
  test.num1 = 23;
  test.num2 = 12.03;
  strcpy(test.fav_char, "c");
  printf("Nmber one: %d\n", test.num1);
  printf("Nmber one: %f\n", test.num2);
  printf("Nmber one: %s\n", test.fav_char);
  printf("___revalue function___\n");
  revalue();
  return 0;
}
void revalue()
{
  struct example_struct test = {2, 3.12, "b"};
  printf("Nmber one: %d\n", test.num1);
  printf("Nmber one: %f\n", test.num2);
  printf("Nmber one: %s\n", test.fav_char);
}
