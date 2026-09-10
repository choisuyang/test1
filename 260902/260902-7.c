#include <stdio.h>

int main(void) {

    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345;

    printf("short : %d\n", sh);
    printf("int : %d\n", in);
    printf("long : %ld\n", ln);
    printf("long long : %lld\n", lln);
    
    return 0;
}