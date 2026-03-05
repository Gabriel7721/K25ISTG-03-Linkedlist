#include "link-list-header.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    LinkedList *list = createList(); // tạo ra list rỗng

    // 1. Thêm node vào list
    addLast(list, 100);
    addLast(list, 200);
    addLast(list, 300);

    printf("Linked list: ");

    // 2. Duyệt từng node và In ra toàn bộ node trong list
    printList(list);

    return 0;
}
