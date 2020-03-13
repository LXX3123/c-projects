/*
显示读取出的整数的最后一位数字
*/
#include <stdio.h>
int main()
 
{
    int a;
    printf("请输入一个数组：");
    scanf("%d",&a);
    int b;
    b=a%10;
    printf("%d的最后一位是%d\n",a,b);
    return 0;



}

