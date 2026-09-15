#include <stdio.h>
#include <string.h>

typedef struct {
    char value[19];
    int count;
} ResultCount;

int main(void) {
    FILE *fp;
    char text[50000];
    int check_ping = 0;
    int hour_count[22] = {0};
    int best_hour = 0;
    int best_time = 0;
    ResultCount results[1000] = {0};
    int result_count = 0;

    fp = fopen("fast.txt", "r");
    if(fp == NULL) {
        printf("입력 파일을 열지 못 했습니다.\n");
        return 1;
    }
    

    while (fgets(text, sizeof(text), fp)){
        if(strstr(text, "Ping")) {
            check_ping++;
        }

        if (strlen(text) <= 152) {
            continue;
        }

        char result[19];
        size_t result_length = strlen(text + 152);
        if (result_length > 18) {
            result_length = 18;
        }
        memcpy(result, text + 152, result_length);
        result[result_length] = '\0';

        int found = 0;
        for (int i = 0; i < result_count; i++) {
            if (strcmp(results[i].value, result) == 0) {
                results[i].count++;
                found = 1;
                break;
            }
        }

        if (!found && result_count < 1000) {
            strcpy(results[result_count].value, result);
            results[result_count].count = 1;
            result_count++;
        }
        
        for (int hour = 3; hour <= 21; hour++) {
            char condition[6];
            snprintf(condition, sizeof(condition), "-%02d:", hour);

            if (strstr(text, condition) != NULL) {
                hour_count[hour]++;
                if (best_time < hour_count[hour]) {
                    best_time = hour_count[hour];
                    best_hour = hour;
                }
            }
        }
    }


    printf("PING 은 몇회에 반복해서 노출되었나? : %d \n", check_ping);

    for (int hour = 3; hour <= 21; hour++) {
        printf("%02d시: %d회\n", hour, hour_count[hour]);
    }

    printf("가장 많이 나온 시간: %02d시 (%d회)\n", best_hour, best_time);

    printf("결과값 상위 3개:\n");
    for (int rank = 0; rank < 3; rank++) {
        int best_index = -1;

        for (int i = 0; i < result_count; i++) {
            if (results[i].count > 0 &&
                (best_index == -1 ||
                 results[i].count > results[best_index].count)) {
                best_index = i;
            }
        }

        if (best_index == -1) {
            break;
        }

        printf("%d위: %s (%d회)\n", rank + 1,
               results[best_index].value, results[best_index].count);
        results[best_index].count = -1;
    }
    
    fclose(fp);

    return 0;
}