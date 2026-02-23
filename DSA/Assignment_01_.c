#include <stdio.h>

int main()
{
  int s, number, i;

  printf("Enter the array size: ");
  scanf("%d", &s);

  int arr[s];
  for (i = 0; i < s; i++)
  {
    printf("Enter %dth: ", i);
    scanf("%d", &arr[i]);
  }

  printf("Enter finding number: ");
  scanf("%d", &number);

  int m, n, temp;
  // sort the array
  for (m = 0; m < s - 1; m++)
  {
    for (n = 0; n < s - 1; n++)
    {
      if (arr[n] > arr[n + 1])
      {
        temp = arr[n];
        arr[n] = arr[n + 1];
        arr[n + 1] = temp;
      }
    }
  }

  // find the number
  int low = 0, high = s - 1, mid;

  while (low <= high)
  {
    mid = low + (high - low) / 2;
    if (arr[mid] == number)
    {
      printf("%d is found on index %d \n", number, mid);
      break;
    }
    else if (arr[mid] < number)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  if (low > high)
  {
    printf("Not found the number!\n");
  }
  return 0;
}