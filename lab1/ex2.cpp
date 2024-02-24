#include <cstddef>
#include <iostream>
#define print_size(type)\
    std::cout<<"The size of a " #type" is: "<< sizeof(type)<<" bytes"<<std::endl;


int main(){
    // Ubuntu 9.4.0 64 битная версия
    // компилятор g++ (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0
    // 
    // x86 -64 , процессор общего назначения

    print_size(char);
    print_size(signed char);
    print_size(unsigned char);
    print_size(char *);
    print_size(bool);
    print_size(wchar_t);
    print_size(short);
    print_size(int);
    print_size(long);
    print_size(long long);
    print_size(float);
    print_size(double);
    print_size(long double);
    print_size(size_t);
    print_size(ptrdiff_t);
    print_size(void *);
    return 0;
}