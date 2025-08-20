#include <stdio.h>
struct teacher
{
  char name[30];
  char deparment[30];
  int id;
};
struct student
{
  char name[30];
  char deparment[30];
  int student_id;
};
int main()
{
  struct teacher t1 = {"Susmita", "CSE", 172};
  struct student s1 = {"Uttom", "CSE", 174};

  return 0;
}
