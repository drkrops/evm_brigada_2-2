#include <stdio.h>

void print32(void *p) {
    unsigned int *ptr = (unsigned int *)p;
    printf("%08X ", *ptr);
    
    for (int i = 31; i >= 0; i--) {
        printf("%d", (*ptr >> i) & 1);
    }
    printf(" ");
    
    printf("%010u ", *ptr);
    
    int num = *(int *)p;
    if (num < 0) {
        printf("-");
        num = -num;
    } else {
        printf(" ");
    }
    printf("%08X ", (unsigned int)num);
    
    if (num < 0) {
        printf("-");
        num = -num;
    } else {
        printf(" ");
    }
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf(" ");
    
    printf("%11d ", *(int *)p);
    printf("\n");
}