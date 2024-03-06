#include <iostream>
#define N 5


#define PRINT_f(arr,type)\
    std::cout << "\n\n"#arr " in decimal: "; \
    for (int i = 0; i < N; ++i) { printf("%.2f ", arr[i]); } \
    std::cout << "\n"#arr " in exp:     "; \
    for (int i = 0; i < N; ++i) { printf("%.2e ", arr[i]); } \
    std::cout<<std::endl;

int main(){
    float x1 = -8.0f/5.0f;
    float Mfs[N]{x1,x1,x1,x1,x1};

    PRINT_f(Mfs,float);
    if(scanf("%f %f %f %f %f", &Mfs[0], &Mfs[1], &Mfs[2], &Mfs[3], &Mfs[4]) != 5)
    {
        puts("incorrect input");
    }
    PRINT_f(Mfs,float);

    return 0;
}
        
