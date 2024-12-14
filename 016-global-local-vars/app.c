#include <stdio.h>

int global = 1;

int function(void)
{
    puts("function: local");
    
    int local = 100;

    printf("local: %i\n", local);

    return 0;
}

int main(void)
{
    puts("function: main");

    int local = 150;

    printf("local: %i\n", local);

    function();

    return 0;
}