#include <limits.h>
#include <stdio.h>
int main()
{
    printf("int: %d ~ %d\n", INT_MIN, INT_MAX);
    printf("long: %ld ~ %ld\n", LONG_MIN, LONG_MAX);
    printf("short: %d ~ %d\n", SHRT_MIN, SHRT_MAX);
    return 0;
}