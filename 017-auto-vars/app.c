#include <stdio.h>

int func_frame()
{
    auto int a = 1000;
    return 0;
}

void proc(void)
{
}

int main(void)
{
    func_frame();
    return 0;
}