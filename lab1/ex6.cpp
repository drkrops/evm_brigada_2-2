#include <iostream>
#define N 5


#define PRINT_f(arr,type)\
    std::cout << "\n\n"#arr " in decimal: "; \
    for (int i = 0; i < N; ++i) { printf("%.2f ", arr[i]); } \
    std::cout << "\n"#arr " in exp:     "; \
    for (int i = 0; i < N; ++i) { printf("%.2e ", arr[i]); } \
    std::cout<<std::endl;

#define PRINT_i(arr,type)\
    std::cout << "\n\n"#arr " in decimal: "; \
    for (int i = 0; i < N; ++i) { printf("%lld ", static_cast<long long>(arr[i])); } \
    std::cout << "\n"#arr " in hex:     "; \
    for (int i = 0; i < N; ++i) { printf("%#0*llx ", (int)(sizeof(type)*2 + 2), static_cast<long long>(arr[i]));} \
    std::cout << std::endl;

int main(){
    int16_t xs=0xFADE;
    int xl = 0xADE1A1DA;
    long xq = 0xC1A551F1AB1E;
    float x1 = -8.0f/5.0f;
    double x2 = -8.0/5.0;
    int16_t Ms[N]{xs,xs,xs,xs,xs};
    int Ml[N]{xl,xl,xl,xl,xl};
    long Mq[N]{xq,xq,xq,xq,xq};
    float Mfs[N]{x1,x1,x1,x1,x1};
    double Mfl[N]{x2,x2,x2,x2,x2};


    PRINT_i(Ms,int16_t);
    if(scanf("%hd", &Ms[2]) == 0)
    {
        puts("incorrect input");
    }
    PRINT_i(Ms,int16_t);
    printf("\n");
    PRINT_i(Ml,int);
    if(scanf("%d", &Ml[2]) == 0)
    {
        puts("incorrect input");
    }
    PRINT_i(Ml,int);
    printf("\n");
    PRINT_i(Mq,long);
     if(scanf("%ld", &Mq[2]) == 0)
    {
        puts("incorrect input");
    }
    PRINT_i(Mq,long);
    printf("\n");
    PRINT_f(Mfs,float);
    if(scanf("%f", &Mfs[2]) == 0)
    {
        puts("incorrect input");
    }
    PRINT_f(Mfs,float);
    printf("\n");
    PRINT_f(Mfl,double);
     if(scanf("%lf", &Mfl[2]) == 0)
    {
        puts("incorrect input");
    }
    PRINT_f(Mfl,double);

    return 0;
}
        
