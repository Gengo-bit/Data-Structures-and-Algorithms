#include <stdio.h>
#include "header.h"

/*=======================================================================
DESCRIPTION: Function to perform insertion sort
========================================================================*/
void insertionSort(int arr[], int size) {

    for (int i = 1; i < size; i++) {                                        // Start from the second element
        int key = arr[i];                                                   // The element to be inserted
        int j = i - 1;                                                      // Compare with elements in the sorted part

        while (j >= 0 && arr[j] > key) {                                    // Shift elements that are greater than key to one position ahead
            arr[j + 1] = arr[j];                                            // Element shifter (to the right)
            j--;                                                            // Move j to the left
        }
        arr[j + 1] = key;                                                   // Place the key in its correct position (specific index)
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