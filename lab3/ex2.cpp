#include <iostream>


void do_that_all(short x);


int main()
{
    int m = 231, n = -33;

    printf("x=231:\n");
    do_that_all(m);

    printf("\n");
    
    printf("x=-33:\n");
    do_that_all(n);

    return 0;
}

void do_that_all(short x)
{
    short signed_mul = 2 * x;
    short unsigned_mul = x < 0 ? -2 * x: 2 * x;
    short signed_div = x / 2;
    short unsigned_div = x < 0 ? -x / 2: x / 2;
    short remainder = static_cast<unsigned short>(x) % 16;
    short rounded_down = (static_cast<unsigned short>(x) / 16) * 16;
    short signed_left_shift = x << 1;
    short unsigned_left_shift = static_cast<unsigned short>(x) << 1;
    short signed_right_shift = x >> 1;
    short unsigned_right_shift = static_cast<unsigned short>(x) >> 1;
    short x_and_15 = x & 15;
    short x_and_minus_16 = x & (-16);

    printf("Знаковое умножение на 2: %d\n", signed_mul);
    printf("Беззнаковое умножение на 2: %d\n", unsigned_mul);
    printf("Знаковое деление на 2: %d\n", signed_div);
    printf("Беззнаковое деление на 2: %d\n", unsigned_div);
    printf("Расчёт остатка от беззнакового деления на 16: %d\n", remainder);
    printf("Округление вниз до числа, кратного 16: %d\n", rounded_down);
    printf("Знаковый сдвиг влево на 1 бит: %d\n", signed_left_shift);
    printf("Беззнаковый сдвиг влево на 1 бит: %d\n", unsigned_left_shift);
    printf("Знаковый сдвиг вправо на 1 бит: %d\n", signed_right_shift);
    printf("Беззнаковый сдвиг вправо на 1 бит: %d\n", unsigned_right_shift);
    printf("x & 15: %d\n", x_and_15);
    printf("x & -16: %d\n", x_and_minus_16);
}
