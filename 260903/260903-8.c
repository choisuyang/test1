#include <stdio.h>
#include <math.h>

int main(void) {
    int  m = 20;
    double Tm = 0.20;
    int Nm = 2;
    int G = 10;
    double eta = 0.80;
    double r = 0.050;
    double c = 0.020;
    double SF = 1.5;
    double g = 9.81;
    
    double Ttot = 0;
    Ttot = Nm * Tm * G * eta;

    double Favail = 0;
    Favail = Ttot / r;

    double SinSeta = (Favail / SF - c*m*g) / m * g;
    if (SinSeta < 0.0) SinSeta = 0;
    if (SinSeta > 1) SinSeta = 1;

    double Fneed = 0;
    Fneed = m * g * SinSeta + c * m * g;

    double theta_rad = asin(SinSeta);
    // double theta_deg = theta_rad * 180 / M_PI;
    double grade_pct = tan(theta_rad)* 100.0;

    printf("\n[result]");
     
    
}