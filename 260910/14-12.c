#include <stdio.h>

void swap_int(int *, int *);
void swap_double(double *, double *);

int main(void) {
    int first_age;
    double first_height;
    int second_age;
    double second_height;

    printf("첫 번째 사람의 나이와 키 입력 : ");
    scanf("%d %lf", &first_age, &first_height);

    printf("두 번째 사람의 나니와 키 입력 : ");
    scanf("%d %lf", &second_age, &second_height);

    swap_int(&first_age, &second_age);
    swap_double(&first_height, &second_height);

    printf("첫번째 사람의 나이와 키 : %d %lf\n", first_age, first_height);
    printf("두번째 사람의 나니와 키 : %d %lf\n", second_age, second_height);
}

void swap_int(int *first_age, int *second_age) {
    double temp = *first_age;
    *first_age = *second_age;
    *second_age = temp;
}

void swap_double(double *second_age, double * second_height) {
    double temp = *second_age;
    *second_age = *second_height;
    *second_height = temp;
}




