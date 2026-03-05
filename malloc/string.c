#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define _MAX_PATH 260

int main(int argc, char const *argv[])
{
    char *string;

    if (string == NULL)
    {
        printf("OOM!\n");
    }

    // string = malloc(100 * sizeof(char));
    string = malloc(_MAX_PATH); // 260 bytes

    // string = "https://www.google.com/search?q=cats&rlz=1C1RXMK_viVN1183VN1183&oq=cats&gs_lcrp=EgZjaHJvbWUyBggAEEUYOTIKCAEQABixAxiABDIHCAIQABiABDIHCAMQABiABDIHCAQQABiABDIHCAUQABiABDIHCAYQABiABDIHCAcQABiABDIHCAgQLhiABDIJCAkQABgKGIAE0gEJMjgzNWowajE1qAIIsAIB8QWcv66-gJvFcQ&sourceid=chrome&ie=UTF-8";
    snprintf(string, _MAX_PATH, "https://www.google.com/search?q=cats&rlz=1C1RXMK_viVN1183VN1183&oq=cats&gs_lcrp=EgZjaHJvbWUyBggAEEUYOTIKCAEQABixAxiABDIHCAIQABiABDIHCAMQABiABDIHCAQQABiABDIHCAUQABiABDIHCAYQABiABDIHCAcQABiABDIHCAgQLhiABDIJCAkQABgKGIAE0gEJMjgzNWowajE1qAIIsAIB8QWcv66-gJvFcQ&sourceid=chrome&ie=UTF-8");

    printf("Memory available\n");
    printf("Path: %s\n", string);
    printf("Length: %d, %d\n", strlen(string), _MAX_PATH);
    free(string);
    printf("Memory Free!");

    return 0;
}
