#include <stdio.h>
#include <string.h>


int main(void) {

    FILE *fp;
    char text[200];
    int error_count = 0;
    int warning_count = 0;

    
    fp = fopen("log.txt", "r");
    if(fp == NULL) {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }

    while (fgets(text, sizeof(text), fp)) {
        if (strstr(text, "ERROR") != NULL) {
            error_count++;
        }

        if (strstr(text, "WARNING") != NULL) {
            warning_count++;
        }
    }

    printf("Error 는 %d 개 \n", error_count);
    printf("Warning 는 %d 개 \n", warning_count);

    fclose(fp);

    return 0;
}
