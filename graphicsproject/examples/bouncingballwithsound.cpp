#include <graphics.h>
#include <conio.h>
#include <windows.h> // For Beep()

int main() {
    int ErrorCode;
    // Initialize graphics mode
    initwindow(1024, 768, "BGI Demo", 0, 0, false, true);
    ErrorCode = graphresult(); // Read result of initialization
    if (ErrorCode != grOk) {   // Error occurred during init
        printf("Graphics System Error: %s\n", grapherrormsg(ErrorCode));
        exit(1);
    }

    // Circle properties
    int x = 100, y = 100; // Initial position
    int radius = 30;      // Radius of the circle
    int dx = 5, dy = 5;   // Change in position (speed)

    // Get screen dimensions
    int maxx = getmaxx();
    int maxy = getmaxy();

    while (!kbhit()) { // Loop until a key is pressed
        cleardevice(); // Clear the screen

        // Draw the circle
        setcolor(WHITE);
        circle(x, y, radius);
        floodfill(x, y, WHITE);

        // Update the position
        x += dx;
        y += dy;

        // Check for collisions with the edges and reverse direction
        if (x - radius <= 0 || x + radius >= maxx) {
            dx = -dx; // Reverse horizontal direction
            Beep(1000, 100); // Play sound (frequency: 1000 Hz, duration: 100 ms)
        }
        if (y - radius <= 0 || y + radius >= maxy) {
            dy = -dy; // Reverse vertical direction
            Beep(1000, 100); // Play sound (frequency: 1000 Hz, duration: 100 ms)
        }

        delay(30); // Add a small delay for smooth animation       
    }

    // Close graphics mode
    closegraph();
    return 0;
}