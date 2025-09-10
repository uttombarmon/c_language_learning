#include <stdio.h> // this line including standard input out libary c

int main() // main fuction
{
  char character;                                                   // declares a character variable to store the input character.
  printf("Enter a character: ");                                    // ask the user to enter a single character.
  scanf("%c", &character);                                          // read the character input from the user.
  printf("The ASCII value of '%c' is %d.\n", character, character); // prints the character and its corresponding ASCII value.

  return 0; // program success stautus code
}
