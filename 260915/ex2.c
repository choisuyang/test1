#include <stdio.h>

void foo(int **p) {
    int x = 50;
    *p = &x;
}


int main(void) {
    int *p = NULL;
    foo(&p);
    printf("%d\n", *p);
    return 0;
}