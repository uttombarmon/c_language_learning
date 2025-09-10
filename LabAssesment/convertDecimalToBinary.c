#include <stdio.h>

int main()
{
  int n, binary[32], i = 0; // n = input number, binary[] = store binary digits
  printf("Enter a decimal number: ");
  scanf("%d", &n); // Take input

  // Convert decimal to binary
  while (n > 0)
  {
    binary[i] = n % 2; // Store remainder (0 or 1)
    n /= 2;            // Divide number by 2
    i++;               // Increase index
  }

  printf("Binary representation: ");
  // Print binary in reverse order
  for (int j = i - 1; j >= 0; j--)
  {
    printf("%d", binary[j]);
  }
  printf("\n");

  return 0;
}
