#include <stdio.h>
#include <cstddef>
#include "print16.h"
#include "print32.h"

void expanSI(short a, unsigned short b);

int main()
{
    short a = -101;
    unsigned short b =33;
    expanSI(a, b);

    return 0;
}

void expanSI(short a, unsigned short b)
{
    print16(&a);
    print16(&b);
    int a32 = static_cast<int>(a);
    unsigned int b32 = static_cast<unsigned int>(b);
    print32(&a32);
    print32(&b32);
}
