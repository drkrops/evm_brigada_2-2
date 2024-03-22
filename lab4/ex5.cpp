#include <iostream>

void insert_value(short* Ms, size_t index, short x) {
    asm volatile (
        "mov %[val], %%si\n\t"      // Загрузка значения x в промежуточный регистр si
        "mov %%si, %[addr]"         // Запись значения x по адресу
        : [addr] "+m" (Ms[index])
        : [val] "r" (x)
        : "%si"
    );
}

int main() {
    short xs = 0xFADE;
    short Ms[] = {xs, xs, xs, xs, xs};
    size_t index = 2; // Примерный индекс для вставки
    short x = 0xBB;   // Примерное значение для вставки

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
