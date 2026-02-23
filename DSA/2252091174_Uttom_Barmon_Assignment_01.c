#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the value to search for: ");
    scanf("%d", &target);

    // Sort the array by bubble sorting
    int temp;
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = 0; k < n - j - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Find the number by binary searching
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {

            printf("Element %d found at index %d of the sorted array.\n", target, mid);
            break;
        }

        if (arr[mid] < target)
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
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}