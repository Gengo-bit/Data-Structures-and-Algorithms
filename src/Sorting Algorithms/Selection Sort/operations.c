#include <stdio.h>
#include "header.h"

/*=======================================================================
DESCRIPTION: Function to perform selection sort
========================================================================*/
void selectionSort(int arr[], int size) {
    
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;                                                   // Assume the first element is the minimum
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {                                   // Find the smallest element
                minIndex = j;
            }
        }
                                                    
        int temp = arr[minIndex];                                           // Swap the found minimum element with the first element
        arr[minIndex] = arr[i];
        arr[i] = temp;
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