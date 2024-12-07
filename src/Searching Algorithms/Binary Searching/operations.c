#include <stdio.h>
#include "header.h"

/*=======================================================================
DESCRIPTION: Function to perform binary search
========================================================================*/
int binarySearch(int arr[], int size, int key) {                            // Only works on sorted arrays (1,2,3,4) or (4,3,2,1)

    int low = 0, high = size - 1;                                           // low = arr[0], high = arr[n] - 1 == high = max

    while (low <= high) {

        int mid = low + (high - low) / 2;                                   // Calculate the mid-point to avoid overflow

        if (arr[mid] == key) {
            return mid;                                                     // Key found at index mid if key = arr[mid]
        } else if (arr[mid] < key) {
            low = mid + 1;                                                  // if middle is less than key, search in the right half
        } else {
            high = mid - 1;                                                 // if not, Search in the left half
        }
    }
    return -1;                                                              // -1 if Key not found
}