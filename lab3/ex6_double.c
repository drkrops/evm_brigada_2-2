#include <stdio.h>
#include <limits.h>

double sum_direct(int N)
{
    double sum = 0.0f;
    for (int i = 1; i <= N; ++i) {
        sum += 1.0f / i;
    }
    return sum;
}

double sum_reverse(int N)
{
    double sum = 0.0f;
    for (int i = N; i >= 1; --i) {
        sum += 1.0f / i;
    }
    return sum;
}

void print64(void *p) {
    unsigned long long *ptr = (unsigned long long *)p;

    printf("%016llX ", *ptr);
    for (int i = 63; i >= 0; i--) {
        printf("%lld", (*ptr >> i) & 1);
    }
    printf(" ");
    printf("%020llu ", *ptr);
    long long signed_num = *(long long *)p;
    printf("%21lld ", (unsigned long long)signed_num);
    printf("%43.2f ", *(float *)p);
    printf("%13e ", *(float *)p);
    printf("%43.2lf ", *(double *)p);
    printf("%13e ", *(double *)p);
    printf("\n");
}

int main()
{
    int N_values[] = {1000, 1000000, 1000000000};
    for (int i = 0; i < sizeof(N_values) / sizeof(N_values[0]); ++i) {
        int N = N_values[i];
        printf("N = %d\n", N);
        double sum_dir = sum_direct(N);
        double sum_rev = sum_reverse(N);
        double* p1 = &sum_dir, *p2 = &sum_rev;
        print64(p1);
        print64(p2);
        printf("-----------------------------------------------------------------------------\n");
    }
    return 0;
}