#include <stdio.h>

int main(void)
{
    int local = 0;

    puts("! prefix increment & decrement");

    /**
     * Increment / Увеличение значения
     * prefix
     */
    printf("++local: %i\n", ++local);
    printf("++local: %i\n", ++local);
    printf("++local: %i\n", ++local);

    /**
     * Decrement / Уменьшает значение
     * prefix
     */
    printf("--local: %i\n", --local);
    printf("--local: %i\n", --local);
    printf("--local: %i\n", --local);

    printf("local: %i\n", local);

    puts("! postfix increment & decrement");

    local = 0;

    printf("local++: %i\n", local++);
    printf("local++: %i\n", local++);
    printf("local++: %i\n", local++);

    printf("local--: %i\n", local--);
    printf("local--: %i\n", local--);
    printf("local--: %i\n", local--);

    printf("local: %i\n", local);

    ++local;
    /**
     * ++ унарный префексный инкремент в данном случае оператор,
     * совместно с переменной local состовляют выражение, в котором
     * переменная является операндом, а ";" в конце выражения означает, что все
     * вместе это уже инструкция.
     */
    local++;

    return 0;
}