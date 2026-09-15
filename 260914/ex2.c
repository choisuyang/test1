#include <stdio.h>

void check_battery_status(double arr[], int size);
double calc_average(double arr[], int size);

int main(void) {
    double bettery[10];
    int i;

    printf("전압 입력은 10.0V ~ 13.0V 로 입력해주세요 10개 : \n");
    
    for(i = 0; i < 10; i++) {
        scanf("%lf", &bettery[i]);
    }

    check_battery_status(bettery, 10);


    return 0;
}

double calc_average(double arr[], int size) {
    double sum = 0.0;
    int i;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum/size;
}

void check_battery_status(double arr[], int size) {
    int waring = 0;
    int i;
    double avg = calc_average(arr, size);

    for (i = 0; i < size; i++ ){
        if (arr[i] <= 11.0) {
            waring++;
        }
    }


    printf("\n 평균 전압 : %.2lfV\n", avg);

    if (waring >= 3) {
        printf("배터리 위험 - 충전 필요\n");
    } else if (avg < 11.5) {
        printf("배터리 저하 - 전력 절약 모드\n");
    } else {
        printf("정상 전압 상태");
    }
}