#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, num;

    printf("난수의 범위: 0부터 99까지\n");

    for (i = 0; i < 5; i++)
        printf("난수 출력: %d\n", rand() % 99 + 1);

    return 0;
}