#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/*=======================================================================
DESCRIPTION: Function to swap two elements
========================================================================*/
void swap(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

/*=======================================================================
DESCRIPTION: Partition function to arrange elements around the pivot
========================================================================*/
int partition(int arr[], int low, int high) {

    int pivot = arr[high];                                                  // Select the last element in the array as the pivot   , can also choose the first element or median of three
    int i = low - 1;                                                        // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {                                               // If element is < pivot, arr[i] = initial array, arr[j] = pivot
            i++;                                                            
            swap(&arr[i], &arr[j]);                                         // Compare each element to the pivot and then swap smaller elements with larger ones, one at a time
        }
    }
    swap(&arr[i + 1], &arr[high]);                                          // Place the pivot right after the sorted elements
    return i + 1;
}

/*=======================================================================
DESCRIPTION: Recursive quicksort function
========================================================================*/
void quickSort(int arr[], int low, int high) {

    if (low < high) {
        int pivotIndex = partition(arr, low, high);
                                                                            // Divide into sub-arrays and divide using a divide-and-conquer approach
                                                                            // Sort the elements to the left and right of the pivot
        quickSort(arr, low, pivotIndex - 1);                                // Left sub-array, sort everything to the left of the pivot
        quickSort(arr, pivotIndex + 1, high);                               // Right sub-array, sort everything to the right of the pivot
    }                                                                       // Continue until low >= high is met
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