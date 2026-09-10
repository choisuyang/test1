#include <stdio.h>

int main(void) {
    int a = 10, b = 20;

    printf("교환전 a, b 의 값 : %d, %d\n", a, b);
    printf("교환전 a 주소, 교환전 b주소 : %p, %p\n", a,b);

    {
        int a, b, temp;
        printf("괄호 안의 a 주소, 괄호 안의 b 주소 : %p, %p\n", a, b);

        temp = a;
        a = b; 
        b = temp;
    }
    printf("교환 후 a, b 의 값 : %d, %d\n", a, b);
}