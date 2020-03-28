/*
  F C
  40 4
  60 15
  80 26
 100 37
 120 48
 140 60
 160 71
 180 82
 200 93
 220 104
 240 115
 300 148
 我们已经学习过摄氏和华氏温
 度的转换方法，请运用所学知
 识，打印左侧所示温度转换
 表。
 220和104中间有4个空格；
 没有华氏260和280
 */

#include <stdio.h>
int main(void)
{
    printf("  F      C\n");
    int celsius, fahr;
    for (int i = 40; i <= 240; i = i + 20)
    {
        fahr = i;
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d    %3d\n", fahr, celsius);
    }
    fahr = 300;
    printf("%3d    %3d\n", fahr, 5 * (fahr - 32) / 9);
    return 0;
        
    
}
