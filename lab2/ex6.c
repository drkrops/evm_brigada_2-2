#include <stdio.h>
#include <limits.h>

void print_binary(unsigned long long num) {
    for (int i = 63; i >= 0; i--) {
        printf("%lld", (num >> i) & 1);
    }
}

void print_hex(unsigned long long num) {
    printf("%016llX", num);
}

void print_decimal(unsigned long long num) {
    printf("%020llu", num);
}

void print_signed_hex(long long num) {
    if (num < 0) {
        printf("-");
        num = -num;
    }
    else {
        printf(" ");
    }
    printf("%016llX", (unsigned long long) num);
}

void print_signed_binary(long long num) {
    if (num < 0) {
        printf("-");
        num = -num;
    }
    else {
        printf(" ");
    }
    print_binary((unsigned long long) num);
}

void print_signed_decimal(long long num) {
    printf("%21lld", (unsigned long long)num);
}

void print_float_fixed(float num) {
    printf("%43.2f", num);
}

void print_float_exponential(float num) {
    printf("%13e", num);
}

void print_double_fixed(double num) {
    printf("%43.2lf", num);
}

void print_double_exponential(double num) {
    printf("%13e", num);
}

void print64(void *p) {
    unsigned long long *ptr = (unsigned long long *)p;
    printf("%016llX ", *ptr);
    print_binary(*ptr);
    printf(" ");
    print_decimal(*ptr);
    printf(" ");
    print_signed_decimal(*(long long *)p);
    printf(" ");
    print_float_fixed(*(float *)p);
    printf(" ");
    print_float_exponential(*(float *)p);
    printf(" ");
    print_double_fixed(*(double *)p);
    printf(" ");
    print_double_exponential(*(double *)p);
    printf("\n\n\n");
}

int main() {
    unsigned long long min_unsigned = 0;
    unsigned long long max_unsigned = ULLONG_MAX;
    long long min_signed = LLONG_MIN;
    long long max_signed = LLONG_MAX;
    long long x = 5;
    long long y = -5;
    unsigned long long z = 0xFF007100;
    float fx = 5.0;
    float fy = -5.0;
    float fz = 0xFF007100;
    double dx = 45.45;
    double dy = -45.45;
    double dz = 0xFF007100;
    
    print64(&min_unsigned);
    print64(&max_unsigned);
    print64(&min_signed);
    print64(&max_signed);
    print64(&x);
    print64(&y);
    print64(&z);
    print64(&fx);
    print64(&fy);
    print64(&fz);

    return 0;
}
