#include <stdio.h>

void printDump(void *p, size_t N) {
    unsigned char *p1 = (unsigned char *)p;
    for (size_t i = 0; i < N; i++) {
        printf("%02hhX ", p1[i]);
    }
    printf("\n");
}

int main() {
    int x = 5;
    printDump(&x, sizeof(x));

    int array[3] = {5, -5, 0xFF007100};
    printDump(array, sizeof(array));

    double y = -5;
    printDump(&y, sizeof(y));

    return 0;
}
