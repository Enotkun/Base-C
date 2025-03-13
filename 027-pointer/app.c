#include <stdio.h>

int main(void)
{
    // декларируем 3 переменных
    int one = 1;
    int two = 2;
    int three = 3;

    // задекларировали 3 указателей того же типа
    int* onePointer = NULL;
    int* twoPointer = NULL;
    int* threePointer = NULL;

    // присвоили указателям теже адреса, что и у переменных
    onePointer = &one;
    twoPointer = &two;
    threePointer = &three;

    // выводим значение переменных
    printf("One variable: %d\n", one);
    printf("Two variable: %d\n", two);
    printf("Three variable: %d\n", three);

     // выводим адресса переменных
    printf("One address: %p\n", (void*)onePointer);
    printf("Two address: %p\n", (void*)&two);
    printf("Three address: %p\n", (void*)threePointer);

    // разименовываем указатели, что бы получить значение
    printf("One value: %d\n", *onePointer);
    printf("Two value: %d\n", *twoPointer);
    printf("Three value: %d\n", *threePointer);

    // через указатель по адресу переменной присваиваем новое значение
    *onePointer = 10;
    *twoPointer = 20;
    *threePointer = 30;

    printf("One variable value: %d\n", one);
    printf("Two variable value: %d\n", two);
    printf("Three variable value: %d\n", three);

    return 0;
}