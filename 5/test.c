#include <stdio.h>
int main(void)
{
    double x, y;
    printf("Enter x (x>=0):\n"); /* 输入提示 */
    scanf("%lf", &x);            /* 输入数据 */
    if (x <= 15)
        y = 4 * x / 3;
    else
        y = 2.5 * x - 10.5;
    printf("f(%f) = %.2f\n", x, y);
    return 0;
}