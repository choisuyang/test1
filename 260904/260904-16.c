#include <stdio.h>

char StringCopy (char x, char y);

int main(void) {
    char str1[80] = "cat";
    char str2[80];

    // strcpy(str1, "tiger");
    // strcpy(str2, str1);
    StringCopy(str1, "tiger");

    printf("---> %c", str1);


    printf("%s, %s \n", str1, str2);

    return 0;
}

char StringCopy (char x, char y) {
    char copy1;
    char copy2;

    copy1 = y;
    printf("%c", copy1);
    return copy1;
}