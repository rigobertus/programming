#include <stdio.h>

int main(void) {
    int arr[10], i, result[10], start = 0, end = 9;

    printf("총 10개의 숫자 입력\n");

    for (i = 0; i < 10; i++) {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if ((arr[i] % 2) != 0)
            result[start++] = arr[i];
        else
            result[end--] = arr[i];
    }

    printf("배열 요소의 출력: ");

    for (i = 0; i < 10; i++)
        printf("%d ", result[i]);

    return 0;
}