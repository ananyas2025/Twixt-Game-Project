#include "functions.h"
#include<stdio.h>

void board(char arr[24][24]) {
    for(int i=0; i<=24; i++) printf("%-2d ", i);
    printf("\n");

    for(int i=0; i<24; i++) {
        printf("%-2d ", i);
        for(int j=0; j<24; j++) {
            printf("%-2c ", arr[i][j]);
        }
        printf("\n");
    }

    return;
}

void move_red(int row, int column, char arr[24][24]) {
    if(column==1 || column==22) {
        printf("Cannot place red peg in black border row. Try again.\n");
        int r, c;
        scanf("%d %d", &r, &c);
        move_red(r, c, arr);
        return;
    }

    if(arr[row][column]!='.') {
        printf("Space already occupied. Try again.\n");
        int r, c;
        scanf("%d %d", &r, &c);
        move_red(r, c, arr);
        return;
    }

    arr[row-1 ][column]='R';
    board(arr);
    return;
}

void move_black(int row, int column, char arr[24][24]) {
    if(column==1 || column==23) {
        printf("Cannot place black peg in red border row. Try again.\n");
        int r, c;
        scanf("%d %d", &r, &c);
        move_black(r, c, arr);
        return;
    }

    if(arr[row][column]!='.') {
        printf("Space already occupied. Try again.\n");
        int r, c;
        scanf("%d %d", &r, &c);
        move_black(r, c, arr);
        return;
    }

    arr[row][column]='B';
    board(arr);
    return;
}
