#include <stdio.h>

int q[5], f = -1, r = -1;

int main() {
    q[++r] = 1;
    q[++r] = 2;
    q[++r] = 3;
    f = 0;

    printf("Ready Queue: ");
    for (int i = f; i <= r; i++)
        printf("P%d ", q[i]);

    return 0;
}
