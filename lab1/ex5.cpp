#include <iostream>
#define N 5

int main()
{
    float x1 = -8.0f/5.0f;
    float Mfs[N]{x1,x1,x1,x1,x1};

    printf("%p\n", &Mfs);
    printf("%p\n", &Mfs[0]);
    printf("%p\n", &Mfs[1]);
    
    return 0;
}