#include <stdio.h>

int main(void) {
    printf("%1d\n", 10);   // %d : 정수형 출력
    printf("%lf\n", 3.4);   // %lf : 실수형 출력
    printf("%.1lf\n", 3.45); // %.1lf : 소수점 1자리까지 출력
    printf("%.10lf\n", 3.5); // %.10lf : 소수점 10자리까지 출력
    printf("%d 과 %d 의 합은 %d 입니다.\n", 10, 20, 10 + 20); // %d : 정수형 출력   

    return 0;
}