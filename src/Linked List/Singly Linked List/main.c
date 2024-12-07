/*================================================================================
FILE        : main.c
AUTHOR      : Paul Emmanuel Corsino
DESCRIPTION : a simple Singly Linked List Structure 
DATE        : Dec 1 2024
================================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {

    struct Node* head = NULL;                                  // Initialize an empty list, point to the first node once nodes are inserted

    printList(head);
    insertAtEnd(&head, 10);                                    // &head = Node** head, head = Node*
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);

    printList(head);

    return 0;
}
