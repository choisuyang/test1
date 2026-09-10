#include <stdio.h>

int main(void){
    char grade;
    char name[20];

    printf("grade input : ");
    scanf("%c", &grade);
    printf("name input : ");
    scanf("%s", name);
    printf("grade : %c, name : %s\n", grade, name); 

    return 0;

}