#include <stdio.h>

// void swap(int *x,int *y) {
//     printf("--->%d", *y);
//     int temp;

//     temp = *x;
//     *x = *y;
//     *y = temp;

// }

// int main(void){
//     int a = 10, b = 20;


//     swap(&a, &b);

//     printf("----efef> %d %d", a, b);
// }

int swap2(int x,int  y) {
    printf("---->%d", x);

    int temp;
    temp = x;
    x = y;
    y = temp;

    return x,y;

}

int main(void) {
    int a = 10, b = 20;

    swap2(a, b);

    printf("dsffs %d %d ", a,b);

}