#include <iostream>

void insert_value(long long* Mq, size_t index) {
    asm (
        "movq %[base], %%rax\n\t"          // Загрузка базового адреса массива Mq в регистр rax
        "leaq (%%rax, %[index], 8), %%rdx\n\t"  // Вычисление адреса элемента по индексу
        "addq $5, %%rdx\n\t"               // Прибавление 5 к адресу, чтобы получить шестой байт
        "movb $0xBB, (%%rdx)"              // Запись значения 0xBB в шестой байт элемента массива
        :
        : [base] "r" (Mq), [index] "r" (index)
        : "%rax", "%rdx"
    );
}

int main() {
    long long Mq[] = {0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E, 0xC1A551F1AB1E};
    size_t index = 2; // Примерный индекс для вставки

    std::cout << "Before insertion:\n";
    for (size_t i = 0; i < sizeof(Mq) / sizeof(Mq[0]); ++i) {
        std::cout << "Mq[" << i << "] = " << std::hex << Mq[i] << std::endl;
    }

    insert_value(Mq, index);

    std::cout << "\nAfter insertion:\n";
    for (size_t i = 0; i < sizeof(Mq) / sizeof(Mq[0]); ++i) {
        std::cout << "Mq[" << i << "] = " << std::hex << Mq[i] << std::endl;
    }

    return 0;
}
