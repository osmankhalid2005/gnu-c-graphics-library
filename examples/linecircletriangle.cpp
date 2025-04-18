#include <graphics.h>

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

    // Draw a line
    line(100, 100, 300, 100);

    // Draw a circle
    circle(200, 180, 50);

    // Draw a triangle
    line(150, 300, 250, 300); // Base
    line(150, 300, 200, 250); // Left side
    line(200, 250, 250, 300); // Right side

    // Wait for user input to close the graphics window
    getch();
    closegraph();

    return 0;
}
