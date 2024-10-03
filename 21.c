#include <stdio.h>

void printRectangle(int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void printEllipse(int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if ((i == 0 || i == row - 1) && (j >= col / 4 && j <= 3 * col / 4)) {
                printf("*");
            }
            else if ((j == 0 && i > 0 && i < row - 1) || (j == col - 1 && i > 0 && i < row - 1)) {
                printf("*");
            }
            else if ((i == row / 2 && (j == 1 || j == col - 2))) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void printArrow(int height, int width) {
    for (int i = 1; i <= height; i++) {
        for (int j = i; j < height; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }
}

void printDiamond(int row) {
    for (int i = 1; i <= row; i += 2) {
        for (int j = i; j < row; j += 2) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (int j = 1; j < i; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    for (int i = row - 2; i >= 1; i -= 2) {
        for (int j = row; j > i; j -= 2) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (int j = 1; j < i; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int row = 9;
    int col = 9;
    int height = 3;
    int width = 6;

    printRectangle(row, col);
    printf("\n");
    printEllipse(row, col);
    printf("\n");
    printArrow(height, width);
    printf("\n");
    printDiamond(row);
    return 0;
}
