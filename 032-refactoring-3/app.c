#include <stdio.h>

#define SIZE 9
#define PRICE 100

/**
 * Init Array
 * @param int array[] массив
 * @param int length длина массива
 * @param int value значение по-умолчанию
 */
void init_array(int array[], int length, int value)
{
    for (int i = 0; i <  length; i++)
    {
        array[i] = value;
    }
}

/**
 * Print Array
 * @param int array[]
 * @param int length
 */
void print_array(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("array[%i]: %i\n", i, array[i]);
    }
}

/**
 * Get Total Amount
 * @param int array[]
 * @param int length
 */
int get_total_amount(int array[], int length)
{
    int total = 0;

    for (int i = 0; i < length; i++)
    {
        total += array[i];
    }

    // последнее значение, которое мы возвращаем должно совпадать с типом функции
    return total;
}

int main(void)
{
    int prices[SIZE] = {0};
    int quantity[40] = {0};

    // при передаче массива в функцию квадратные скобки не нужно указывать
    init_array(prices, SIZE, PRICE);
    init_array(quantity, 40, 10);

    puts("prices array");
    print_array(prices, SIZE);

    puts("quantity array");
    print_array(quantity, 40);

    
    printf("prices total amount: %i\n", get_total_amount(prices, SIZE));
    printf("quantity total amount: %i\n", get_total_amount(quantity, 40));
    
    return 0;
}