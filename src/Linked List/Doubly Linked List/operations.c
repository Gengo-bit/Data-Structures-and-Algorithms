#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/*=======================================================================
DESCRIPTION: Function to create a new node
========================================================================*/
struct Node* createNode(int data) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));       // Pointer that holds the address of the newly created node (current node) allocated by malloc
    newNode->data = data;                                                   // Holds the current data and the next pointer
    newNode->prev = NULL;                                                   // Initialize previous pointer to NULL
    newNode->next = NULL;                                                   // Initialize next pointer to NULL
    return newNode;
}

/*=======================================================================
DESCRIPTION: Function to insert at the end of the list
========================================================================*/
void insertEnd(struct Node** head, int data) {                              // Node** = Pointer to a pointer

    struct Node* newNode = createNode(data);                                // Create a new node with the inputted data and store its address in newNode

    if (*head == NULL) {                                                    // If the list is empty (head points to NULL), set head to point to the new node
        *head = newNode;                                                    // Update head to point to the new node
        printf("%d has been inserted.\n", newNode->data);
        return;
    }

    struct Node* temp = *head;                                              // Initialize temp to point to the first node (head) for traversal, *head is from Node**

    while (temp->next != NULL) {                                            // Traverse the list until the last node (where temp->next is NULL)
        temp = temp->next;                                                  // Move temp to the next node
    }

    temp->next = newNode;                                                   // Set the next pointer of the last node to point to the new node
    printf("%d has been inserted.\n", newNode->data);
    newNode->prev = temp;                                                   // Link the new node back to the last node
}

/*=======================================================================
DESCRIPTION: Function to delete a node from the end of the list
========================================================================*/
void deleteEnd(struct Node** head) {                                        // Node** = Pointer to a pointer

    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* temp = *head;                                              // Initialize temp to point to the first node (head) for traversal, *head is from Node**

    if (temp->next == NULL) {                                               // If there's only one node
        printf("%d has been removed.\n", temp->data);
        free(temp);                                                         // Free the memory
        *head = NULL;                                                       // Set the head to NULL
        return;
    }

    while (temp->next != NULL) {                                            // Traverse the list until the last node (where temp->next is NULL)
        temp = temp->next;                                                  // Move temp to the next node
    }

    temp->prev->next = NULL;                                                // Unlink the last node
    printf("%d has been removed.\n", temp->data);
    free(temp);                                                             // Free the memory of the last node
}

/*=======================================================================
DESCRIPTION: Function to print the linked list
========================================================================*/
void printList(struct Node* head) {

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;                                               // Initialize temp to point to the head of the list
    
    printf("Doubly Linked List: ");

    while (temp != NULL) {                                                  // In Singly Linked List, the last node's next is NULL, so traverse until it is NULL
        printf("%d -> ", temp->data);                                       // Print the data stored in the current node (not the address)
        temp = temp->next;                                                  // Move temp to the next node in the list, only stop if next is already null
    }
    printf("\n");
}
