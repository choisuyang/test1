#include <stdio.h>

int main(void){
    double dist[360];
    int i, min_index = 0;
    double min_value;

    for (i = 0; i < 5; i++) {
        printf("라이더의 거리를 입력하세요 : ");
        printf("%3d 거리(cm) : ", i);
        scanf("%lf", &dist[i]);
    }
    


    min_value = dist[0];
    for (i = 1; i < 5; i++) {
        if (dist[i] < min_value) {
            min_value = dist[i];
            min_index = i;
        }
    }

    
    printf("min 최소거리 : %.1f", min_value);
    printf("min_index는 최소 거리 방향 : %d\n", min_index);
    return 0;

    
}