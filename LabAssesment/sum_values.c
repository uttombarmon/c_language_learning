#include <stdio.h>

int main()
{
  int n, sum = 0, digit; // declare variables

  // Ask user for input
  printf("Enter a number: ");
  scanf("%d", &n); // read the number

  // Loop until the number becomes 0
  while (n > 0)
  {
    digit = n % 10; // Extract the last digit
    sum += digit;   // Add that digit to the sum
    n /= 10;        // Remove the last digit from n
  }

  printf("Sum of digits = %d\n", sum); // Print the resultz

  return 0;
}
