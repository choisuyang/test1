#include <stdio.h>

int main(void) {
    char str[5];

    printf("문자열 입력 : ");
    fgets(str, 10, stdin);
    puts("입력된 문자열 : ");
    puts(str);

    return 0;
}