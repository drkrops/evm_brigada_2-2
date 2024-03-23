#include <iostream>

void insert_value(short* Ms, size_t index, short x) {
    asm (
        "mov %[val], %%si\n\t"      // Загрузка значения x в промежуточный регистр si
        "leaq (%[base], %[index], 2), %%rdx\n\t"  // Вычисление адреса элемента по индексу
        "mov %%si, (%%rdx)"         // Запись значения x в элемент массива по вычисленному адресу
        :
        : [base] "r" (Ms), [index] "r" (index), [val] "r" (x)
        : "%si", "%rdx"
    );
}

int main() {
    short xs = 0xFADE;
    short Ms[] = {xs, xs, xs, xs, xs};
    size_t index = 2; // Примерный индекс для вставки
    short x = 0xabcd;   // Примерное значение для вставки

    std::cout << "Before insertion:\n";
    for (size_t i = 0; i < sizeof(Ms) / sizeof(Ms[0]); ++i) {
        std::cout << "Ms[" << i << "] = " << std::hex << Ms[i] << std::endl;
    }

    insert_value(Ms, index, x);

    std::cout << "\nAfter insertion:\n";
    for (size_t i = 0; i < sizeof(Ms) / sizeof(Ms[0]); ++i) {
        std::cout << "Ms[" << i << "] = " << std::hex << Ms[i] << std::endl;
    }

    return 0;
}
