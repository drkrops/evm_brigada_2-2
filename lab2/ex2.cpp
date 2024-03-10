#include <stdio.h>
#include <cstddef>

void printPointer(void* p);

int main()
{
    long long test1 = 0x1122334455667788;
    char test2[] {"0123456789abcdef"};
    long long* test1_p = &test1;
    printPointer(test1_p);
    printPointer(test2);

    return 0;
}

void printPointer(void* p)
{
    char* p1 = reinterpret_cast<char*>(p);
    unsigned short *p2 = reinterpret_cast<unsigned short*>(p);
    double *p3 = reinterpret_cast<double*>(p);

    printf("Адрес p: %p\n", p);
    printf("Адрес p1: %X\n", *p1);
    printf("Адрес p2: %X\n", *p2);
    printf("Адрес p3: %f\n\n", *p3);

    char* p1_new = p1 + 1;
    unsigned short *p2_new = p2 + 1;
    double *p3_new = p3 + 1;

    printf("Адрес p1+1: %X\n", *p1_new);
    printf("Адрес p2+1: %X\n", *p2_new);
    printf("Адрес p3+1: %f\n\n", *p3_new);
}
