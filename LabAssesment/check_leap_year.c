#include <stdio.h> // this line including standard input out libary c
int main()         // main fuction
{
  int year;                                                    // declare a integer variable to store year
  printf("Enter a year: ");                                    // ask the use to enter year
  scanf("%d", &year);                                          // read the year value from user
  if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) // Checking the leap year conditions using logical OR (||) and AND (&&).
  {
    printf("%d is a leap year.\n", year); // true statement then print the leap year.
  }
  else
  {
    printf("%d is not a leap year.\n", year); // false statement, Print that it is not a leap year.
  }
  return 0; // program successful stautus code
}
