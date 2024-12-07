/*================================================================================
FILE        : main.c
AUTHOR      : Paul Emmanuel Corsino
DESCRIPTION : a simple Doubly Linked List Structure 
DATE        : Dec 7 2024
================================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    struct Node* head = NULL; // Initialize the head of the list

    // Perform operations
    insertEnd(&head, 10);     // Insert 10
    insertEnd(&head, 20);     // Insert 20
    insertEnd(&head, 30);     // Insert 30
    printList(head);            // Display list

    deleteEnd(&head);         // Delete last node
    printList(head);            // Display list after deletion

    deleteEnd(&head);         // Delete last node
    printList(head);            // Display list after deletion

    deleteEnd(&head);         // Delete last node
    printList(head);            // Display list after deletion

    return 0;
}
