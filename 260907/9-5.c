#include <stdio.h>

int main(void) {
    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char 형 변수의 주소 크기 : %zu\n", sizeof(&ch));
    printf("int형 변수의 주소 크기 : %zu\n", sizeof(&in));
    printf("double형 변수의 주소 크기 : %zu\n", sizeof(&pd));

    printf("char * 포인터의 크기 : %zu\n", sizeof(pc));
    printf("int * 포인터 크기 : %zu\n", sizeof(pi));
    printf("double * 포인터 크기 : %zu\n", sizeof(pd));

    printf("char * 포인터가 가르키는 변수의 크기 : %zu\n", sizeof(*pc));
    printf("int * 포인터가 가르키는 변수의 크기 : %zu\n", sizeof(*pi));
    printf("double * 포인터가 가르키는 변수의 크기 : %zu\n", sizeof(*pd));

    return 0;
}