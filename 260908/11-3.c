#include <stdio.h>

int main(void) {
    int a = 10;
    int *p;
    
    p = &a;
    printf("before a %d\n", a);

    *p = 20;
    printf("after a %d\n", a);   

}

