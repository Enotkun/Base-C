/** 
 * Upper Camel Case - WriteLine() <- C#, Java
 * Lower Camel Case - writeLine() <- JS, PHP
 * Snake Case - write_line() <- C
 */

int func_three()
{
    return 0;
}


//underscore - символ нижнего подчеркивания
int func_two()
{
    return func_three();
}
int func_one()
{
    return func_two();
}

int main()
{
    func_one();
    return 0;
}