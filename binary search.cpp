#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
            
            
            
            
            
        if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    printf("Array elements and their indices:\n");
    for (int i = 0; i < size; i++) {
        printf("Index %d: Element %d\n", i, arr[i]);
    }

    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Element %d is present at index %d\n", target, result);
    else
        printf("Element %d is not present in array\n", target);

    return 0;
}
