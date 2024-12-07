#include <stdio.h>
#include "header.h"

/*=======================================================================
DESCRIPTION: Function to perform linear search
========================================================================*/
int linearSearch(int arr[], int size, int key) {

    for (int i = 0; i < size; i++) {                                    // Continues to search until found or the end of the array is reached
        if (arr[i] == key) {                                            // Check if the current element matches the key
            return i;                                                   // Return the index of the key
        }
    }
    return -1;                                                          // Return -1 if the key is not found
}