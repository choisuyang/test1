#include <stdio.h>
#include <string.h>

void my_strcat(char *str, const char *txt);

int main(void) {
    char str[80] = "straw";
    my_strcat(str, "berry");
    printf("%s\n", str);

    return 0;
}


void my_strcat(char *str, const char *txt) {
    int index = strlen(str);

    printf("---->%d", index);
    printf("---33>%d", *txt);

    while (*txt != '\0') {
        str[index++] = *txt++;
    }
    str[index] = '\0';
}