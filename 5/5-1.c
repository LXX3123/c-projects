#include <stdio.h>
#include <stdlib.h>

/*定义函数even*/
int even(int n) {
    if (n % 2 ==1) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(int argc, char** argv) {

    int a = atoi(argv[1]);
    if (even(a)) {
        printf("%d is not even\n", a);
    }
    else {
        printf("%d is even\n", a);
    }
    return 0;
}