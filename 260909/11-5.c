#include <stdio.h>

int main(void) {
    char *dessert = "apple";

    printf("apple 의 주소 %p\n", dessert);
    printf("오늘 후식은 %s입니다. \n", dessert);

    dessert = "banana";
    printf("내일 후식은 %s 입니다. \n", dessert);
    printf("banana 의 주소 %p \n", dessert);

    return 0;
}