#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if (a == b) {
        printf("a equals b\n");
    }
    else {
        printf("a not equals b\n");

    }
    printf("end\n");
    return 0;




}