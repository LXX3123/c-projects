/*
 用最少的计算步骤完成素数判断
 以取模运算最少作为标准
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    int i;
    printf("请输入一个大于1整数： ");
    scanf("%d", &a);
    b = sqrt(a);
    for ( i = 2; i <= b; i++)
        if (a % i == 0)
            break;
    if (i == b + 1)
        printf("%d是素数\n", a);
    else
        printf("%d不是素数\n", a);
    return 0;
    
}
