#include <stdio.h>

int main(void) {
    int ary[5];

    printf("ary의 값 : %u\t",ary);
    printf("ary의 주소 : %u\n", &ary);
    printf(" ary + 1 : %u\t", ary + 1); // 그다음 인덱스 값을 확인함
    printf("&ary + 1 : %u\n", &ary + 1);  // 총 20바이트에 대해서 점프를함 할당 되지않은곳 이동됨


    return 0;
}