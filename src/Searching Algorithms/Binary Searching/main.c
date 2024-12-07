/*================================================================================
FILE        : main.c
AUTHOR      : Paul Emmanuel Corsino
DESCRIPTION : a simple Binary Searching Algorithm
DATE        : Dec 1 2024
================================================================================*/
#include <stdio.h>
#include "header.h"

int main() {
    int arr[] = {10, 20, 30, 40, 50};                                               
    int size = sizeof(arr) / sizeof(arr[0]);                                        // Calculate the size of the array
    int key;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, size, key);                                      

    if (result != -1) {
        printf("Element %d is found at index %d.\n", key, result);
    } else {
        printf("Element %d is not found in the array.\n", key);
    }

    return 0;
}
