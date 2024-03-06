#include <stdio.h>

void ex1(char* group, char* command_n, char* worker1, char* worker2)
{
    puts(group);
    puts(command_n);
    puts(worker1);
    puts(worker2);
}

int main()
{
    ex1("ПМ-31", "2", "Иван Никулин", "Ивашков Стас");

    return 0;
}