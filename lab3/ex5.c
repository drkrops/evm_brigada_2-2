#include <stdio.h>

float abs_float(float x)
{
    int *ptr = (int *)&x;
    *ptr &= 0x7FFFFFFF;
    float result = *((float *)ptr);
    return result;
}

int main()
{
    float x = -13.2;
    printf("Модуль числа %.2f равен %.2f\n", x, abs_float(x));

    return 0;
}