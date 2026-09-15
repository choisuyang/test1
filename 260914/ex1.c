#include <stdio.h>

void analyze_distance(int dist[], int size);

int main(void) {
    int distance[5];
    int i;

    printf("초음파 센서 범위를 입려해주세요 0이상 400이하...\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &distance[i]);
    }

    analyze_distance(distance, 5);

    return 0;
}

void analyze_distance(int dist[], int size) {
    int i;
    int count = 0;
    int count2 = 0;

    for (i = 0; i < size; i++){
        
        if (dist[i] <= 10) {
            count++;
        }

        if (dist[i] <= 30){
            count2++;
        }
        
    }
    if (count >= 2) {
            printf("긴급정지\n");
        } else if (count2 >= 3) {
            printf("감속주행\n");
        } else {
            printf("정상주행\n");
        }
}