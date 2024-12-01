    #include <stdio.h>
    #include "header.h"

    int queue[MAX];     // queue[_,_,_,_,_] [0,1,2,3,4]
    int front = -1;     // -1 = empty, start at 0
    int rear = -1;      // -1 = empty, start at 0

    /*=======================================================================
    DESCRIPTION: Function to enqueue an element into the queue
    ========================================================================*/
    void enqueue(int value) {

        if (rear == MAX - 1) {                                  // If Max = 4 == Queue Overflow
            printf("Queue Overflow\n"); 
        } 
        else {
            if (front == -1) front = 0;                         // If queue is empty, set front to 0
            queue[++rear] = value;                              // Increment rear and add value to queue
            printf("%d added to queue\n", value); 
        }
    }

    /*=======================================================================
    DESCRIPTION: Function to dequeue an element from the queue
    ========================================================================*/
    int dequeue() {

        if (front == -1 || front > rear) {                      // If default or front = 0 & rear = -1, Underflow
            printf("Queue Underflow\n");                        
            return -1; 
        } 
        else {
            printf("%d removed from queue\n", queue[front]); 
            return queue[front++];                              // Return the front value and increment front
        }
    }

    /*=======================================================================
    DESCRIPTION: Function to display the queue
    ========================================================================*/
    void display() {

        if (front == -1 || front > rear) {                      // If default or front = 0 & rear = -1, Queue is empty
            printf("Queue is empty\n"); 
        } else {
            printf("Queue elements are: "); 
            for (int i = front; i <= rear; i++) {               // Loop through the queue elements
                printf("%d ", queue[i]); 
            }
            printf("\n"); 
        }
    }