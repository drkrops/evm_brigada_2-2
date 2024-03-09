#include <stdio.h>

void print16(void *p) { 
    unsigned short *ptr = (unsigned short *)p;
    for(int i = 3; i>= 0; i--) { printf(" "); }
    printf("%04X ", *ptr);
    for(int i = 15; i>= 0; i--) { printf(" "); } 
    for (int i = 15; i >= 0; i--) { 
        printf("%d", (*ptr >> i) & 1); 
    } 
    printf(" "); 
    for(int i = 3; i>= 0; i--) { printf(" "); }
    printf("%05u ", *ptr); 
    short num = *(short *)p;
    if (num < 0) { 
        for(int i = 4; i>= 0; i--) { printf(" "); }
        printf("-"); 
        num = -num; 
    } 
    else {
        for(int i = 5; i>= 0; i--) { printf(" "); }  
    } 
    printf("%04X ", (unsigned short) num); 
    if (num < 0) { 
        printf("-"); 
        num = -num; 
    } 
    else { 
        printf(" "); 
    } 
    for(int i = 15; i>= 0; i--) { printf(" "); }
    for (int i = 15; i >= 0; i--) { 
        printf("%d", (num >> i) & 1); 
    } 
    printf(" "); 
    for(int i = 4; i>= 0; i--) { printf(" "); }
    printf("%6d\n", *(short *)p); 
}