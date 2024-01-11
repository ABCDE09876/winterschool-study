/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void coin_flip_simulation() {
    int user_guess;

    srand(time(NULL));

    while (1) {
        int result = rand() % 2;

        printf("앞(0) 또는 뒤(1)를 선택하시오: ");
        scanf("%d", &user_guess);

        if (user_guess == -1) {
            break;
        }

        if (result == user_guess) {
            printf("사용자가 이겼습니다\n");
        } else {
            printf("컴퓨터가 이겼습니다\n");
        }
    }
}

int main() {
    coin_flip_simulation();

    return 0;
}
*/