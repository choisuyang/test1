#include <stdio.h>

int main(void) {
    char *pary[5];
    int i;

    pary[0] = "dog";
    pary[1] = "elephant";
    pary[2] = "horse";
    pary[3] = "tiger";
    pary[4] = "lion";

    printf("pary[0] --- : %p\n", pary[0]);
    printf("pary[1] --- : %p\n", pary[1]);
    printf("pary[2] --- : %p\n", pary[2]);
    printf("pary[3] --- : %p\n", pary[3]);
    printf("pary[4] --- : %p\n", pary[4]);

    for(i = 0; i < 5; i++) {
        printf("%s\n", pary[i]);
    }

    return 0;
}