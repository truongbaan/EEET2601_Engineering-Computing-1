#include <stdio.h>
#include <conio.h> // For non-blocking input
typedef struct{int row; int column;}PlayerPosition;
#define BOARD_SIZE 10
char board[BOARD_SIZE][BOARD_SIZE];

void clearScreen() {
    printf("\033[H\033[J"); // ANSI escape sequence to clear screen
}

void initializeBoard() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

void displayBoard(){
    printf("How to move:\n");
    printf("    A - move left\n");
    printf("    D - move right\n");
    printf("    W - move up\n");
    printf("    S - move down\n");
    printf("    Q - quitting the program\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("| ");
        for(int j = 0; j<BOARD_SIZE; j++){
            printf("%c | ",board[i][j]);
        }
        if (i < BOARD_SIZE - 1) {
            printf("\n|---|---|---|---|---|---|---|---|---|---|\n");
        }
    }
    printf("\n");
    printf("-----------------------------------------\n");
}

void CheckMoveLegit(PlayerPosition *player, PlayerPosition *before_player, char movement, int *result){
    *result = 1;
    PlayerPosition duplicate_player = *player;
    if(movement=='a'){
        duplicate_player.row--;
    }
    else if(movement == 'w'){
        duplicate_player.column--;
    }
    else if(movement == 's'){
        duplicate_player.column++;
    }
    else if(movement == 'd'){
        duplicate_player.row++;
    }
    if(duplicate_player.row>=0 && duplicate_player.row <BOARD_SIZE && duplicate_player.column>=0 && duplicate_player.column<BOARD_SIZE){
        *before_player = *player;
        *player = duplicate_player;
    }
    else{
        printf("There is no more space to go!\n");
        *result = -1;
    }
}

void ChangePosition(char board[10][10], PlayerPosition *player, PlayerPosition *before_player){
    board[player->column][player->row]='X';
    board[before_player->column][before_player->row]=' ';
}
int main() {
    int result = 1;
    char movement;
    PlayerPosition player = {0,0}, before_player = {0,0};
    initializeBoard();
    board[0][0]='X';
    displayBoard();
    while (1) {
        if (_kbhit()) { // Check if a key is pressed
            clearScreen();
            movement = _getch(); // Read the key without waiting for Enter
            if (movement == 'q') {
                printf("Quitting the program. Thank you for playing\n");
                break; // Exit the loop
            } else if (movement == 'a') {
                CheckMoveLegit(&player, &before_player, movement,&result);
                ChangePosition(board, &player, &before_player);
                if(result ==1){
                    printf("Moving left\n");
                }
            } else if (movement == 'w') {
                CheckMoveLegit(&player, &before_player, movement,&result);
                ChangePosition(board, &player, &before_player);
                if(result ==1){
                    printf("Moving up\n");
                }
            } else if (movement == 'd') {
                CheckMoveLegit(&player, &before_player, movement,&result);
                ChangePosition(board, &player, &before_player);
                if(result ==1){
                    printf("Moving right\n");
                }
            } else if (movement == 's') {
                CheckMoveLegit(&player, &before_player, movement,&result);
                ChangePosition(board, &player, &before_player);
                if(result==1){
                    printf("Moving down\n");
                }
            } else {
                printf("Invalid input\n");
            }
            displayBoard();
        }
    }
    return 0;
}
