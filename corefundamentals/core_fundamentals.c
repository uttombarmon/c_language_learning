#include <stdio.h>

int main()
{
  // text print
  //  printf("Hey Guys, Nice to meet you!");

  // create tab space and new line by using escape keywords
  // printf("\tI am new in C.\nCan you help me?");

  // comments
  // prinf("This is single line comment");
  /*
  printf("This is multiline comments");
  printf("This is multiline comments");
  */

  // variables and datatypes(int, float, daouble, char, void....)
  //  type variableName = value;
  // int age = 30;                    // int(type) age(variable name) = 30(value) -- size 2 Bytes --range -32768 - 32767
  // float balance = 100.50;          // float(type) balance(variable name) = 100.50(value) --size 4 Bytes  -- ran 3.40282347*10^-38 - 3.40282347*10^38
  // double transaction = 454424.445; // double(type) trans range - 1.7*10^-308 - 1.7*10^308
  // char section = 'C';              // char(type) section(variable name) = "C"(value)
  // void show(){ printf("Void Data!");} // void(type) show()(function name){....}(function body and no return data)

  // // format specifiers & variables print
  // printf("%d\n", age); //int data print %d, %i, %u(unsigned), %hd(default short int), %hu(unsigned short int),
  // printf("%f\n", balance); //float data print (%f)
  // printf("%lf\n", transaction); // double data print %lf
  // printf("%c\n", section);
  /*
  char name[] = "Mr. X";
  printf("%s", &name);
  */

  // multiple variables
  // int a = 5, b = 6, c = 2;
  // printf("a = %d, b = %d, c = %d", a, b, c);
  // same value in multiple variables
  // int x, y, z;
  // x = y = z = 3;
  // printf("x = %d, y = %d, z = %d ", x, y, z);
  int my_int = 21;
  printf("%zu\n", sizeof(my_int));
  // float my_float = 21.09;
  // printf("%zu\n", sizeof(my_float));
  // float my_double = 21454545.045459;
  // printf("%zu\n", sizeof(my_double));
  // char my_char = 'f';
  // printf("%zu\n", sizeof(my_char));

  return 1;
}
