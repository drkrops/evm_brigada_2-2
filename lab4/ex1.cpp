#include <iostream>

// Длина массивов
const int size = 5;

// 16-битный массив
unsigned short Ms[size] = {0xFADE, 0xFADE, 0xFADE, 0xFADE, 0xFADE};

// 32-битный массив
unsigned int Ml[size] = {0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA, 0xADE1A1DA};

// 64-битный массив
unsigned long long Mq[size] = {0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E};

int main() {
    // Вывод исходных массивов в шестнадцатеричном представлении
    std::cout << "Ms (short): ";
    for (int i = 0; i < size; ++i)
        std::cout << std::hex << Ms[i] << " ";
    std::cout << std::endl;

    std::cout << "Ml (int): ";
    for (int i = 0; i < size; ++i)
        std::cout << std::hex << Ml[i] << " ";
    std::cout << std::endl;

    std::cout << "Mq (long long): ";
    for (int i = 0; i < size; ++i)
        std::cout << std::hex << Mq[i] << " ";
    std::cout << std::endl;

    // Вставка значений
    int index = 2; // Примерный индекс для вставки

    // Вставка в массив Ms
    asm (
        "mov $16, %%ax\n\t" // Непосредственное значение 16 в регистр
        "mov %%ax, %[dest]\n\t" // Вставка непосредственного значения в память
        : [dest] "+m" (Ms[index]) // Выходной параметр вставки в память
        :
        : "%ax" // Используемый регистр
    );

    // Вставка в массив Ml
    asm (
        "mov $16, %%eax\n\t" // Непосредственное значение 16 в регистр
        "mov %%eax, %[dest]\n\t" // Вставка непосредственного значения в память
        : [dest] "+m" (Ml[index]) // Выходной параметр вставки в память
        :
        : "%eax" // Используемый регистр
    );

    // Вставка в массив Mq
    asm (
        "mov $16, %%rax\n\t" // Непосредственное значение 16 в регистр
        "mov %%rax, %[dest]\n\t" // Вставка непосредственного значения в память
        : [dest] "+m" (Mq[index]) // Выходной параметр вставки в память
        :
        : "%rax" // Используемый регистр
    );

    // Вывод измененных массивов в шестнадцатеричном представлении
    std::cout << "\nПосле вставки:\n";
    std::cout << "Ms (short): ";
    for (int i = 0; i < size; ++i)
        std::cout << std::hex << Ms[i] << " ";
    std::cout << std::endl;

    std::cout << "Ml (int): ";
    for (int i = 0; i < size; ++i)
        std::cout << std::hex << Ml[i] << " ";
    std::cout << std::endl;

    std::cout << "Mq (long long): ";
    for (int i = 0; i < size; ++i)
        std::cout << std::hex << Mq[i] << " ";
    std::cout << std::endl;

    return 0;
}
