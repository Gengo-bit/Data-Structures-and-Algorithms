#include <stdio.h> 
#include "header.h"

int stack[MAX];     // stack[_,_,_,_,_] [0,1,2,3,4]
int top = -1;       // -1 is 0

/*=======================================================================
DESCRIPTION: Function to push an element onto the stack
========================================================================*/
void push(int value) {

    if (top == MAX - 1) {                               // If Max = 4 == Stack Overflow
        printf("Stack Overflow\n");
    } 
    else {
        stack[++top] = value;                           // Increment top and add value to stack
        printf("%d pushed to stack\n", value);  
    }

}

/*=======================================================================
DESCRIPTION: Function to pop an element from the stack
========================================================================*/
int pop() {

    if (top == -1) {                                    // Stack Underflow if default
        printf("Stack Underflow\n"); 
        return -1;                              
    } 
    else {
        printf("%d popped from stack\n", stack[top]);   
        return stack[top--];                            // Return the top value and decrement top
    }
}

/*=======================================================================
DESCRIPTION: Function to display the stack
========================================================================*/
void display() {

    if (top == -1) {                                    // Stack is empty if default
        printf("Stack is empty\n");                     
    } 
    else {
        printf("Stack elements are: "); 
        for (int i = 0; i <= top; i++) {                // Loop through the stack elements
            printf("%d ", stack[i]); 
    }
        printf("\n"); 
    }
}