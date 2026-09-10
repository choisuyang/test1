#include <stdio.h>

int main(void) {
    int a = 0;
    int i;

    for (i = 1; i <= 5000; i++){
        a += i;
    }
    printf("a = %d\n", a);

    return 0;
}