/*================================================================================
FILE        : main.c
AUTHOR      : Paul Emmanuel Corsino
DESCRIPTION : a simple Bubble Sort Algorithm
DATE        : Dec 8 2024
================================================================================*/
#include <stdio.h>
#include "header.h"

int main() {

    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    bubbleSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
