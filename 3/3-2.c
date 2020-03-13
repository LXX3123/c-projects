/*如果输入的数为正，则判断该值的奇偶性并显示
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("a is %d\n", a);

    if (a>0) {
        if (a % 2) {
            //这是奇数
            printf("%d 是奇数\n", a);
        }
        else {
            //偶数
            printf("%d 是偶数\n", a);
            
        }
    }
    else {
        printf("%d 不是正整数\n", a);
    }
}