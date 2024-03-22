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
void insert_value(float* Mfs, size_t i, float x) {
    asm (
        "movss %[val], %%xmm3\n\t"      // Загрузка значения x в регистр xmm3
        "movss %%xmm3, %[addr]"       // Запись значения x по адресу
        : [addr] "+m" (Mfs[i])
        : [val] "m" (x)
        : "%xmm3"
    );
}

int main() {
    // Проверяем доступность AVX и SSE
    if (!check_availability_avx_sse()) {
        return 1;
    }

    // Создаем массивы Mfl и Mfs и заполняем их значением -8/5
    float Mfl[] = {-8.0f/5, -8.0f/5, -8.0f/5, -8.0f/5};
    float Mfs[] = {-8.0f/5, -8.0f/5, -8.0f/5, -8.0f/5};

    // Примерный индекс для вставки
    size_t index = 2;

    // Значение для вставки
    float x = 3.1415926;

    // Вставляем значение x в массив Mfs по индексу index
    insert_value(Mfs, index, x);

    // Выводим содержимое массива Mfs
    std::cout << "Mfs after insertion:" << std::endl;
    for (size_t i = 0; i < sizeof(Mfs) / sizeof(Mfs[0]); ++i) {
        std::cout << "Mfs[" << i << "] = " << Mfs[i] << std::endl;
    }

    return 0;
}
