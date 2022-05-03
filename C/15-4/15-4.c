#include <stdio.h>

int getLength(char str[]) {
    int i = 0, len = 0;

    while (str[i++] != '\0')
        len++;

    return len;
}

int main(void) {
    char str[] = "";
    int length, start, end, flag = 1;

    printf("문자열 입력: ");
    scanf("%s", str);

    length = getLength(str);

    if (length == 1) {
        flag = 0;
        printf("최소 문자 2개 이상 입력하세요.\n");
    }

    start = 0;
    end = length - 1;

    while (start <= (length / 2 - 1)) {
        if (str[start] != str[end]) {
            flag = 0;
            printf("회문 아닙니다.\n");
            break;
        } else {
            start++;
            end--;
        }
    }

    if (flag)
       printf("회문입니다.\n"); 

    return 0;
}