#include <stdio.h>

#define SIZE_PRICES 9
#define SIZE_QUANTITIES 40
#define PRICE 100
#define QUANTITY 10

/**
 * Init Array
 * @param int array[] массив
 * @param int length длина массива
 * @param int value значение по-умолчанию
 */
void init_array(int array[], const int length, const int value)
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
void print_array(const int array[], const int length)
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
 * @return int
 */
int get_total_amount(const int array[], const int length)
{
    int total = 0;

    for (int i = 0; i < length; i++)
    {
        total += array[i];
    }

    // последнее значение, которое мы возвращаем должно совпадать с типом функции
    return total;
}

/**
 * Get Average Value
 * @param int total_amount
 * @param int length
 * @return double
 */
double get_average_value(const int total_amount, const int length)
{
    // чтобы сохранить остаток приводим один из операндов к типу дабл
    return (double)total_amount / length;
}

int main(void)
{
    int prices[SIZE_PRICES] = {0};
    int quantities[SIZE_QUANTITIES] = {0};

    // при передаче массива в функцию квадратные скобки не нужно указывать
    init_array(prices, SIZE_PRICES, PRICE);
    init_array(quantities, SIZE_QUANTITIES, QUANTITY);

    puts("prices array");
    print_array(prices, SIZE_PRICES);

    puts("quantities array");
    print_array(quantities, SIZE_QUANTITIES);

    
    printf("prices total amount: %i\n", get_total_amount(prices, SIZE_PRICES));
    printf("prices average value: %.2lf\n", get_average_value(get_total_amount(prices, SIZE_PRICES), SIZE_PRICES));

    int quantities_total_amount = get_total_amount(quantities, SIZE_QUANTITIES);
    double quantities_average_value = get_average_value(quantities_total_amount, SIZE_QUANTITIES);

    printf("quantities total amount: %i\n", quantities_total_amount);
    printf("quantities average value: %.2lf\n", quantities_average_value);

    
    return 0;
}