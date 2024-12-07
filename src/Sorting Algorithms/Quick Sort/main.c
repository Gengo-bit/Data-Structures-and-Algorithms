/*================================================================================
FILE        : main.c
AUTHOR      : Paul Emmanuel Corsino
DESCRIPTION : a simple Quick Sort Algorithm
DATE        : Dec 1 2024
================================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    
    int arr[] = {34, 7, 23, 32, 5, 62, 32, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, size);

    quickSort(arr, 0, size - 1);                                                    // Choose where to start or end

    printf("Sorted array: \n");
    printArray(arr, size);

    return 0;
}
