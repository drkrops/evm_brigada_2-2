#include <iostream>
#include <iomanip> // Для установки формата вывода

void insert_minus_one(short* Ms, size_t index) {
    asm (
        "mov %[index], %%rdi\n\t"    // Загрузка индекса в регистр rdi
        "mov %[base], %%rax\n\t"    // Загрузка базового адреса массива Ms в регистр rax
        "lea (%%rax,%%rdi,2), %%rdx\n\t"  // Вычисление адреса элемента по индексу
        "movw $-1, (%%rdx)"     // Запись значения -1 в элемент массива по вычисленному адресу
        :
        : [base] "r" (Ms), [index] "r" (index)
        : "%rax", "%rdx", "%rdi"
    );
}

int main() {
    short xs = 0xFADE;
    short Ms[] = {xs, xs, xs, xs, xs};
    size_t index = 2; // Примерный индекс для вставки

    std::cout << "Before insertion:\n";
    for (size_t i = 0; i < sizeof(Ms) / sizeof(Ms[0]); ++i) {
        std::cout << "Ms[" << i << "] = 0x" << std::hex << std::setw(4) << std::setfill('0') << Ms[i] << std::endl;
    }

    insert_minus_one(Ms, index);

    std::cout << "\nAfter insertion:\n";
    for (size_t i = 0; i < sizeof(Ms) / sizeof(Ms[0]); ++i) {
        std::cout << "Ms[" << i << "] = 0x" << std::hex << std::setw(4) << std::setfill('0') << Ms[i] << std::endl;
    }

    return 0;
}
