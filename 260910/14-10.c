#include <stdio.h>

int main(void) {
    int a = 10;
    double b = 3.5;
    void *vp;

    vp = &a;
    printf("---11>%p\n", &vp);
    printf("a: %d\n", *(int *)vp);

    vp = &b;
    printf("---22>%p\n", &vp);

    printf("b : %.1lf\n", *(double *)vp);


    return 0;
}