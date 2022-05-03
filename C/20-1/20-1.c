#include <stdio.h>

void showArray(int (*ptr)[4]) {
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (ptr[i][j] < 10)
                printf("  %d", ptr[i][j]);
            else
                printf(" %d", ptr[i][j]);
        }

        printf("\n");
    }

    printf("\n");
}

void turnArray(int (*ptr)[4]) {
    int turn[4][4];
    int i, j;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            turn[j][3 - i] = ptr[i][j];

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            ptr[i][j] = turn[i][j];

    showArray(ptr);
}

int main(void) {
    int arr[4][4];
    int i, j;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            arr[i][j] = (i * 4) + j + 1;

    showArray(arr);
    turnArray(arr);
    turnArray(arr);
    turnArray(arr);

    return 0;
}