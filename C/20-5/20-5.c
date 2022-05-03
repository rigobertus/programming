#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int user, com;
    int numOfWin = 0, numOfTie = 0;
    char *result[] = { "바위", "가위", "보" };

    do {
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &user);

        srand((int)time(NULL));
        com = rand() % 3 + 1;

        if ((user == 1 && com == 2) || (user == 2 && com == 3) || (user == 3 && com == 1)) {
            printf("당신은 %s 선택, 컴퓨터는 %s, 이겼습니다.!\n", result[user - 1], result[com - 1]);
            numOfWin++;
        } else if (user == com) {
            printf("당신은 %s 선택, 컴퓨터는 %s, 비겼습니다.!\n", result[user - 1], result[com - 1]);
            numOfTie++;
        } else {
            printf("당신은 %s 선택, 컴퓨터는 %s, 당신이 졌습니다.!\n", result[user - 1], result[com - 1]);
            break;
        }
    } while (1);

    printf("게임의 결과: %d승, %d무\n", numOfWin, numOfTie);

    return 0;
}