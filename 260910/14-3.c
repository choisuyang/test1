#include <stdio.h>

int main(void) {
    int a = 10;
    int *pi;
    int **ppi;
    int ***pppi;

    pi = &a;
    ppi = &pi;
    pppi = &ppi;

    printf("------------------------------------\n");
    printf("변수    변숫값    &연산    *연산   **연산 \n");
    printf("  a%10d%10u\n",a,&a);
    printf(" pi%10u%10u%10d\n",pi, &pi, *pi);
    printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
    printf("pppi%10u%10u%10u%10u%10u\n", pppi, &pppi, *pppi, **pppi, ***pppi);
    printf("---------------------------------------");
}