#include <stdio.h>

int get_num(void);


int main(void) {
    int result;

    result = get_num();
    printf("입력한 값 1 : %d\n", result);
    result = get_num();
    printf("입력한 값 2 : %d\n", result);
    result = get_num();
    printf("입력한 값 3 : %d\n", result);
    result = get_num();
    printf("입력한 값 4 : %d\n", result);
    return 0;
}

int get_num(void) {
    int num;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    return num;
}