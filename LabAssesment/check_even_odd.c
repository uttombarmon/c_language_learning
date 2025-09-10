#include <stdio.h>
int main()
{
  int number;                         // initial number variable
  printf("Enter a integer number: "); // print the line to understand user given a integer number
  scanf("%d", &number);               // getting a number from user
  if (number % 2 == 0)                // check number is odd or even
  {
    printf("%d number is even.", number); // true statement, print even number
  }
  else
  {
    printf("%d number is odd.", number); // false statement, print odd number
  }
  return 0;
}
