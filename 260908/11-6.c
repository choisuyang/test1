#include <stdio.h>

int my_stlen(char *txt);


int main(void) {
    char text[20];

    printf("문자열을 입력하세요 : ");
    scanf("%s", text);

    int length_value = my_stlen(text);
    printf("문자열 길이는 : %d \n", length_value);

    return 0;
}

int my_stlen(char *txt) {
    int count = 0;

    while(*txt != '\0') {
        count++;
        *txt++;
    }
    return count;
}