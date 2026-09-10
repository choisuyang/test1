#include <stdio.h>

int main(void) {
    int i;
    int sum = 0;


    for (i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            continue;
            
        } 
        sum += i;
        

        printf("누적한 값 : %d\n", sum);

        if (sum > 500) {
            break;
        }
    }
    return 0;
}