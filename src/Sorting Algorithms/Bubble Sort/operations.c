#include <stdio.h>
#include "header.h"

/*=======================================================================
DESCRIPTION: Function to perform bubble sort
========================================================================*/
void bubbleSort(int arr[], int size) {

    for (int i = 0; i < size - 1; i++) {                                    // Loop over each element
        for (int j = 0; j < size - i - 1; j++) {                            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {                                      // If the current element is greater, swap them
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;                                          // Repeat until no more elements can be swapped
            }
        }
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