#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int roll_dice() {
    return rand() % 6 + 1;  
}


void play_dice_game(int *user_score, int *computer_score) {
    *user_score = 0;
    *computer_score = 0;

    for (int i = 0; i < 3; ++i) {
        *user_score += roll_dice();
        *computer_score += roll_dice();
    }
}

int main() {
    int user_score, computer_score;


    srand(time(NULL));

    printf("사용자 주사위=(%d,%d,%d)\n", roll_dice(), roll_dice(), roll_dice());
    printf("컴퓨터 주사위=(%d,%d,%d)\n", roll_dice(), roll_dice(), roll_dice());
    play_dice_game(&user_score, &computer_score);

    if (user_score > computer_score) {
        printf("사용자 승리\n");
    } else if (user_score < computer_score) {
        printf("컴퓨터 승리\n");
    } else {
        printf("무승부입니다!\n");
    }

    return 0;
}
