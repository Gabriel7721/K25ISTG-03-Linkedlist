#include <stdio.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
    int *p = malloc(1 * sizeof(int));

    if (p == NULL)
    {
        printf("Out of Memory\n");
    }

    // *p = 10;
    p[0] = 10; // *(p+0) = 10 <=> *(p) = 10


    printf("%d\n", p);   // Address's 10
    printf("%d\n", *p);  // 10
    printf("%d\n", &p);  // Address's P
    printf("%d\n", &*p); // Address's 10
    printf("%d\n", *&p); // Address's 10

    return 0;
}
