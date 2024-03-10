#include <stdio.h>
#include <cstddef>

void viewPointer(void* p);

int main()
{
    int a = 10;
    int* p = &a;
    viewPointer(p);

    return 0;
}

void viewPointer(void* p)
{
    char* p1 = reinterpret_cast<char*>(p);
    unsigned short *p2 = reinterpret_cast<unsigned short*>(p);
    double *p3 = reinterpret_cast<double*>(p);

    printf("Адрес p: %p\n", p);
    printf("Адрес p1: %p\n", p1);
    printf("Адрес p2: %p\n", p2);
    printf("Адрес p3: %p\n\n", p3);

    char* p1_new = p1 + 1;
    unsigned short *p2_new = p2 + 1;
    double *p3_new = p3 + 1;

    printf("Адрес p1+1: %p\n", p1_new);
    printf("Адрес p2+1: %p\n", p2_new);
    printf("Адрес p3+1: %p\n\n", p3_new);

    ptrdiff_t p1_diff = (p1_new - p1) * sizeof(*p1);
    ptrdiff_t p2_diff = (p1_new - p1) * sizeof(*p2);
    ptrdiff_t p3_diff = (p3_new - p3) * sizeof(*p3);

    printf("p1+1-p1: %td\n", p1_diff);
    printf("p2+1-p2: %td\n", p2_diff);
    printf("p3+1-p3: %td\n\n", p3_diff);

    // printf("p+1: %p\n", p+1);
}
