/*
 编写一段程序，像下面这样显示读取到的三个整数的和。

 请输入三个整数。
 整数1:7↙
 整数2:15↙
 整数3:23↙
 它们的和是45。
 */

#include <stdio.h>
#include <math.h>
int main()
{
    int flag, domi;
    double sum, item;
    item = 1;
    sum = 0;
    flag = 1;
    domi = 1;

    while ( fabs(item) > 0.0001 )
    {
        item = flag * 1.0/domi;
        sum = sum + item;
        domi = domi + 2;
        flag = -flag;
    }

    printf("派的值是%f\n", sum*4);
    return 0;
}

