int func_one();
int func_two();

int func_one()
{
    return 1;
}

int func_two()
{
    return 2;
}

int main()
{
    /* Sum */
    int one = func_one();
    int two = func_two();
    int sum = one + two;

    return 0;
}