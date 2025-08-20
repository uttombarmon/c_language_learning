#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char str[100];
  int i, word = 0;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
    {
      word++;
    }
  }
  printf("Words are: %d", word);
  return 0;
}
