#include <stdio.h>

float sum_direct(int N)
{
    float sum = 0.0f;
    for (int i = 1; i <= N; ++i) {
        sum += 1.0f / i;
    }
    return sum;
}

float sum_reverse(int N)
{
    float sum = 0.0f;
    for (int i = N; i >= 1; --i) {
        sum += 1.0f / i;
    }
    return sum;
}

int main()
{
    int N_values[] = {1000, 1000000, 1000000000};
    for (int i = 0; i < sizeof(N_values) / sizeof(N_values[0]); ++i) {
        int N = N_values[i];
        printf("N = %d\n", N);
        printf("Direct sum: %.6f\n", sum_direct(N));
        printf("Reverse sum: %.6f\n", sum_reverse(N));
        printf("\n");
    }
    return 0;
}