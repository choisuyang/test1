#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void) {
    double r = 0.05;
    double W = 0.30;
    double eL = 0.0;
    double eR = 1.0;
    double L = 2.0;
    double DL = 0.0;
    double DR = 0.0;
    double rL = 0.0;
    double rR = 0.0;

    double epsL = eL / 100.0;
    double epsR = eR / 100.0;

    rL = r*(1.0 + epsL);
    printf("왼쪽바퀴 반경 %f\n", rL);
    
    rR = r*(1.0 + epsR);
    printf("오른쪽 바퀴 반경 %f\n", rR);


    double Rc = (W /2.0) * (rL + rR) / (rR - rL);
    
    // 편류각
    double delta_rad = L /Rc;
    double delta_deg = delta_rad * 180.0 / M_PI;

    double drift = Rc * (1.0 - cos(delta_rad));

    printf("\nResult\n");
    printf("좌/우 바퀴 반경 : %.4f m / %.4f m\n", rL, rR);
    printf("곡률 반경 Rc = %.2f m\n", Rc);
    printf("편류각  = %.2f deg\n", delta_deg);
    printf("편류거리 d_drift = %.3f m\n", drift);

    printf("(rkwjd :동일 각속도, 슬립없음, 미세 곡선 근사 )\n");

    return 0;

}