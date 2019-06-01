#include <stdio.h>
#include <stdarg.h>

int sum(int num_arg, ...)// int num_arg is # of arguments
{
    int val;
    int i;//counter
    va_list ap;//has macros to be initialized

    i = 0;
    val = 0;
    va_start(ap, num_arg);// initialize the list with arguments on the stack in th order (malloc?)...catches arguments
    while (i < num_arg)
    {
        val = val + va_arg(ap, int);// va_arg retirieve each argument via pointer ap
        i++; //pulls the argument one by one in the order they were listed
            //va arg needs to to know what type it is so it knows how big it is. Must be self promoting types
    }
    va_end(ap);//(free?)
    return (val);
}
int main(void)
{
    printf("Sum of 10, 20 and 30 = %d\n",  sum(3, 10, 20, 30));
    printf("Sum of 4, 20, 25 and 30 = %d\n",  sum(4, 4, 20, 25, 30));

    return (0);
}