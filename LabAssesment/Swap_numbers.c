#include <stdio.h> // this line including standard input out libary c
int main()         // main fuction
{
  int a, b, c;                                                 // declare three integer variables
  printf("Enter integer number a :");                          // ask the user to enter a integer value
  scanf("%d", &a);                                             // read a variable values from user
  printf("Enter integer number b:");                           // ask the use to enter b integer value
  scanf("%d", &b);                                             // read b variable values from user
  printf(" a = %d \n b = %d\n", a, b);                         // print declare variables
  c = a;                                                       // store a value in c variable
  a = b;                                                       // store b value in a variable
  b = c;                                                       // store c value in b variable
  printf("After swap the values:\n a = %d \n b = %d\n", a, b); // finally print swap values
  return 0;                                                    // program success status code
}
