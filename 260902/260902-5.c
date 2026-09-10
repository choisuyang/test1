#include <stdio.h>

int main(void) {

    int a;
    int b,c;
    double da;
    char ch;

    a = 10;
    b = a;
    c = a +20;
    da = 3.5;
    ch = 'A';

    printf("value a : %d\n", a);
    printf("value b : %d\n", b);
    printf("value c : %d\n", c);
    printf("value da : %.1lf\n", da);
    printf("value ch : %c\n", ch);
    
    return 0;
}