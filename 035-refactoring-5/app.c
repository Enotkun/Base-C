#include <stdio.h>

#define SIZE_PRICES 9
#define SIZE_QUANTITIES 40
#define PRICE 100
#define QUANTITY 10

#define DELIMITER "----------------------"

/**
 * В прототипах можно удалить имена аргументов, но обязательно надо оставить
 * типы данных у аргументов, в том числе квадратные скобки т.к они сигнализируют,
 * что используется массив. Прототип(заголовок) функции иногда называют сигнатурой(синопсисом) функции.
 */
// Interface
void init_array(int[], const int, const int);
void print_array(const int[], const int, const char[]);
int get_total_amount(const int[], const int);
double get_average_value(const int, const int);
void print_array_info (const int[], const int, const char[]);

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
 * @param char name[]
 */
void print_array(const int array[], const int length, const char name[])
{
    printf("\nARRAY: %s\n", name);
    puts(DELIMITER);

    for (int i = 0; i < length; i++)
    {
        // 0 перед 2, говорит о том что те 2 символа отступа, при выводе, заполняются нулями
        printf("item[%02i]: %i\n", i, array[i]);
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
    return (double)total_amount / length;
}

/**
 * Print Array Info
 * @param int array[]
 * @param int length
 * @param char name[]
 */
void print_array_info (const int array[], const int length, const char name[])
{
    printf("\nARRAY INFO: %s\n", name);
    puts(DELIMITER);

    int total_amount = get_total_amount(array, length);
    printf("total amount: %i\n", total_amount);
    printf("average value: %.2lf\n", get_average_value(total_amount, length));
}

int main(void)
{
    int prices[SIZE_PRICES] = {0};
    int quantities[SIZE_QUANTITIES] = {0};

    init_array(prices, SIZE_PRICES, PRICE);
    init_array(quantities, SIZE_QUANTITIES, QUANTITY);

    print_array(prices, SIZE_PRICES, "prices");
    print_array(quantities, SIZE_QUANTITIES, "quantities");

    print_array_info(prices, SIZE_PRICES, "prices");
    print_array_info(quantities, SIZE_QUANTITIES, "quantities");

    return 0;
}