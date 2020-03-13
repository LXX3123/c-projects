#include <stdio.h>
int main()
{
    int retry;
    do
    {
        int a;
        scanf("%d", &a);
        printf("a is %d\n", a);

        if (a > 0)
        {
            if (a % 2)
            {
                //这是奇数
                printf("%d 是奇数\n", a);
            }
            else
            {
                //偶数
                printf("%d 是偶数\n", a);
            }
        }
        else
        {
            printf("%d 不是正整数\n", a);
        }

        /* code */
        printf("是否再次运行，0为运行");
        scanf("%d", &retry);
    } while (retry == 0);

    return 0;
}
