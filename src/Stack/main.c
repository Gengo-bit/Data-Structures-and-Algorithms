/*================================================================================
FILE        : main.c
AUTHOR      : Paul Emmanuel G. Corsino
DESCRIPTION : a simple Stack Data Structure 
DATE        : Dec 1 2024
================================================================================*/
#include <stdio.h> 
#include "header.h"

int main() {

    push(10);   // {10,_,_,_,_}
    push(20);   // {20,10,_,_,_}
    push(30);   // {30,20,10,_,_}
    push(40);   // {40,30,20,10,_}
    display(); 
    pop();      // {30,20,10,_,_}
    display();

    return 0; 
}
