/*
 根据输入的月份输出该月的天数，假设该年份不是闰年
怎么用最少的分支结构完成
*/
#include <stdio.h>
int main()
{
    int month, year;
    printf("请输入年份：");
    scanf("%d", &year);
    printf("请输入月份：");
    scanf("%d", &month);
    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            printf("%d年%d月有29天\n", year, month);
        else
            printf("%d年%d月有28天\n", year, month);
    }
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
        printf("%d年%d月有31天", year, month);
    else
        printf("%d年%d月有30天", year, month);
}
