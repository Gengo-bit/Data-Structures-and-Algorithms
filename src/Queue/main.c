/*================================================================================
FILE        : main.c
AUTHOR      : Paul Emmanuel G. Corsino
DESCRIPTION : a simple Queue Data Structure 
DATE        : Dec 1 2024
================================================================================*/
#include <stdio.h>
#include "header.h"

int main() {

                    // Queue: [_, _, _, _, _], 
    enqueue(10);    // Queue: [10, _, _, _, _], front = 0, rear = 0
    enqueue(20);    // Queue: [10, 20, _, _, _], front = 0, rear = 1
    enqueue(30);    // Queue: [10, 20, 30, _, _], front = 0, rear = 2
    display(); 
    dequeue();      // Queue: [10, 20, 30, _, _], front = 1, rear = 2   (10 is not removed but dequeued)
    display(); 
    enqueue(40);    // Queue: [10, 20, 30, 40, _], front = 1, rear = 3   
    display(); 
    enqueue(50);    // Queue: [10, 20, 30, 40, 50], front = 1, rear = 4   
    enqueue(60);    // Queue: [10, 20, 30, 40, 50]60, front = 1, rear = 4  (Queue Overflow because MAX is 5)
    display();      // Displays [20,30,40,50], does not display 10 because it is dequeued (the new front is 1)
    return 0; 
    
}
