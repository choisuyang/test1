#include <stdio.h>

int main(void){
    double l_load = 15;
    double vel = 700;
    int R = 0;

    double V = 14.4;
    double C = 6700;
    int eta = 1;

    double E_usable;
    double W;
    double h;
    double km;

    E_usable = V * C * eta * (1-R);
    printf("사용가능 에너지 : %lf\n", E_usable);

    W = (V * l_load) /eta;
    printf("소비전력 : %lf\n", W);

    h = (E_usable) / W;
    printf("런타임 : %lf\n", h);
    
    km = vel * h;
    printf("주행거리 : %lf\n", km);
    

}