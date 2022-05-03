#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int dice1, dice2;

    srand((int)time(NULL));

    printf("주사위1의 결과: %d\n", rand() % 6 + 1);
    printf("주사의2의 결과: %d\n", rand() % 6 + 1);

    return 0;
}