//
//  main.c
//  3.27
//
//  Created by edz on 2020/3/27.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(void)
{
    int year, money;
    double rate, sum;
    printf("enter money");
    scanf("%d", &money);
    printf("enter year");
    scanf("%d", &year);
    printf("enter rate");
    scanf("%lf", &rate);
    sum = money * pow((1+rate), year);
    printf("sum = %.2f", sum);
    return 0;
    
    
    
}
