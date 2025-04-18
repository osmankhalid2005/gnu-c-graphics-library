#include <graphics.h>
#include <conio.h>

int main() {
        // Initialize the graphics mode and driver
        int ErrorCode;
        // Initialize graphics mode
        initwindow( 1024, 768, "BGI Demo", 0, 0, false, true );
      ErrorCode = graphresult();            /* Read result of initialization*/
      if( ErrorCode != grOk ){              /* Error occured during init    */
        printf(" Graphics System Error: %s\n", grapherrormsg( ErrorCode ) );
        exit( 1 );
      }

    // Set the background color to black
    setbkcolor(BLACK);
    cleardevice();

    // Set the color for the rectangle
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);

    // Draw and fill the rectangle
    int left = 100, top = 100, right = 530, bottom = 200;
    rectangle(left, top, right, bottom);
    floodfill((left + right) / 2, (top + bottom) / 2, GREEN);

    // Set the text color and style
    setcolor(WHITE);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);

    // Display the text inside the rectangle
    outtextxy(left + 20, (top + bottom) / 2 - 10, "Welcome to Graphic Programming");

    // Wait for a key press
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}
