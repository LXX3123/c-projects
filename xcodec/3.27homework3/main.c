/*
 输入10个字符，统计其中的英文字母、数字字符和其他字符的个数。
 int letter, digit, other, i;
 char ch;
 letter = 0;
 digit = 0;
 other = 0;
 */

#include <stdio.h>
int main()
{
    int letter, digit, other;
    char ch;
    letter = 0;
    digit = 0;
    other = 0;
    printf("请输入10个字符； ");
    for (int i = 0; i <= 10; i++)
    {
        ch = getchar();
            if ((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z'))
                letter ++;
            else if (ch >= '0' && ch <= '9')
                digit ++;
            else if (ch == '\n')
                break;
            else
                other ++;
        
    }
    printf("letter = %d, dight = %d, other = %d\n", letter, digit, other);
    return 0;
}
