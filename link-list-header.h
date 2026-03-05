#ifndef LINKEDLIST_H // if not definition
#define LINKEDLIST_H

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

typedef struct LinkedList
{
    Node *head;
    Node *tail;
} LinkedList;

Node *createNode();
LinkedList *createList();
void addLast();
void printList();

#endif