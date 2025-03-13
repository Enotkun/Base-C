#include <stdio.h>

#define SIZE 9
#define PRICE 100

// пишем универсальную функцию, которая принимает аргументом массив, длину и значение
void init_array(int array[], int length, int value)
{
    for (int i = 0; i <  length; i++)
    {
        array[i] = value;
    }
}

int main(void)
{
    int prices[SIZE] = {0};
    int quantity[40] = {0};

    // при передаче массива в функцию квадратные скобки не нужно указывать
    init_array(prices, SIZE, PRICE);
    init_array(quantity, 40, 10);

    for (int i = 0; i < SIZE; i++)
    {
        printf("prices[%i]: %i$\n", i, prices[i]);
    }

    int sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        sum += prices[i];
    }

    double avg = (double)sum / SIZE;

    printf("sum: %i$\n", sum);
    printf("avg: %.2lf$\n", avg);

    return 0;
}