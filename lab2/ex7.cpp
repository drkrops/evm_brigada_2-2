#include <stdio.h>

void printDump(void *p, size_t N) {
    unsigned char *p1 = (unsigned char *)p;
    for (size_t i = 0; i < N; i++) {
        printf("%02hhX ", p1[i]);
    }
    printf("\n");
}

int main() {
    char t11[] {"jzyx"};
    char t12[] {"ёяюэ"};
    wchar_t t21[] {L"jzyx"};
    wchar_t t22[] {L"ёяюэ"};
    printDump(t11, 5);
    printDump(t12, 9);
    printDump(t21, 17);
    printDump(t22, 17);

    return 0;
}
