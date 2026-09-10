#include <stdio.h>

int main(void){
    int rank = 2, m = 0;
    int rank2 = 0, m2 = 0;

    scanf("%d %d", &rank2, &m2);

    switch(rank){
        case 1 :
            m = 300;
            break;
        case 2 :
            m = 200;
            break;
        case 3 :
            m = 100;
            break;
        default :
            break;
    }

    printf("기존 출력값 m : %d\n",m);
    printf("입력받은 출력값 rank : %d, m : %d\n", rank2, m2);
    return 0;
}