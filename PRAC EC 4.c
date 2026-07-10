#include <stdio.h>

int main() {
    int i;
    printf("Executing Processes:\n");
    for (i = 1; i <= 5; i++)
        printf("Process P%d executed\n", i);
    return 0;
}
