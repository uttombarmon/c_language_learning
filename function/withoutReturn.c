#include <stdio.h>
void congratulate(char[]);
int main()
{
  char name[50];
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  congratulate(name);

  return 0;
}
void congratulate(char name[])
{
  printf("Congratulation Mr./ Ms. %s", name);
}
