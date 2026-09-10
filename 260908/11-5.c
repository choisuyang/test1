#include <stdio.h>

int main(void) {
    int ary[5] = {10, 20, 30, 40, 50};
    int *p;

    p = ary;

    for (int i = 0; i < 5; i++) {
        printf("----> %d\n", *(p + i));
    }
}