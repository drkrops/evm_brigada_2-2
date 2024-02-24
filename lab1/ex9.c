#include <stdio.h>
#include <string.h>
#include <locale.h>
#define k 100

int main() {
    setlocale(LC_ALL, "ru");

    char s1[k], s2[k], s3[k];

    printf("Введите слово s1: ");
    scanf("%s", s1);

    printf("Введите слово s2 (не более 99 символов): ");
    scanf("%99s", s2);

    while (getchar() != '\n');

    printf("Введите строку s3: ");
    fgets(s3, sizeof(s3), stdin);
    s3[strcspn(s3, "\n")] = 0;

    printf("***%s***\n", s1);
    printf("***%s***\n", s2);
    printf("***%s***\n", s3);

    return 0;
}