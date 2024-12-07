#ifndef HEADER_H
#define HEADER_H

// Define the structure for a doubly linked list node
struct Node {
    int data;               // Data part of the node
    struct Node* prev;      // Pointer to the previous node
    struct Node* next;      // Pointer to the next node
};

struct Node* createNode(int data);
void insertEnd(struct Node** head, int data);
void deleteEnd(struct Node** head);
void printList(struct Node* head);

#endif