#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>

// Graphics library headers go here

const int WIDTH = 800;
const int HEIGHT = 600;
const int FRAME_DELAY = 50; // Delay between frames in milliseconds

void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    // Draw a triangle using the graphics library
    // ...
}

void drawSquare(int x1, int y1, int x2, int y2) {
    // Draw a square using the graphics library
    // ...
}

void drawCircle(int x, int y, int r) {
    // Draw a circle using the graphics library
    // ...
}

int main() {
    // Initialize graphics window
    // ...

    int x1 = WIDTH / 2;
    int y1 = HEIGHT / 2 - 100;
    int x2 = x1 - 100;
    int y2 = y1 + 100;
    int x3 = x1 + 100;
    int y3 = y1 + 100;
    int r = 100;

    for (int i = 0; i < 10; i++) {
        // Clear the screen
        // ...

        // Draw the triangle
        drawTriangle(x1, y1, x2, y2, x3, y3);

        // Wait for the specified number of milliseconds
        usleep(FRAME_DELAY * 1000);

        // Clear the screen
        // ...

        // Draw the square
        drawSquare(x2, y2, x3, y3);

        // Wait for the specified number of milliseconds
        usleep(FRAME_DELAY * 1000);

        // Clear the screen
        // ...

        // Draw the circle
        drawCircle(x1, y1, r);

        // Wait for the specified number of milliseconds
        usleep(FRAME_DELAY * 1000);
    }

    // Close the graphics window
    // ...

    return 0;
}
