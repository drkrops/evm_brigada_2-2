#include <stdio.h>

void print_binary(unsigned short num) {
    for (int i = 15; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

void print_hex(unsigned short num) {
    printf("%04X", num);
}

void print_decimal(unsigned short num) {
    printf("%05u", num);
}

void print_signed_hex(short num) {
    if (num < 0) {
        printf("-");
        num = -num;
    }
    else {
        printf(" ");
    }
    printf("%04X", (unsigned short) num);
}

void print_signed_binary(short num) {
    if (num < 0) {
        printf("-");
        num = -num;
    }
    else {
        printf(" ");
    }
    print_binary((unsigned short) num);
}

void print_signed_decimal(short num) {
    printf("%6d", num);
}

void print16(void *p) {
    unsigned short *ptr = (unsigned short *)p;
    printf("%04X ", *ptr);
    print_binary(*ptr);
    printf(" ");
    print_decimal(*ptr);
    printf(" ");
    print_signed_hex(*(short *)p);
    printf(" ");
    print_signed_binary(*(short *)p);
    printf(" ");
    print_signed_decimal(*(short *)p);
    printf("\n");
}

int main() {
    unsigned short min_unsigned = 0;
    unsigned short max_unsigned = 65535;
    short min_signed = -32768;
    short max_signed = 32767;
    unsigned short x = 5;
    short y = -5;
    print16(&min_unsigned);
    print16(&max_unsigned);
    print16(&min_signed);
    print16(&max_signed);
    print16(&x);
    print16(&y);

    return 0;
}
