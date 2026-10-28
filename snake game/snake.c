// Very simple Snake (Windows)
// Compile: gcc snake_simple.c -o snake_simple
// Move with W A S D

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define W 20
#define H 10

int main() {
    int x[W * H] = {5, 4, 3};
    int y[W * H] = {5, 5, 5};
    int len = 3, dx = 1, dy = 0;
    int fx = 10, fy = 5;
    int i, r, c;

    while (1) {
        // input
        if (_kbhit()) {
            char k = _getch();
            if (k == 'w') { dx = 0; dy = -1; }
            if (k == 's') { dx = 0; dy = 1; }
            if (k == 'a') { dx = -1; dy = 0; }
            if (k == 'd') { dx = 1; dy = 0; }
        }

        // move
        for (i = len - 1; i > 0; i--) { x[i] = x[i - 1]; y[i] = y[i - 1]; }
        x[0] += dx;
        y[0] += dy;

        // game over?
        if (x[0] < 0 || x[0] >= W || y[0] < 0 || y[0] >= H) break;
        for (i = 1; i < len; i++)
            if (x[i] == x[0] && y[i] == y[0]) { printf("Game Over! Score: %d\n", len - 3); return 0; }

        // eat food
        if (x[0] == fx && y[0] == fy) {
            len++;
            x[len - 1] = x[len - 2];
            y[len - 1] = y[len - 2];
            fx = rand() % W;
            fy = rand() % H;
        }

        // draw
        system("cls");
        for (r = 0; r < H; r++) {
            for (c = 0; c < W; c++) {
                char ch = '.';
                if (c == fx && r == fy) ch = '*';
                for (i = 0; i < len; i++)
                    if (x[i] == c && y[i] == r) ch = 'O';
                printf("%c", ch);
            }
            printf("\n");
        }

        Sleep(200);
    }

    printf("Game Over! Score: %d\n", len - 3);
    return 0;
}