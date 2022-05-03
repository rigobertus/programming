#include <stdio.h>

int main(void) {
    int decimal, binary = 0, digit = 1;

    printf("10진 정수 입력: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        binary += (decimal % 2) * digit;
        digit *= 10;
        decimal /= 2;
    }

    printf("%d\n", binary);

    return 0;
}