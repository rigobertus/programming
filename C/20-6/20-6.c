#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int user[3], com[3];
    int numOfStrike, numOfBall, numOfChallange = 1;
    int i, j;

    printf("Start Game!\n");

    srand((int)time(NULL));
    com[0] = rand() % 10;

    i = 1;

    while (i < 3) {
        srand((int)time(NULL));
        com[i] = rand() % 10;

        if (com[i] == com[i - 1])
            continue;

        i++;
    }

    printf("%d %d %d\n\n", com[0], com[1], com[2]);

    do {
        numOfStrike = 0;
        numOfBall = 0;

        printf("3개의 숫자 선택: ");
        scanf("%d %d %d", &user[0], &user[1], &user[2]);

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (com[i] == user[j] && i == j) {
                    numOfStrike++;
                } else if (com[i] == user[j] && i != j) {
                    numOfBall++;
                }
            }
        }

        printf("%d번째 도전 결과: %dstrike, %dball!!\n", numOfChallange++, numOfStrike, numOfBall);
    } while (numOfStrike != 3);

    printf("\nGame Over!\n");

    return 0;
}