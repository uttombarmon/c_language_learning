// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   char str1[100], str2[100];
//   printf("Enter a string: ");
//   fgets(str1, sizeof(str1), stdin);
//   strcpy(str2, str1);
//   printf("First string: %s\n", str1);
//   printf("Second string: %s\n", str2);
//   return 0;
// }
#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100], str2[100];
  printf("Enter a string: ");
  fgets(str1, sizeof(str1), stdin);
  strcpy(str2, str1);
  printf("String: %s\n Copy String: %s\n", str1, str2);
  return 0;
}
