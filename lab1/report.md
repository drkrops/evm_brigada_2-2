## Задание 1

```bash
ПМ-31
2
Иван Никулин
Ивашков Стас
```

## Задание 2

```bash
The size of a char is: 1 bytes
The size of a signed char is: 1 bytes
The size of a unsigned char is: 1 bytes
The size of a char * is: 8 bytes
The size of a bool is: 1 bytes
The size of a wchar_t is: 4 bytes
The size of a short is: 2 bytes
The size of a int is: 4 bytes
The size of a long is: 8 bytes
The size of a long long is: 8 bytes
The size of a float is: 4 bytes
The size of a double is: 8 bytes
The size of a long double is: 16 bytes
The size of a size_t is: 8 bytes
The size of a ptrdiff_t is: 8 bytes
The size of a void * is: 8 bytes
```

## Задание 3
clang:
```bash
The size of a char is: 1 bytes
The size of a signed char is: 1 bytes
The size of a unsigned char is: 1 bytes
The size of a char * is: 8 bytes
The size of a bool is: 1 bytes
The size of a wchar_t is: 4 bytes
The size of a short is: 2 bytes
The size of a int is: 4 bytes
The size of a long is: 8 bytes
The size of a long long is: 8 bytes
The size of a float is: 4 bytes
The size of a double is: 8 bytes
The size of a long double is: 16 bytes
The size of a size_t is: 8 bytes
The size of a ptrdiff_t is: 8 bytes
The size of a void * is: 8 bytes
```

x64:
```bash
The size of a char is: 1 bytes
The size of a signed char is: 1 bytes
The size of a unsigned char is: 1 bytes
The size of a char* is: 8 bytes
The size of a bool is: 1 bytes
The size of a wchar_t is: 2 bytes
The size of a short is: 2 bytes
The size of a int is: 4 bytes
The size of a long is: 4 bytes
The size of a long long is: 8 bytes
The size of a float is: 4 bytes
The size of a double is: 8 bytes
The size of a long double is: 8 bytes
The size of a size_t is: 8 bytes
The size of a ptrdiff_t is: 8 bytes
The size of a void* is: 8 bytes
```

x32:
```bash
The size of a char is: 1 bytes
The size of a signed char is: 1 bytes
The size of a unsigned char is: 1 bytes
The size of a char* is: 4 bytes
The size of a bool is: 1 bytes
The size of a wchar_t is: 2 bytes
The size of a short is: 2 bytes
The size of a int is: 4 bytes
The size of a long is: 4 bytes
The size of a long long is: 8 bytes
The size of a float is: 4 bytes
The size of a double is: 8 bytes
The size of a long double is: 8 bytes
The size of a size_t is: 4 bytes
The size of a ptrdiff_t is: 4 bytes
The size of a void* is: 4 bytes
```

Intel:

## Задание 4

```bash
Ms in decimal: -1314 -1314 -1314 -1314 -1314 
Ms in hex:     0xfffffffffffffade 0xfffffffffffffade 0xfffffffffffffade 0xfffffffffffffade 0xfffffffffffffade 


Ml in decimal: -1377721894 -1377721894 -1377721894 -1377721894 -1377721894 
Ml in hex:     0xffffffffade1a1da 0xffffffffade1a1da 0xffffffffade1a1da 0xffffffffade1a1da 0xffffffffade1a1da 


Mq in decimal: 212915788557086 212915788557086 212915788557086 212915788557086 212915788557086 
Mq in hex:     0x0000c1a551f1ab1e 0x0000c1a551f1ab1e 0x0000c1a551f1ab1e 0x0000c1a551f1ab1e 0x0000c1a551f1ab1e 


Mfs in decimal: -1.60 -1.60 -1.60 -1.60 -1.60 
Mfs in exp:     -1.60e+00 -1.60e+00 -1.60e+00 -1.60e+00 -1.60e+00 


Mfl in decimal: -1.60 -1.60 -1.60 -1.60 -1.60 
Mfl in exp:     -1.60e+00 -1.60e+00 -1.60e+00 -1.60e+00 -1.60e+00 
```


## Задание 5

```bash
0x7fffa4b86b60
0x7fffa4b86b60
0x7fffa4b86b64
```

## Задание 6
```bash
Ms in decimal: -1314 -1314 -1314 -1314 -1314 
Ms in hex:     0xfffffffffffffade 0xfffffffffffffade 0xfffffffffffffade 0xfffffffffffffade 0xfffffffffffffade 
-1313


Ms in decimal: -1314 -1314 -1313 -1314 -1314 
Ms in hex:     0xfffffffffffffade 0xfffffffffffffade 0xfffffffffffffadf 0xfffffffffffffade 0xfffffffffffffade 



Ml in decimal: -1377721894 -1377721894 -1377721894 -1377721894 -1377721894 
Ml in hex:     0xffffffffade1a1da 0xffffffffade1a1da 0xffffffffade1a1da 0xffffffffade1a1da 0xffffffffade1a1da 
3


Ml in decimal: -1377721894 -1377721894 3 -1377721894 -1377721894 
Ml in hex:     0xffffffffade1a1da 0xffffffffade1a1da 0x00000003 0xffffffffade1a1da 0xffffffffade1a1da 



Mq in decimal: 212915788557086 212915788557086 212915788557086 212915788557086 212915788557086 
Mq in hex:     0x0000c1a551f1ab1e 0x0000c1a551f1ab1e 0x0000c1a551f1ab1e 0x0000c1a551f1ab1e 0x0000c1a551f1ab1e 
14


Mq in decimal: 212915788557086 212915788557086 14 212915788557086 212915788557086 
Mq in hex:     0x0000c1a551f1ab1e 0x0000c1a551f1ab1e 0x000000000000000e 0x0000c1a551f1ab1e 0x0000c1a551f1ab1e 



Mfs in decimal: -1.60 -1.60 -1.60 -1.60 -1.60 
Mfs in exp:     -1.60e+00 -1.60e+00 -1.60e+00 -1.60e+00 -1.60e+00 
15


Mfs in decimal: -1.60 -1.60 15.00 -1.60 -1.60 
Mfs in exp:     -1.60e+00 -1.60e+00 1.50e+01 -1.60e+00 -1.60e+00 



Mfl in decimal: -1.60 -1.60 -1.60 -1.60 -1.60 
Mfl in exp:     -1.60e+00 -1.60e+00 -1.60e+00 -1.60e+00 -1.60e+00 
92


Mfl in decimal: -1.60 -1.60 92.00 -1.60 -1.60 
Mfl in exp:     -1.60e+00 -1.60e+00 9.20e+01 -1.60e+00 -1.60e+00 
```

## Задание 7
```bash
Mb in decimal: -19 -19 -19 -19 -19 
Mb in hex:     0xffffffffffffffed 0xffffffffffffffed 0xffffffffffffffed 0xffffffffffffffed 0xffffffffffffffed 
3


Mb in decimal: -19 -19 3 -19 -19 
Mb in hex:     0xffffffffffffffed 0xffffffffffffffed 0x03 0xffffffffffffffed 0xffffffffffffffed
```
