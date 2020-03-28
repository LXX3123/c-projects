//
//  main.c
//  test2
//
//  Created by edz on 2020/3/27.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int factorial(int n);
    for(int i=0;i<=100;i++)
    {
        printf("%d 的阶乘是：%x\n", i, factorial(i));
    }
    return 0;
}

int factorial( int n )
{
    int i;
    int fact = 1;
    for(i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
 }
