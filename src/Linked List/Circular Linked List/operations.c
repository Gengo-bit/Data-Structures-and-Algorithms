#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/*=======================================================================
DESCRIPTION: Function to create a new node
========================================================================*/
struct Node* createNode(int data) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));       // Pointer that holds the address of the newly created node (current node) allocated by malloc
    newNode->data = data;                                                   // Holds the current data and the next pointer
    newNode->next = NULL;                                                   // Initializes the current data and the next pointer to NULL
    return newNode;                                                         // Returns the current Node
}

/*=======================================================================
DESCRIPTION: Function to insert a node at the end of the linked list
========================================================================*/
void insertEnd(struct Node** tail, int data) {                              // Node** = Pointer to a pointer

    struct Node* newNode = createNode(data);                                // Create a new node with the inputted data and store its address in newNode

    if (*tail == NULL) {                                                    // If the list is empty
        *tail = newNode;
        newNode->next = newNode;                                            // Point the new node to itself
    } else {
        newNode->next = (*tail)->next;                                      // Point newNode to the head
        (*tail)->next = newNode;                                            // Update tail's next
        *tail = newNode;                                                    // Make the newNode the new tail
    }

    printf("%d has been inserted.\n", data);
}

/*=======================================================================
DESCRIPTION: Function to delete a node from the end of the linked list
========================================================================*/
void deleteEnd(struct Node** tail) {

    if (*tail == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* head = (*tail)->next;                                      // The head node
    if (head == *tail) {                                                    // Only one node in the list
        printf("%d has been removed.\n", head->data);
        free(head);
        *tail = NULL;
        return;
    }

    struct Node* temp = head;
    while (temp->next != *tail) {                                           // Traverse to the second last node
        temp = temp->next;
    }

    printf("%d has been removed.\n", (*tail)->data);
    temp->next = head;                                                      // Link the second last node to the head
    free(*tail);                                                            // Free the last node
    *tail = temp;                                                           // Update the tail
}

/*=======================================================================
DESCRIPTION: Function to display the circular linked list
========================================================================*/
void printList(struct Node* tail) {

    if (tail == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = tail->next;                                         // Start from the head

    printf("Circular Linked List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != tail->next);                                           // Loop until we come back to the head
    printf("\n");
}
