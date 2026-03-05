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

#endif