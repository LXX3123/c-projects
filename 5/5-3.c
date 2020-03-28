#include <stdio.h>
void inverpyramid(int n)
{
    int k, j;
    for (k = 1; k <= n; k++)
    {
        for (j = 1; j <= k; j++)
            printf(" "); /* 空格 */
        for (j = 1; j <= n - k; j++)
            printf("* ");
        putchar('\n'); /* 换行 */
    }
}

int main(void)
{
    inverpyramid(5);
    return 0;
}