#include <stdio.h>
#include <limits.h>

float incr_float(float x) {
    return ++x;
}

int main() {
    int t1 = 0;
    unsigned int t2 = UINT_MAX;
    int t3 = INT_MIN;
    int t4 = INT_MAX;
    float a = 0;
    float b = 1;
    float c = 12345689;
    float d = 123456891;
    unsigned int m = 33;
    int n = -59;
    printf("%d, %.2f\n", t1, incr_float(t1));
    printf("%u, %.2f\n", t2, incr_float(t2));
    printf("%d, %.2f\n", t3, incr_float(t3));
    printf("%d, %.2f\n", t4, incr_float(t4));
    printf("%.2f, %.2f\n", a, incr_float(a));
    printf("%.2f, %.2f\n", b, incr_float(b));
    printf("%.2f, %.2f\n", c, incr_float(c));
    printf("%.2f, %.2f\n", d, incr_float(d));
    printf("%d, %.2f\n", m, incr_float(m));
    printf("%d, %.2f\n", n, incr_float(n));

    return 0;
}