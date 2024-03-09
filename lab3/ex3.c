#include <stdio.h>

unsigned int round_down(unsigned int x, unsigned int D)
{
    return x & ~(D - 1);
}

unsigned int round_up(unsigned int x, unsigned int D)
{
    return (x + (D - 1)) & ~(D - 1);
}

int main()
{
    unsigned int x = 5;
    unsigned int D = 128;

    printf("Исходное значение: %u\n", x);
    printf("Округление вниз: %u\n", round_down(x, D));
    printf("Округление вверх: %u\n", round_up(x, D));

    return 0;
}