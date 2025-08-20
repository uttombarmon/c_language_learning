#include <stdio.h>
int main()
{
  // code write here
  char str[100];
  int i = 0;
  printf("Enter the string: ");
  fgets(str, sizeof(str), stdin);
  // scanf("%s\n", &str);
  printf("The charcters of th string are:\n");
  while (str[i] != '\0')
  {
    printf("%c", str[i]);
    i++;
  }
  printf("\n");
  return 0;
}
