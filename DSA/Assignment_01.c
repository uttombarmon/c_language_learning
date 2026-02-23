#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform Binary Search
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents potential overflow

        if (arr[mid] == target)
            return mid; // Return index if found
        
        if (arr[mid] < target)
            low = mid + 1; // Look in the right half
        else
            high = mid - 1; // Look in the left half
    }
    return -1; // Return -1 if not found
}

int main() {
    int n, target, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declaring array of size n
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search for: ");
    scanf("%d", &target);

    // Step 1: Sort the array (Required for Binary Search)
    bubbleSort(arr, n);

    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 2: Search the array
    int result = binarySearch(arr, n, target);

    if (result != -1) {
        printf("Element %d found at index %d of the sorted array.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}