//如何尽量少的使用乘法运算完成阶乘表的打印

#include <stdio.h>
int main(void)
{
    int product;
    product = 1;
    for (int i = 1; i <= 10; i++ )
    {
        product = product * i;
        printf("%d的阶乘 = %d\n", i, product);
    }
    return 0;
}


