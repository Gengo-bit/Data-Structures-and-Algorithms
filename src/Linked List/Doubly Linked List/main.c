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

    struct Node* head = NULL;                                  // Initialize an empty list, point to the first node once nodes are inserted

    insertEnd(&head, 10);                                      // &head = Node** head, head = Node*
    insertEnd(&head, 20);     
    insertEnd(&head, 30);     
    printList(head);           

    deleteEnd(&head);       
    printList(head);       

    deleteEnd(&head);      
    printList(head);          

    deleteEnd(&head);      
    printList(head);         

    return 0;
}
