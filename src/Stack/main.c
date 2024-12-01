/*================================================================================
FILE        : main.c
AUTHOR      : Paul Emmanuel G. Corsino
DESCRIPTION : a simple Stack Data Structure 
DATE        : Dec 1 2024
================================================================================*/
#include <stdio.h> 
#include "header.h"

int main() {
    
                // {_,_,_,_,_}, top = -1
    push(10);   // {10,_,_,_,_}, top = 0
    push(20);   // {20,10,_,_,_},  top = 1
    push(30);   // {30,20,10,_,_}, top = 2
    push(40);   // {40,30,20,10,_}, top = 3
    display(); 
    pop();      // {30,20,10,_,_}, top = 2
    display();

    return 0; 
}
