#include <stdio.h>

int main(void) {
    FILE *fp;
    int ch;

    fp = fopen("/home/test/test/test1/260910/test.txt", "r");
    if(fp == NULL) {
        printf("파일이 열리지 않습니다.\n");
        return 0;
    }

    while (1)
    {
        ch = fgetc(fp);
        if(ch == EOF) {
            break;
        }
        putchar(ch);
    }
    fclose(fp);
    

    return 0;
}