#include <stdio.h>

int main(void){

    int age;
    double height;

    printf("age and height input : ");
    scanf("%d %lf", &age, &height);
    printf("age : %d, height : %.1lf\n", age, height);

    return 0;
}