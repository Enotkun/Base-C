#include <stdio.h>

#define SIZE 4

int main(void)
{
    int a[SIZE] = {0, 0, 0, 0}; // не самая лучшая деклорация
    int b[SIZE] = {0}; // все элементы в int инициализированны по умолчанию 0 (рекомендуемое).
    int c[SIZE] = {5}; // первый элемент будет 5, т.к явно указан, остальные 0
    int d[SIZE]; // т.к массив не инициализирован, значения не известны наверняка.

    printf("c[0]: %i\n", c[0]);
    printf("c[1]: %i\n", c[1]);
    printf("c[2]: %i\n", c[2]);
    printf("c[3]: %i\n", c[SIZE - 1]);

    return 0;
}