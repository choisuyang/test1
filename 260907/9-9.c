#include <stdio.h>

int main(void) {
    int N, i;
    double speed[100];
    int accel = 0, brake = 0;
    double diff;
    printf("주행로그 개수입력");
    scanf("%d", &N);
    printf("속도로그입력(단위 :km/h)\n");
    for(i = 0; i < N; i++ ){
        printf("%d번째 속도 : ", i+1);
        scanf("%lf",&speed[i]);
    }

    for (i = 1; i < N; i++) {
        diff = speed[i] - speed[i - 1];
        if(diff >= 10.0) {
            accel++;
        } else if (diff <= -10.0) {
            brake++;
        }
        printf("\n [주행로그분석결과] \n");
        printf("급가속발생횟수 : %d회\n", accel);
        printf("급제동발생횟수 : %d회\n",brake);
    }
}