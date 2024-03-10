#include <stdio.h>

void print_binary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

void print_hex(unsigned int num) {
    printf("%08X", num);
}

void print_decimal(unsigned int num) {
    printf("%010u", num);
}

void print_signed_hex(int num) {
    if (num < 0) {
        printf("-");
        num = -num;
    }
    else {
        printf(" ");
    }
    printf("%08X", (unsigned int) num);
}

void print_signed_binary(int num) {
    if (num < 0) {
        printf("-");
        num = -num;
    }
    else {
        printf(" ");
    }
    print_binary((unsigned int) num);
}

void print_signed_decimal(int num) {
    printf("%11d", num);
}

void print_float_fixed(float num) {
    printf("%43.2f", num);
}

void print_float_exponential(float num) {
    printf("%13e", num);
}

void print32(void *p) {
    unsigned int *ptr = (unsigned int *)p;
    printf("%08X ", *ptr);
    print_binary(*ptr);
    printf(" ");
    print_decimal(*ptr);
    printf(" ");
    print_signed_hex(*(int *)p);
    printf(" ");
    print_signed_binary(*(int *)p);
    printf(" ");
    print_signed_decimal(*(int *)p);
    printf(" ");
    print_float_fixed(*(float *)p);
    printf(" ");
    print_float_exponential(*(float *)p);
    printf("\n");
}

int main() {
    unsigned int min_unsigned = 0;
    unsigned int max_unsigned = 4294967295;
    int min_signed = -2147483648;
    int max_signed = 2147483647;
    int x = 5;
    int y = -5;
    unsigned int z = 0xFF007100;
    float fx = 5.0;
    float fy = -5.0;
    float fz = 0xFF007100;
    
    print32(&min_unsigned);
    print32(&max_unsigned);
    print32(&min_signed);
    print32(&max_signed);
    print32(&x);
    print32(&y);
    print32(&z);
    print32(&fx);
    print32(&fy);
    print32(&fz);

    return 0;
}
