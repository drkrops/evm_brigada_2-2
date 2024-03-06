## Задание 1

```bash
Адрес p: 0x7ffe9ede489c
Адрес p1: 0x7ffe9ede489c
Адрес p2: 0x7ffe9ede489c
Адрес p3: 0x7ffe9ede489c

Адрес p1+1: 0x7ffe9ede489d
Адрес p2+1: 0x7ffe9ede489e
Адрес p3+1: 0x7ffe9ede48a4

p1+1-p1: 1
p2+1-p2: 2
p3+1-p3: 8
```

```bash
ex1.cpp: In function ‘void viewPointer(void*)’:
ex1.cpp:42:26: warning: pointer of type ‘void *’ used in arithmetic [-Wpointer-arith]
   42 |     printf("p+1: %p\n", p+1);
```
