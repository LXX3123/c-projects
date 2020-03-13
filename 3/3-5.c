/*编写一段程序，读取两个整数的值，然后计算出它们之间所有整数的和。*/
/*此处假设先输入的数字较小，后输入的数字较大*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("请输入一个数：");
    scanf("%d", &a);
    printf("请输入二个数：");
    scanf("%d", &b);
    int sum = 0;
    int count = 0;
    int x = a;
    do
    {
        sum += x;
        count += 1;
        x += 1;
    } while (x <= b);
    printf("sum is %d\n", sum);

    return 0;
}