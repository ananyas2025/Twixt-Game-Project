#include "functions.h"
#include<stdio.h>

int main() {
    printf("Welcome to Twixt! Starting a new game. Red begins.\n\n");
    char arr[24][24]={};
    for(int i=0; i<24; i++) {
        for(int j=0; j<24; j++) {
            arr[i][j]='.';
        }
    }
    board(arr);

    while(1) {
        int row, column;

        printf("Red's turn. Enter coordinates:\n");
        scanf("%d %d", &row, &column);
        if(row==0 && column==0) {
            printf("Game exited.\n");
            return 0;
        }
        move_red(row, column, arr);
        printf("\n");

        printf("Black's turn. Enter coordinates:\n");
        scanf("%d %d", &row, &column);
        if(row==0 && column==0) {
            printf("Game exited.\n");
            return 0;
        }
        move_black(row, column, arr);
        printf("\n");
    }
    return 0;
}