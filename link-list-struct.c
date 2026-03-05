#include "link-list-header.h"
#include <malloc.h>

LinkedList *createList()
{
    LinkedList *list = malloc(sizeof(LinkedList));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

Node *createNode(int value)
{
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return 0;
}

void addLast()
{
}

void printList()
{
}
