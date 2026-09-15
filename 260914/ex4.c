#include <stdio.h>

struct WheelSpeed
{
    double left;
    double right;
};

struct RobotSpeed
{
    double linear;
    double angular;
};



int main(void) {
    WheelSpeed ws;
    RobotSpeed rs;
    double wheel_radius;
    double wheel_distance;

    printf("왼쪽 바퀴 속도(rad/s) : ")
    scanf("%lf", ws.left);

    printf("오른쪽 바퀴 속도(rad/s) : ")
    scanf("%lf", ws.right);

    printf("바퀴 반지름(m) : ")
    scanf("%lf", &wheel_radius);

    printf("바퀴 간 거리(m) : ")
    scanf("%lf", &wheel_distance);

    printf("선속도 : ")
    scanf("%lf", rs.linear);

    printf("각속도 : ")
    scanf("%lf", rs.angular);


    return 0;
}