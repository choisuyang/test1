#include <stdio.h>

int main(void) {
    printf("apple 이 저장된 시작 주소 값 : %p\n", "apple");
    printf("두번째 문자의 주소 값 : %p\n", "apple" + 1);
    printf("첫번째 문자 : %c\n", *"apple");
    return 0;
}