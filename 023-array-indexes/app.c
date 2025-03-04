#include <stdio.h>

int main(void)
{
    int local = 5;

    int a[] = {1, 2, 3, 4};
            // 0  1  2  3 <- indexes
    double b[] = {1.1, 2.2, 3.3, 4.4};

    char anton[] = {'A', 'N', 'T', 'O', 'N'};
    char ant[] = {'A', 'N', 'T'};

    puts("variable: local");
    printf("local: %i\n", local);

    puts("----");

    puts("array: integer a[4]");
    printf("a[0]: %i\n", a[0]);
    printf("a[1]: %i\n", a[1]);
    printf("a[2]: %i\n", a[2]);
    printf("a[3]: %i\n", a[3]);

    puts("----");

    puts("array: double b[4]");
    printf("b[0]: %.1lf\n", b[0]);
    printf("b[1]: %.1lf\n", b[1]);
    printf("b[2]: %.1lf\n", b[2]);
    printf("b[3]: %.1lf\n", b[3]);

    puts("----");

    puts("array: char anton[5]");
    printf("anton[0]: %c\n", anton[0]);
    printf("anton[1]: %c\n", anton[1]);
    printf("anton[2]: %c\n", anton[2]);
    printf("anton[3]: %c\n", anton[3]);
    printf("anton[4]: %c\n", anton[4]);

    puts("----");

    puts("array: char ant[3]");
    printf("ant[0]: %c\n", ant[0]);
    printf("ant[1]: %c\n", ant[1]);
    printf("ant[2]: %c\n", ant[2]);

    return 0;
}