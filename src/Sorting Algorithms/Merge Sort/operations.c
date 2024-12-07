#include <stdio.h>
#include "header.h"

/*=======================================================================
DESCRIPTION: Function to merge two subarrays into a single sorted array
========================================================================*/
void merge(int arr[], int left, int mid, int right) {

    int n1 = mid - left + 1;                                                // Size of the left subarray
    int n2 = right - mid;                                                   // Size of the right subarray

    int leftArr[n1], rightArr[n2];                                          // Temporary arrays for left and right subarrays

    for (int i = 0; i < n1; i++) {                                          // Copy data into temporary arrays
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

                                                                            // Merge the two temporary arrays back into the original array
    int i = 0, j = 0, k = left;                                             // Initial indices

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {                                    // Compare left array and right array
            arr[k] = leftArr[i];                                            // Place smaller element to the left, arr[k]
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {                                                        // Copy any remaining elements of leftArr
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {                                                        // Copy any remaining elements of rightArr
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

/*=======================================================================
DESCRIPTION: Recursive function to divide the array and sort each part
========================================================================*/
void mergeSort(int arr[], int left, int right) {

    if (left < right) {
        int mid = left + (right - left) / 2;                                // Find the midpoint

        mergeSort(arr, left, mid);                                          // Recursively sort the left half
        mergeSort(arr, mid + 1, right);                                     // Recursively sort the right half

        merge(arr, left, mid, right);                                       // Merge the sorted halves
    }
}

/*=======================================================================
DESCRIPTION: Function to print the array
========================================================================*/
void printArray(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}