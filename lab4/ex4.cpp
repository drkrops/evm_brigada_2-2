#include <iostream>
#include <iomanip>

void insert_value(short* Ms, size_t index, short x) {
    asm (
        "mov %[x], %%dx\n\t"             // Загрузка значения x в регистр dx
        "mov %[base], %%rax\n\t"         // Загрузка базового адреса массива Ms в регистр ax
        "shl $1, %[index]\n\t"           // Умножение индекса на 2, чтобы учесть размер элемента (2 байта)
        "add %[index], %%rax\n\t"        // Прибавление индекса к базовому адресу
        "mov %%dx, (%%rax)"              // Запись значения x в шестой байт элемента массива Ms
        :
        : [base] "r" (Ms), [index] "r" (index), [x] "r" (x)
        : "%rax", "%rdx", "memory"
    );
}

int main() {
    short xs = 0xFADE;
    short Ms[] = {xs, xs, xs, xs, xs};
    size_t index = 2; // Примерный индекс для вставки
    short x = 0xABCD; // Значение, которое нужно вставить

    std::cout << "Before insertion:\n";
    for (size_t i = 0; i < sizeof(Ms) / sizeof(Ms[0]); ++i) {
        std::cout << "Ms[" << i << "] = 0x" << std::hex << std::setw(4) << std::setfill('0') << Ms[i] << std::endl;
    }

    insert_value(Ms, index, x);

    std::cout << "\nAfter insertion:\n";
    for (size_t i = 0; i < sizeof(Ms) / sizeof(Ms[0]); ++i) {
        std::cout << "Ms[" << i << "] = 0x" << std::hex << std::setw(4) << std::setfill('0') << Ms[i] << std::endl;
    }

    return 0;
}
