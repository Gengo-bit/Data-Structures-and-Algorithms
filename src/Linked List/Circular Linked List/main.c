/*================================================================================
FILE        : main.c
AUTHOR      : Paul Emmanuel Corsino
DESCRIPTION : a simple Circular Linked List Structure 
DATE        : Dec 7 2024
================================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    
    struct Node* tail = NULL;                                  // Initialize an empty list, point to the first node once nodes are inserted

    insertEnd(&tail, 10);                                      // &tail = Node** tail, tail = Node*
    insertEnd(&tail, 20);
    insertEnd(&tail, 30);
    printList(tail);

    deleteEnd(&tail);
    printList(tail);

    deleteEnd(&tail);
    printList(tail);

    deleteEnd(&tail);
    printList(tail);

    return 0;
}
