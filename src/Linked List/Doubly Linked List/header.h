#ifndef HEADER_H
#define HEADER_H

struct Node {               // data = holds the address of the node, next = holds the address of the next node
    int data;               // 4 bytes, Singly Linked List:  [   data    ][next]   Doubly Linked List:    [prev][    data    ][next]     Circular Linked List: [lastNode][   data    ][next]
    struct Node* prev;      // 8 bytes, Pointer to the prev node
    struct Node* next;      // 8 bytes, Pointer to the next node
};

struct Node* createNode(int data);
void insertEnd(struct Node** head, int data);
void deleteEnd(struct Node** head);
void printList(struct Node* head);

#endif