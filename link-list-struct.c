#include "link-list-header.h"
#include <malloc.h>

LinkedList *createList()
{
    LinkedList *list = malloc(sizeof(LinkedList));
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}

Node *createNode(int value)
{
    Node *node = malloc(sizeof(Node));

    node->value = value;
    node->next = NULL;
    return node;
}

void addLast(LinkedList *list, int value)
{
    Node *node = createNode(value);

    if (list->head == NULL) // kiểm tra coi list có rỗng ko
    {
        list->head = node;
        list->tail = node;
        list->size++;
        return;
    }

    // >=1 node
    list->tail->next = node; // Nối cái node vào cuối danh sách
    list->tail = node;       // cập nhật lại tail đang trỏ tới node nào
    list->size++;
}

void printList(LinkedList *list)
{
    Node *current = list->head;

    while (current != NULL)
    {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}
