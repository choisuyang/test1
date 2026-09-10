#include <stdio.h>

double map(double value, double in_min, double in_max, double out_min, double out_max){
    double cal = (value - in_min) / (in_max - in_min);
    double result = out_min + cal * (out_max - out_min); return result;
}

void normalize(double sensor[], double norm[], int count, double in_min, double in_max, double out_min, double out_max){
    for (int i = 0; i < count; i++) {
        norm[i] = map(sensor[i], in_min, in_max, out_min, out_max);
    }
}




int main(void) {
    double sensor[5];
    double norm[5];

    double in_min, in_max, out_min, out_max;
    double percent;
    int i;

    printf("센서의 입력값 5개 입력 : ");
    for(i =0; i < 5; i++) {
        printf("%d번째 센서값 : ", i + 1);
        scanf("%lf", &sensor[i]);
    }
    

    printf("입력 범위 : (0~ 1023) in_min , in_max");
    scanf("%lf %lf", &in_min, &in_max);

    printf("출력 범위 : (0 ~ 100) out_min, out_max");
    scanf("%lf %lf", &out_min, &out_max);

    normalize(sensor, norm, 5, in_min, in_max, out_min, out_max);

    printf("\n[정규화 결과]\n");
    for(i = 0; i < 5; i++) {
        printf("%d 번째 센서값 %.1f -> 정규화 %.1f\n", i+1, sensor[i],norm[i]);
    }


    return 0;
}