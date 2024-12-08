/*================================================================================
FILE        : main.c
AUTHOR      : Paul Emmanuel Corsino
DESCRIPTION : a simple Singly Linked List Structure 
DATE        : Dec 7 2024
================================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {

    struct Node* head = NULL;                                  // Initialize an empty list, point to the first node once nodes are inserted

    printList(head);
    insertEnd(&head, 10);                                      // &head = Node** head, head = Node*
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);

    printList(head);

    return 0;
}
