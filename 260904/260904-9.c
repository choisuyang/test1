#include <stdio.h>

int sum (int x, int y);

int main(void) {
    int a = 10, b = 20;
    int result;

    result = sum(a, b);
    printf("두 수의 합 : %d\n", result);

    return 0;
}

int sum (int x, int y) {
    int temp;

    temp = x + y;

    return temp;
}