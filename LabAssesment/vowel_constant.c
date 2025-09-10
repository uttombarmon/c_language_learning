#include <stdio.h>

int main()
{
  char ch; // Variable to store input character
  printf("Enter an alphabet: ");
  scanf("%c", &ch); // Take input character

  // Check if character is vowel (both upper and lowercase)
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
  {
    printf("%c is a Vowel\n", ch); // print vowel
  }
  else
  {
    printf("%c is a Consonant\n", ch); // print consonant
  }

  return 0;
}
