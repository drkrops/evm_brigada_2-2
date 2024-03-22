#include <iostream>

// Функция для проверки доступности расширений AVX и SSE
bool check_availability_avx_sse() {
#ifdef __AVX__
    std::cout << "AVX is available!" << std::endl;
    return true;
#elif defined(__SSE__)
    std::cout << "SSE is available!" << std::endl;
    return true;
#else
    std::cout << "Neither AVX nor SSE is available!" << std::endl;
    return false;
#endif
}

// Функция для вставки значения x в массив Mfs по индексу i
void insert_value(float* Mfs, size_t i, int x) {
    asm (
        "vcvtsi2ss %[val], %[xmm0], %[xmm1]\n\t"   // Преобразование целочисленного x в число с плавающей запятой
        "movss %[xmm1], %[addr]"                  // Запись значения в массив Mfs по адресу
        : [addr] "+m" (Mfs[i])
        : [val] "r" (x), [xmm0] "x" (0), [xmm1] "x" (0)
    );
}

int main() {
    // Проверяем доступность AVX и SSE
    if (!check_availability_avx_sse()) {
        return 1;
    }

    // Создаем массив Mfs
    float xfs = -8.0f/5;
    float Mfs[] = {xfs, xfs, xfs, xfs, xfs};

    // Примерный индекс для вставки
    size_t index = 2;

    // Значение для вставки
    int x = 10;

    // Вставляем значение x в массив Mfs по индексу index
    insert_value(Mfs, index, x);

    // Выводим содержимое массива Mfs
    std::cout << "Mfs after insertion:" << std::endl;
    for (size_t i = 0; i < sizeof(Mfs) / sizeof(Mfs[0]); ++i) {
        std::cout << "Mfs[" << i << "] = " << Mfs[i] << std::endl;
    }

    return 0;
}
