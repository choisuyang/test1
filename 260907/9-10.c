#include <stdio.h>

int main(void) {
    int N, i;
    double battery[100];
    int warning = 0; // 0 : OFF, 1 : ON

    printf("배터리로그개수입력 : ");
    scanf("%d", &N);

    if (N < 0 || N > 100) {
        printf("배터리 로그 개수는 0~100 사이여야 합니다.\n");
        return 1;
    }

    printf("배터리잔량입력(%% 단위)\n");
    for (i = 0; i < N; i++) {
        printf("%d 번째잔량 : ", i + 1);
        scanf("%lf", &battery[i]);
    }

    for (i = 0; i < N; i++) {
        if (warning == 0 && battery[i] <= 30.0) {
            warning = 1; // 경고 ON
        } else if (warning == 1 && battery[i] >= 35.0) {
            warning = 0;
        }
        printf("%2d 번째 -> 잔량 : %5.1f%% | 경고상태 : %s\n",
               i + 1, battery[i], (warning == 1) ? "ON" : "OFF");
    }

    return 0;
}