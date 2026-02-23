#include <stdio.h>

int main()
{
  int s, number, i, j, k, temp;

  printf("Enter the array size: ");
  scanf("%d", &s);

  int arr[s];
  for (i = 0; i < s; i++)
  {
    printf("Enter %dth: ", i);
    scanf("%d", &arr[i]);
  }

  printf("Enter the number which want to find in array: ");
  scanf("%d", &number);

  // sort arr[] elements
  for (j = 0; j < s - 1; j++)
  {
    for (k = 0; k < s - 1; k++)
    {
      if (arr[k] > arr[k + 1])
      {
        temp = arr[k];
        arr[k] = arr[k + 1];
        arr[k + 1] = temp;
      }
    }
  }

  // find the number
  int l = 0, h = s - 1;

  while (l <= h)
  {
    int m = (h - l) / 2;
    if (arr[m] == number)
    {
      printf("%d is found on %d \n", number, m);
      break;
    }
    else if (arr[m] < number)
    {
      l = m + 1;
    }
    else
    {
      h = m - 1;
    }
  }
  if (l > h)
  {
    printf("Not found the number!\n");
  }
  return 0;
}