#include <stdio.h>

int main(void) {
    int ary0[6] = {1, 2,3,4,5,0};
    int ary1[6] = {6, 7, 8, 9, 10,0};
    int ary2[6] = {11, 12, 13, 14, 15,0};
    int ary3[6] = {16, 17, 18, 19, 20,0};
    int ary4[6] = {0, 0, 0, 0, 0, 0};
    int *pary[5] = {ary0, ary1, ary2, ary3, ary4};
    int row_ary_total;
    int col_ary_total;

    int i, j;

    // for(i = 0; i < 5; i++) {
    //     row_ary_total = 0;
    //     for(j = 0; j < 6; j++) {
    //         printf("%5d\t", pary[i][j]);
    //         row_ary_total += pary[i][j];
    //         pary[i][5] = row_ary_total;

    //         // col_ary_total = 0;
    //         // // printf("---->%d\n", pary[i][j]);
    //         // col_ary_total += pary[i][j];
    //         // pary[4][j] += col_ary_total;
    //     }
    //     printf("\n");
    // }

    for (i = 0; i < 6; i++) {
        
        for (j = 0; j < 4; j++) {
            col_ary_total += pary[j][i];
            pary[4][i] += col_ary_total;
            col_ary_total = 0;
        }
        printf("\n");
    }

    for(i = 0; i < 5; i++) {
        row_ary_total = 0;
        for(j = 0; j < 6; j++) {
            printf("%5d\t", pary[i][j]);
            row_ary_total += pary[i][j];
            pary[i][5] = row_ary_total;

            // col_ary_total = 0;
            // // printf("---->%d\n", pary[i][j]);
            // col_ary_total += pary[i][j];
            // pary[4][j] += col_ary_total;
        }
        printf("\n");
    }



    return 0;
}