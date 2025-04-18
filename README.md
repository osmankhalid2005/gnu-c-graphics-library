# gnu-c-graphics-library
The information about how to use the graphics in gnu c

This tutorial explains how to configure a graphics library with GNU C and create graphics programs.

NOTE: This graphics library was created for 32-bit systems, so it won't work with 64 bit version of MingW.

The following steps were performed and successfully tested on Windows 11.

1. Download the Visual Studio Code

2. Integrate Co-Pilot with VS Code using your github account.

3. In extensions icon, install the following extensions:

C/C++ by Microsoft

C/C++ Extension

exe Runner

Exit Visual Studio Code

4. Download MinGW setup from this URL:
https://sourceforge.net/projects/mingw/

5. Run setup of MinGW, and under basic step, check the following packages:

mingw32-base

mingw32-gcc-g++

msys-base

Click on mark for installation, and then from the installation menu, click on apply changes.

6. In search bar, write "env", and click the "Edit the System Environment variables", click on button "Environment Variables".
Under "System variables" double click on "Path", and add the following path: C:\MinGW\bin

7. From the following URL: 

https://github.com/osmankhalid2005/gnu-c-graphics-library

Download the zip file, and unzip.

8. From the "configuration_files" folder, copy the files "winbgim.h" and "graphics.h", and place in the following folder:

C:\MinGW\include

9. From the "configuration_files" folder, copy the file "libbgi.a" and place in the following folder:

C:\MinGW\lib

10. In Visual Studio Code, open the folder "graphicsproject", and click on Run C/C++ File from the menu. You will see the output showing a line, circle, and triangle.

Alternatively, you can also build the project with this command:

g++ main.cpp -o main.exe -I/mingw32/include -L/mingw32/lib -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 

and then run the main.exe by right clicking on it, and click "Run Executable".

......................

Documentation:

Run the sample programs in the "examples" folder to know about the functionality and implementations of graphic functions provided by the library. To run a program from "examples" folder, copy-paste its code in the main.cpp file in the graphicsproject folder.

The functions reference is available on the following URLs: 

http://winbgim.codecutter.org/V6_0/doc/index.html

https://home.cs.colorado.edu/~main/cs1300/doc/bgi/bgi.html

https://home.cs.colorado.edu/~main/cs1300/doc/bgi/index.html

Some sample exercises on this URL:

https://home.cs.colorado.edu/~main/cs1300/README.html


You can also ask integrated co-pilot to generate basic graphic programs.

Good Luck!


Dr. Osman Khalid

Associate Professor

COMSATS University Islamabad,

Abbottabad Campus

https://sites.google.com/view/osmankhalid
