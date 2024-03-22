#include <iostream>

void calculate_values(short x, short y, short& z, short& w) {
    z = x;  // Инициализируем переменную z значением x
    asm volatile (
        "add %[y], %[z]\n\t"  // Сложение x и y
        "sub %[y], %[w]\n\t"  // Вычитание y из x
        : [z] "+r" (z), [w] "+r" (w)
        : [y] "r" (y)
    );
}

int main() {
    short x = 4;
    short y = 5;
    short z = 0; // Инициализируем переменную z
    short w = x; // Инициализируем переменную w значением x

    calculate_values(x, y, z, w);

    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "z = " << z << ", w = " << w << std::endl;

    return 0;
}
