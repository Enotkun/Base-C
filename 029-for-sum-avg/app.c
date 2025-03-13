#include <stdio.h>

#define SIZE 9
#define PRICE 100

int main(void)
{
    int prices[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
    {
        prices[i] = PRICE;
    }

    prices[SIZE - 1] = 33;

    for (int i = 0; i < SIZE; i++)
    {
        printf("prices[%i]: %i$\n", i, prices[i]);
    }

    int sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        // sum = sum + prices[i];
        sum += prices[i]; // сокращенная запись
    }

    double avg = (double)sum / SIZE;
    /** Если мы делим целые числа на целые числа, то нужно использовать явную 
     * конверсию приведения типов, как добавление к целочисленному типу переменной(int) 
     * дробный тип(double),так же не забыв поменять спецификатор типа с %i на %lf,
     * что бы компилятор не отбросил все что в итоге идет после точки при делении, 
     * т.к он не округляет числа ,а просто отсекает, все что за точкой*/

    printf("sum: %i$\n", sum);
    printf("avg: %.2lf$\n", avg);

    return 0;
}