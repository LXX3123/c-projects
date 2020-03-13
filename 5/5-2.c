#include <stdio.h>
void pyramid(int n)
{
    int k, j;
    for (k = 1; k <= n; k++)
    {
        for (j = 1; j <= n - k; j++)
            printf(" "); /* 空格 */
        for (j = 1; j <= k; j++)
            printf("%d", k); /* 数字 */
        putchar('\n');        /* 换行 */
    }
}

int main(void)
{
    pyramid(5);
    return 0;
}
