#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the key is present at the middle
        if (arr[mid] == key)
            return mid;

        // If the key is greater, ignore the left half
        else if (arr[mid] < key)
            low = mid + 1;

        // If the key is smaller, ignore the right half
        else
            high = mid - 1;
    }

    // If the key is not present in the given array
    return -1;
}

int main() {
    int n, key;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input the element to be searched
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform binary search on these set of elements
    int result = binarySearch(arr, 0, n - 1, key);

    // Print the result
    if (result != -1)
        printf("Element found at index %d.\n", result);
    else
        printf("Element not found in the array.\n");

    return 0;
}
