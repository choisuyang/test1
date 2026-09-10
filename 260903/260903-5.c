#include <stdio.h>

int main(void){
    // int whellNum = 2, totalWeight = 200;
    // float safeFactory = 2.0, designMargin = 1.2;
    // int whellRedius = 0.0965;
    // float torque = 0.63;
    // int rowSpeed = 10;
    // float c = 0.018;
    // float g = 9.81;
    // float w = 0;
    
    // float fMin = 0;
    // float fMotor = 0;

    // printf("구동 바퀴 수 입력 :");
    // scanf("%d", &whellNum);
    // printf("총 하중(질량) 입력 :");
    // scanf("%d", &totalWeight);
    // printf("안전계수 입력 : ");
    // scanf("%d", &safeFactory);
    // printf("설계마진 입력 : ");
    // scanf("%d", &designMargin);
    // printf("바퀴 반지름 입력 : ");
    // scanf("%d", &whellRedius);
    // printf("토크 입력 : ");
    // scanf("%d", &torque);
    // printf("감속비 입력 : ");
    // scanf("%d", &rowSpeed);

    // w = totalWeight * g;
    // printf("--->%d\n", w);
    // fMin = c * w * safeFactory * designMargin;
    // printf("--->%d\n", fMin);
    // fMotor = ((torque * rowSpeed)/whellRedius) * whellNum;
    // printf("---->%d\n", fMotor);

    // printf("총하중 : %d\n", totalWeight);
    // printf("구동 바퀴 수 : %d\n", whellNum);
    // printf("모터 정격 토크 : %d\n", torque);
    // printf("감속비 : %d\n", rowSpeed);
    // printf("바퀴 반지름 : %d\n", whellRedius);

    // printf("필요한 최소 견인력 : %2lf\n", fMin);
    // printf("모터가 낼수있는 견인력 : %d\n", fMotor);
    
    // if (fMin <= fMotor){
    //     printf("판정 불남족 (더큰 모터나 감속비가 필요합니다!)\n");
    // } else {
    //     printf("판정 정확\n");
    // }
    
    double mass, torque, gear, radius, SF, margin;
    int wheels;

    const double g = 9.81;
    const double c = 0.018;

    printf("총 하중 : ");
    scanf("%lf", &mass);
    printf("구동 바퀴 수 : ");
    scanf("%d", &wheels);
    printf("안전계수 :");
    scanf("%lf", &SF);
    printf("설계마진 입력) :");
    scanf("%lf", &margin);
    printf("모터 정격토크(NM) : ");
    scanf("%lf", &torque);
    printf("감속비 : ");
    scanf("%lf", &gear);
    printf("바퀴 반지름(m) : ");
    scanf("%lf", &radius);



    // 입력받은값으로 인력계산
    double W= mass * g;
    double F_min = c * W * SF * margin;
    double F_motor = (torque * gear /radius) *wheels;
    printf("\n 필요한 최소 견인력 : %.2f [N]\n",F_min);
    printf("모터가 낼 수 있는 견인력 : %.2f [N]\n", F_motor);

    if(F_motor >= F_min) {
        printf("pass");
    } else {
        printf("fail");
    }
    return 0;
    



}