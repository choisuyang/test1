#include <stdio.h>

int main(void) {
    // char first[5][5] = {
    //     {'*', '\0'},
    //     {'\0','*', '\0'},
    //     {'\0','\0','*','\0'},
    //     {'\0','\0','\0','*','\0'},
    //     {'\0','\0','\0','\0','*'}
    // };
    // char second[5][5] = {
    //     {'\0','\0','\0','\0','*'},
    //     {'\0','\0','\0','*','\0'},
    //     {'\0','\0','*','\0'},
    //     {'\0','*', '\0'},
    //     {'*', '\0'},
    // };
    char first[5][5];'/'
    int i, j;
    char second[5][5];
    char third[5][5];

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            first[i][j] = ' ';
            second[i][j] = ' ';
        }

        first[i][i] = '*';
        second[i][4-i] = '*';
    }


    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if (first[i][j] == '*' || second[i][j] == '*') {
                third[i][j] = '*';
            } else {
                third[i][j] = ' ';
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c", third[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}